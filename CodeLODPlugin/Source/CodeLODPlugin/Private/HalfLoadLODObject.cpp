// Fill out your copyright notice in the Description page of Project Settings.


#include "HalfLoadLODObject.h"
#include "CodeLODComponent.h"
#include "DetermineLODObject.h"
#include "FunctionObject.h"
#include "InlineObjectValue.h"
#include "Templates/SharedPointer.h"
#include "Kismet/GameplayStatics.h"
#include "LODNameSubsystem.h"
#include "InlineObject.h"
#include "CodeLODSubsystem.h"

UWorld* UHalfLoadLODObject::GetWorld() const
{
    if (GIsEditor && !GIsPlayInEditorWorld) return nullptr;
	
	if (NewOuter)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Black, NewOuter->GetWorld()->GetName(), true, FVector2D::UnitVector);
		return NewOuter->GetWorld();
	}
	UObject* Object = GetOuter();
	if (Object)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Black, GetOuter()->GetWorld()->GetName(), true, FVector2D::UnitVector);
		return GetOuter()->GetWorld();
	}

	return nullptr;

}

void UHalfLoadLODObject::PostInitProperties()
{
	Super::PostInitProperties();

	if (GetOuter() && GetOuter()->GetWorld())
	{
		BeginPlay();
	}
}

void UHalfLoadLODObject::BeginPlay_Implementation()
{

}

bool UHalfLoadLODObject::DefineLODObjectBySelf_Implementation()
{
	if (OwnerComponent)
	{
		return true;
	}
	return false;
}

bool UHalfLoadLODObject::DefineLODObjectByAnchor_Implementation()
{
	if (Anchor)
	{
		return Anchor->DefineLODChildObject(this);
	}
	return false;
}

bool UHalfLoadLODObject::DefineLODChildObject_Implementation(UHalfLoadLODObject* Object)
{
	for (UDetermineLODObject* DetermineObject : DetermineObjects)
	{
		if ( Object->GetClass()->IsChildOf(DetermineObject->DetemineClass))
		{
			return DetermineObject->DetermineLODObject(Object);
		}
	}
	return false;
}


void UHalfLoadLODObject::SerializeSelf_Implementation()
{

	if (InlineValues.IsValidIndex(0))
	{	
		SerializeInlineValues.Empty();
		for (UInlineObjectValue* InlineValue : InlineValues)
		{
			TArray<uint8> BiteArray;
			FMemoryWriter MemoryWriter(BiteArray, true);
			FSaveGameArchive arc(MemoryWriter);
			InlineValue->Serialize(arc);
			SerializeInlineValues.Add({ InlineValue, InlineValue->GetClass(), BiteArray });
		}
	}

	if (FunctionObjects.IsValidIndex(0))
	{
		SerializeFunctionObjects.Empty();
		for (UFunctionObject* FunctionObject : FunctionObjects)
		{
			TArray<uint8> BiteArray;
			FMemoryWriter MemoryWriter(BiteArray, true);
			FSaveGameArchive arc(MemoryWriter);
			FunctionObject->Serialize(arc);
			SerializeFunctionObjects.Add({ FunctionObject,FunctionObject->GetClass(), BiteArray });
		}
	}
	
	if (DetermineObjects.IsValidIndex(0))
	{
		SerializeDetermineObjects.Empty();
		for (UDetermineLODObject* DetermineObject : DetermineObjects)
		{
			TArray<uint8> BiteArray;
			FMemoryWriter MemoryWriter(BiteArray, true);
			FSaveGameArchive arc(MemoryWriter);
			DetermineObject->Serialize(arc);
			SerializeDetermineObjects.Add({ DetermineObject,DetermineObject->GetClass(), BiteArray });
		}
	}

}


