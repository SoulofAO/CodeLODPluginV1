// Fill out your copyright notice in the Description page of Project Settings.


#include "CodeLODSubsystem.h"
#include "CodeLODComponent.h"
#include "LODNameSubsystem.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "FunctionObject.h"
#include "HalfLoadLODObject.h"
#include "DetermineLODObject.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"

void UCodeLODSubsystem::InitializeCodeLOD()
{
	LodConstantObjects.Empty();
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Black, "Initialize start");
	UWorld* World = GetWorld();
	TArray<UCodeLODComponent*> LODArray;

	for (TActorIterator<AActor> It(World, AActor::StaticClass()); It; ++It)
	{
		AActor* Actor = *It;
		if (Actor->GetComponentByClass(UCodeLODComponent::StaticClass()))
		{
			LODArray.Add(Cast<UCodeLODComponent>(Actor->GetComponentByClass(UCodeLODComponent::StaticClass())));
		}
	}
	
	ULODNameSubsystem* LODNameSubsystem = GetWorld()->GetGameInstance()->GetSubsystem<ULODNameSubsystem>();
	for (UCodeLODComponent* Component : LODArray)
	{
		UHalfLoadLODObject* Object = NewObject<UHalfLoadLODObject>(GetWorld(), Component->ObjectClass);
		Object->LODName = LODNameSubsystem->GetName().ToString();

		Component->Object = Object;
		Object->OwnerComponent = Component;
		for (UFunctionObject* FunctionObject : Object->FunctionObjects)
		{
			FunctionObject->OwnerLODObject = Object;
			FunctionObject->OwnerActor = Component->GetOwner();
		}
		for (UDetermineLODObject* DetermineObject : Object->DetermineObjects)
		{
			DetermineObject->OwnerLODObject = Object;
		}

		Object->Constant = Component->Constant;
		if (Object->Constant)
		{
			LodConstantObjects.Add(Object);
		}

	}

	for (UCodeLODComponent* Component : LODArray)
	{
		if (Component->AnchorActor)
		{
			UHalfLoadLODObject* LOD = Cast<UCodeLODComponent>(Component->AnchorActor->GetComponentByClass(UCodeLODComponent::StaticClass()))->Object;
			Component->Object->Anchor = LOD;
			GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Black, LOD->GetName());
		}
		else
		{
			if (!Component->Constant)
			{
				UE_LOG(LogTemp, Warning, TEXT("Invalid Anchor Component"));
			}
		}
	}
	for (UCodeLODComponent* Component : LODArray)
	{
		UHalfLoadLODObject* LODObject = Component->Object->Anchor;
		if (LODObject)
		{
			Component->Object->Anchor->RegisterChild({ Component->Object, 	Component->Object, FName(Component->Object->GetSaveLODName()) });
		}
		Component->Object->BeginInitializeLOD();
	}
}

void UCodeLODSubsystem::AddvRegisteredObject(FName Name, UHalfLoadLODObject* Object)
{
	RegisteredObjects.Add(Name, Object);
}

void UCodeLODSubsystem::ClearCloseName()
{
	TSet<FName> Names;
	RegisteredObjects.GetKeys(Names);
	for (FName Name : Names)
	{
		UGameplayStatics::DeleteGameInSlot(Name.ToString(), 0);
	}
	RegisteredObjects.Empty();
}

UCodeLODSubsystem::UCodeLODSubsystem()
{
	UWorld* World = GetWorld();
	if (World)
	{
		GetWorld()->OnWorldBeginPlay.AddUObject(this, &UCodeLODSubsystem::InitializeCodeLOD);
	}
}