void UHalfLoadLODObject::DeserialiseSelf_Implementation()
{
	if (SerializeInlineValues.IsValidIndex(0))
	{
		InlineValues.Empty();
		for (FSaveObjectStruct SaveStruct : SerializeInlineValues)
		{
			if (SaveStruct.ObjectClass)
			{
				UInlineObjectValue* Object = NewObject<UInlineObjectValue>(this, SaveStruct.ObjectClass, NAME_None, RF_NoFlags, nullptr, false, nullptr, nullptr);
				FMemoryReader MemoryReader(SaveStruct.SerializeArray, true);
				FSaveGameArchive arc(MemoryReader);
				Object->Serialize(arc);
				InlineValues.Add(Object);
			}
		}
	}


	if (SerializeFunctionObjects.IsValidIndex(0))
	{
		FunctionObjects.Empty();
		for (FSaveObjectStruct SaveStruct : SerializeFunctionObjects)
		{
			if (SaveStruct.ObjectClass)
			{
				UFunctionObject* Object = NewObject<UFunctionObject>(this, SaveStruct.ObjectClass, NAME_None, RF_NoFlags, nullptr, false, nullptr, nullptr);
				FMemoryReader MemoryReader(SaveStruct.SerializeArray, true);
				FSaveGameArchive arc(MemoryReader);
				Object->Serialize(arc);
				FunctionObjects.Add(Object);
				Object->OwnerLODObject = this;
			}
		}

	}

	if (SerializeDetermineObjects.IsValidIndex(0))
	{
		DetermineObjects.Empty();
		for (FSaveObjectStruct SaveStruct : SerializeDetermineObjects)
		{
			if (SaveStruct.ObjectClass)
			{
				UDetermineLODObject* Object = NewObject<UDetermineLODObject>(this, SaveStruct.ObjectClass, NAME_None, RF_NoFlags, nullptr, false, nullptr, nullptr);
				FMemoryReader MemoryReader(SaveStruct.SerializeArray, true);
				FSaveGameArchive arc(MemoryReader);
				Object->Serialize(arc);
				Object->OwnerLODObject = this;
				DetermineObjects.Add(Object);
			}
		}
	}
}

void UHalfLoadLODObject::ChangeLoadStatus_Implementation(ELoadStatus NewStatus)
{
	//Ignore if constant
	if (!Constant)
	{
		if (LoadStatus != NewStatus)
		{
			switch (NewStatus)
			{

			case ELoadStatus::Load:

				if (LoadStatus == ELoadStatus::HalfLoad)
				{
					int x = 0;
					UE_LOG(LogTemp, Warning, TEXT("There is no value under the desired name. An InlineObject with the same class is output."));
				}

				if (LoadStatus == ELoadStatus::Unload)
				{
					LoadSelf();
				}
				DefineLODObjectByAnchor();
				LoadOwnerActor();
				break;

			case ELoadStatus::HalfLoad:
				if (ELoadStatus::Load == LoadStatus)
				{
					DefineLODObjectBySelf();
					UnloadOwnerActor();
				}
				else
				{
					LoadSelf();
				}

				break;
			case ELoadStatus::Unload:
				if (ELoadStatus::Load == LoadStatus)
				{
					DefineLODObjectBySelf();
					UnloadOwnerActor();
				}

				UnloadSelf();
				break;

			default:
				break;
			}
			LoadStatus = NewStatus;
			ChangeLoadStatusDelegate.Broadcast();
		}
	}
}

void UHalfLoadLODObject::UnloadSelf_Implementation()
{
	SerializeSelf();
	LoadStatus = ELoadStatus::Unload;
	TArray<FLODSaveDataStruct> LocalChilds = Childs;
	for (FLODSaveDataStruct Child : LocalChilds)
	{
		if (Child.HardRefLODObject)
		{
			Child.HardRefLODObject->ChangeLoadStatus(ELoadStatus::Unload);
		}
	}
	if (Anchor)
	{
		Anchor->RegisterChild({ nullptr, this, FName(GetSaveLODName()) });
	}
	UGameplayStatics::SaveGameToSlot(this, GetSaveLODName(), 0);
}

void UHalfLoadLODObject::UnloadOwnerActor_Implementation()
{
	ActorClass = OwnerComponent->GetOwner()->GetClass();
	OwnerComponent->GetOwner()->Destroy();
}

void UHalfLoadLODObject::LoadSelf_Implementation()
{
	DeserialiseSelf();
	Anchor->RegisterChild({ this, this, FName(GetSaveLODName()) });
	BeginInitializeLOD();
}

void UHalfLoadLODObject::LoadAllChildObjects_Implementation()
{
	TArray<FLODSaveDataStruct> LoadChilds = Childs;
	int index = 0;
	for (FLODSaveDataStruct LocalSaveData : LoadChilds)
	{
		LoadChildByIndex(index);
		index++;
	}
}


void UHalfLoadLODObject::LoadChildByIndex_Implementation(int Index)
{
	
	FLODSaveDataStruct LocalSaveData = Childs[Index];
	UHalfLoadLODObject* LODObject = nullptr;
	if (!LocalSaveData.GetRef())
	{
		LODObject = Cast<UHalfLoadLODObject>(UGameplayStatics::LoadGameFromSlot(LocalSaveData.SaveName.ToString(), 0));
	}
	else 
	{
		if (LocalSaveData.GetRef()->LoadStatus == ELoadStatus::Unload)
		{
			LODObject = LocalSaveData.GetRef();
		}
	}
	if (LODObject)
	{
		LODObject->NewOuter = GetWorld();
		LODObject->Anchor = this;
		LODObject->ChangeLoadStatus(ELoadStatus::HalfLoad);
	}
	
}

UHalfLoadLODObject* UHalfLoadLODObject::LoadChildByName(FString Name)
{
	TArray<FString> SeparatedStrings;
	FString Determine = ".";
	Name.ParseIntoArray(SeparatedStrings, *Determine, false);
	if (SeparatedStrings[0] == LODName)
	{
		SeparatedStrings.RemoveAt(0);
	}
	if (SeparatedStrings.IsValidIndex(0))
	{
		int Index = 0;
		for (FLODSaveDataStruct Child : Childs)
		{
			FString ChildName = Child.SaveName.ToString();
			TArray<FString> ChildNameStrings;
			ChildName.ParseIntoArray(ChildNameStrings, *Determine, false);

			FString SaveLodName = GetSaveLODName();
			TArray<FString> SelfNameStrings;
			SaveLodName.ParseIntoArray(SelfNameStrings, *Determine, false);

			for (int x = 0; x < SelfNameStrings.Num(); x++)
			{
				ChildNameStrings.RemoveAt(0);
			}
			if (ChildNameStrings[0] == SeparatedStrings[0])
			{
				Name = SeparatedStrings[0];
				SeparatedStrings.RemoveAt(0);
				for (FString String : SeparatedStrings)
				{
					Name = Name + "." + String;
				}
				LoadChildByIndex(Index);
				return Childs[Index].GetRef()->LoadChildByName(Name);
				
			}
			Index++;
		}
		UE_LOG(LogTemp, Warning, TEXT("Invalid Load Name"));
		return nullptr;
	}
	else
	{
		return this;
	}

}

void UHalfLoadLODObject::LoadOwnerActor_Implementation()
{
	FActorSpawnParameters SpawnParametrs;
	SpawnParametrs.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	AActor* Actor = nullptr;
	UWorld* World = GetWorld();
	if (World)
	{
		Actor = GetWorld()->SpawnActor<AActor>(ActorClass, SpawnParametrs);
	}
	if (Actor)
	{
		Cast<UCodeLODComponent>(Actor->GetComponentByClass(UCodeLODComponent::StaticClass()))->Object = this;
		OwnerComponent = Cast<UCodeLODComponent>(Actor->GetComponentByClass(UCodeLODComponent::StaticClass()));
		if (Anchor->OwnerComponent)
		{
			OwnerComponent->AnchorActor = Anchor->OwnerComponent->GetOwner();
		}

		for (UFunctionObject* Object : FunctionObjects)
		{
			Object->OwnerActor = Actor;
		}
	}
}

void UHalfLoadLODObject::RegisterChild_Implementation(FLODSaveDataStruct SaveData)
{
	int Index = 0;

	for (FLODSaveDataStruct LocalSaveData : Childs)
	{
		if (LocalSaveData.SaveName == SaveData.SaveName)
		{
			Childs.RemoveAt(Index);
			break;
		}
		Index++;
	}
	Childs.Insert(SaveData, Index);
}

FString UHalfLoadLODObject::GetSaveLODName_Implementation()
{
	FString Name = LODName;
	UHalfLoadLODObject* LocalAnchor = Anchor;
	while (LocalAnchor)
	{
		Name = LocalAnchor->LODName+"."+ Name;
		LocalAnchor = LocalAnchor->Anchor;
	}
	return Name;
}

UFunctionObject* UHalfLoadLODObject::GetFunctionByClass(TSubclassOf<UFunctionObject> FunctionClass)
{
	for (UFunctionObject* FunctionObject : FunctionObjects)
	{
		if (FunctionObject)
		{
			if (FunctionObject->GetClass()->IsChildOf(FunctionClass))
			{
				return FunctionObject;
			}
		}
	}
	return nullptr;
}

UInlineObjectValue* UHalfLoadLODObject::GetInlineValueByName(FString Name, TSubclassOf<UInlineObjectValue> InlineClass,bool CreateIfNotFind, bool& Sucsess)
{
	if (!InlineClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("Inline Value Class Not Valid"));
		return nullptr;
	}

	for (UInlineObjectValue* InlineValue : InlineValues)
	{
		if (InlineValue->ValueName == Name && InlineValue->GetClass()->IsChildOf(InlineClass))
		{
			Sucsess = true;
			return InlineValue;
		}
	}

	if (CreateIfNotFind)
	{
		return AddNewInlineValue(Name, InlineClass, Sucsess);
	}

	for (UInlineObjectValue* InlineValue : InlineValues)
	{
		if (InlineValue->GetClass()->IsChildOf(InlineClass))
		{
			UE_LOG(LogTemp, Warning, TEXT("There is no value under the desired name. An InlineObject with the same class is output."));
			Sucsess = false;
			return InlineValue;
		}
	}


	return nullptr;
}

UInlineObjectValue* UHalfLoadLODObject::AddNewInlineValue(FString Name, TSubclassOf<UInlineObjectValue> InlineClass, bool& Sucsess)
{
	for (UInlineObjectValue* InlineValue : InlineValues)
	{
		if (InlineValue->ValueName == Name && InlineValue->GetClass()->IsChildOf(InlineClass))
		{
			Sucsess = false;
			UE_LOG(LogTemp, Warning, TEXT("This Name for Inline value Close"));
			return nullptr;
		}
	}

	UInlineObjectValue* Object = NewObject<UInlineObjectValue>(GetWorld(), InlineClass);
	Object->ValueName = Name;
	InlineValues.Add(Object);
	return  Object;
}

void UHalfLoadLODObject::RemoveInlineValue(FString Name)
{
	for (UInlineObjectValue* InlineValue : InlineValues)
	{
		if (InlineValue->ValueName == Name)
		{
			InlineValues.Remove(InlineValue);
			break;
		}
	}
}

void UHalfLoadLODObject::RemoveInlineValueByClass(TSubclassOf<UInlineObjectValue> InlineClass)
{
	for (UInlineObjectValue* InlineValue : InlineValues)
	{
		if (InlineValue->GetClass()->IsChildOf(InlineClass))
		{
			InlineValues.Remove(InlineValue);
			break;
		}
	}
}
