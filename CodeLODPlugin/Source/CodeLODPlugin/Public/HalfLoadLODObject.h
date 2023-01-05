// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "InlineObjectValue.h"
#include "CodeLODComponent.h"
#include "Templates/SharedPointer.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "HalfLoadLODObject.generated.h"


/**
 * !!!��������!!!
 * � ��������� ������� HalfLoadLODObject ���������� ������ LODObject.
 */

class UCodeLODComponent;
class UDetermineLODObject;
class UFunctionObject;
class UHalfLoadLODObject;
class UInlineObjectValue;
class ULODNameSubsystem;
class UCodeLODSubsystem;

// ������� ����� ��� ������������. ������������ ������������ ��� ���������� ���������� ���������� inline value, FunctionObjects, DetermineObjects.
//���� �� ������, ��� �� ���������� �� ������������ ��� ��������� �������� �������, ��� ����� �������� ���������� ��� SaveGame

// Basic archive for serialization. Serialization is used to store internal variables inline value, FunctionObjects, DetermineObjects.
//If you want the variables not to be reset when the object is reloaded, you should mark the variables as SaveGame.

class FSaveGameArchive : public FObjectAndNameAsStringProxyArchive
{
public:
	FSaveGameArchive(FArchive& InInnerArchive)
		: FObjectAndNameAsStringProxyArchive(InInnerArchive, true)
	{
		ArIsSaveGame = true;
		ArNoDelta = true;
	}
};

//������� ��������� ������������
//Basic Serialization structure
USTRUCT(Blueprintable)
struct FSaveObjectStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UObject* Object;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UObject> ObjectClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<uint8> SerializeArray;
};

//���������� � ����� ��������� �������� �������. 
//All load Status enum
UENUM(BlueprintType)
enum class ELoadStatus : uint8
{
	Load  UMETA(DisplayName = "Load "),
	HalfLoad UMETA(DisplayName = "Half-Load"),
	Unload UMETA(DisplayName = "Unload")
};

//�������, ������������ � ������ ����� �������. ������������ � ������� ������ ��� ������ Debug ���������� �������. 
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChangeStatusDelegate);

//���������, ���������� �� ����������� Childs Lod Object � Anchor, ���������� ������. 
//����� LODObject �����������, ��� ������ �������� ������ ������ �� ������ ����, � ������� unvalid. � ������ ������������ �������, �������� ��������. ��� ���������� ��� ������ ������. 

//The structure responsible for regestration of Childs Lod Object in Anchor, forming a tree. 
// When LODObject is unloaded, it makes valid a weak reference to itself, and a strong unvalid. In the case of the uploaded status, the situation is reversed. This is necessary for garbage collection.

USTRUCT(Blueprintable)
struct FLODSaveDataStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UHalfLoadLODObject* HardRefLODObject;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TWeakObjectPtr<UHalfLoadLODObject> LODObject;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName SaveName;

	UHalfLoadLODObject* GetRef()
	{
		if (HardRefLODObject)
		{
			return HardRefLODObject;
		}
		else
		{
			return LODObject.Get();
		}
	}

};

/**
* �������� ����� ��� LOD �������. ������ Actor, ������������ � Code LOD ������� ����� ���������������� LODObject (HalfLoadLODObject).LODObject ����������,
� ����� ������� ����� ����� ������ ���� Load ������, ��� ����� �������� � ����������� �����������, ��� ����� ���������� ����� Child LODObjects, ������ ��������� ��������. 
LODObjects �������� ������ ����������� Anchor � Childs. ������ ������� ����� ������ - ����� ������� ����������, ��������:

�����(�����������)->������ ������->�����->���������

�������� ���������� ��������� ��� �������������, ����� �� ����������� ��� ��� ���� ���������, �� �������� � ��������������� ��������� ��������� ����������. 
�� ���� �� ���������, ���������� �� ������ ������ � ������ ��� ���������� ����� � ���� ��, ���������� ��. ������������� ��� ������� ���� ������ ������ ���� ����� � ��� �����,
���� �� ��������� �� ���������. ��� ���� ������� ����� ������ �������� �� ����� � ����������� ���������. 


HalfLoadLODObject ��������� �� SaveGame. ��� ������� ��� ��������� �������� ��������.
 */

/*
 Main class for LOD System. Each Actor connected to the Code LOD System has a corresponding LODObject (HalfLoadLODObject).LODObject defines,
in what cases the actor will change its Load status, how it will work with internal variables, how it will define its Child LODObjects, what functions it will have.
LODObjects form a tree by combining Anchor and Childs. Each level of this tree is a certain level of abstraction, for example:

Army(constant)->Battlegroup->Squad->Footman

Such a division allows us to work out whether a particular Infantry can be loaded without transferring the rest of the participants to a semi-loaded state.
That is, we check whether the battle group with the infantryman we need is nearby, and if so, we load it. We turn the same thing for the units of this combat group, and so on,
until we get to the Footman. At the same time, most of the data remains on the disk in an unloaded state.


HalfLoadLODObject inherits from SaveGame. This is done to make loading and unloading easier.
*/

UCLASS(Blueprintable,meta=(ToolTip = "The main class for the LOD System."))

class CODELODPLUGIN_API UHalfLoadLODObject : public USaveGame
{
	GENERATED_BODY()
	virtual void PostInitProperties() override;

public:
	virtual UWorld* GetWorld() const override;

	//����� �� ������������� LODSystem. ���������� ��� ��������
	UFUNCTION(BlueprintNativeEvent, meta = (ShortToolTip = "Event BEFORE LODSystem initialization."))
	void BeginPlay();

	
	UFUNCTION(BlueprintImplementableEvent, meta = (ShortToolTip = "Function for the player. Triggered when the generator (CodeLODSubsistem) has set all the necessary values. It is used only for working in bulprints.."))
	void BeginInitializeLOD();

private:
	//��� �������� SaveGame ��� ����������� ��� �������� � ���� ����. ��� ����� NewOuter ������������ ������� �� World.
	// 
	//When SaveGame is loaded, it is loaded without binding to anything. To do this, NewOuter is set with a link to World.
	UObject* NewOuter;

public:
	UPROPERTY(BlueprintReadOnly)
	UCodeLODComponent* OwnerComponent;
	
	//������� LoadStatus LODObject
	UPROPERTY(BlueprintReadOnly, meta = (ToolTip = "Current LoadStatus LODObject"))
	ELoadStatus LoadStatus;
	
	// ����������� ������ � �� LOD Object �� ������ � �� ����� �����������. ��� ������ ���� ������ ������, ������������ �� HalfLodObject � �� Anchor.

	UPROPERTY(BlueprintReadOnly, meta = (ToolTip = "Constant Actors and their LOD Object should not and cannot be unloaded. They should be the top of the tree formed from HalfLodObject and their Anchor."))
	bool Constant;

	//��������� �� ������������ LODObject ��� �������� LODObject. �������� ������. 
	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "A pointer to the parent LODObject for the current LODObject.Form a tree."))
	UHalfLoadLODObject* Anchor;

	// ���� ������ ��� LODObject. 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ToolTip = "Children of the tree for LODObject."))
	TArray<FLODSaveDataStruct> Childs;

	//������ ��� CodeLOD. ������������ ���� ��� � ������ ������ ���� � �������� �� ������, � ������� ����� �������� CodeLOD. 
	UPROPERTY(BlueprintReadOnly, meta = (ToolTip = "CodeLOD's second name. It is generated once at the start of the game and is responsible for the cell in which the CodeLOD will be saved."))
	FString LODName;

	//����� �������������� Actor. ����� ������. ���� ����� ����� ���������� ��� ������� Load ��� LOD Object.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ToolTip = "The class of the Actor being served. You can change it. This class will spawn with the Load status for LOD Object."))
	TSubclassOf<AActor> ActorClass;
	//
	
	//��������� Serialize ��������, ��� ���� ���������� ���������� �� ������������� ��������. 
	//��� ��� ���� �������� ���� ������������� � ������ ��������� ������� Unload ��� LODObject, � ��������������� ������� ��� ������� Half-Load � Load.
	//Serialize prefixes mean that information about serialized objects is entered here. 
	//All three types of objects below are serialized when the Unload status is set for LODObject, and deserialized back when the status is Half-Load and Load.


	UPROPERTY(BlueprintReadWrite, Instanced, EditAnywhere)
	TArray<UDetermineLODObject*> DetermineObjects;

	UPROPERTY()
	TArray<FSaveObjectStruct> SerializeDetermineObjects;

	UPROPERTY(BlueprintReadWrite, Instanced, EditAnywhere)
	TArray<UFunctionObject*> FunctionObjects;

	UPROPERTY()
	TArray<FSaveObjectStruct> SerializeFunctionObjects;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<UInlineObjectValue*> InlineValues;

	UPROPERTY()
	TArray<FSaveObjectStruct> SerializeInlineValues;

	//
	UPROPERTY(BlueprintAssignable)
	FChangeStatusDelegate ChangeLoadStatusDelegate;


	/// ���������� ������ ������������ ������ OwnerComponent->OwnerActor. ��� LODObject ������������� ����� � ������ ����� �������� ��� �������� ����� ���������. 
	UFUNCTION(BlueprintNativeEvent, meta=(Tooltip = "Defines an object relative to its OwnerComponent->OwnerActor. All lodobjects are bound to exactly one class of objects or work through interfaces."))
	bool DefineLODObjectBySelf();

	/// ���������� ������ ������������ ������������ Anchor. ����� ���� ������� ������ ������������ �������� ��� ���������������� Detriment � Anchor.
	UFUNCTION(BlueprintNativeEvent, meta = (Tooltip = "Defines the object relative to the parent Anchor. Calling this function only ensures that it is passed to the corresponding Detriment in Anchor."))
	bool DefineLODObjectByAnchor();

	
	UFUNCTION(BlueprintNativeEvent)
	bool DefineLODChildObject(UHalfLoadLODObject* Object);

	/// 
	/// 
	///


	//������� ������������ Inline Object, FuntionObject, DetermineObject
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, meta = (Tooltip = "Serialization function Inline Object, FuntionObject, DetermineObject"))
	void SerializeSelf();

	//������� �������������� Inline Object, FuntionObject, DetermineObject
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, meta = (Tooltip = "Deserialization function Inline Object, FuntionObject, DetermineObject"))
	void DeserialiseSelf();

	///�������� ������������� ������� ����� ������� Object
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, meta = (Tooltip = "The main universal function of changing the status of Object"))
	void ChangeLoadStatus(ELoadStatus NewStatus);

	///������� ���������� ��� �������� LODObject.
	UFUNCTION(BlueprintNativeEvent, meta = (Tooltip = "The function called when unloading LODObject."))
	void UnloadSelf();

	///������� ���������� ��� �������� � ��������������� ���������. ������� Actor. 
	UFUNCTION(BlueprintNativeEvent, meta = (Tooltip = "A function called when it is transferred to a semi-loaded state. Deletes the Actor."))
	void UnloadOwnerActor();

	/// �������, ���������� ��� �������� ������� �� ������������ � ��������������� ���������
	UFUNCTION(BlueprintNativeEvent, meta = (Tooltip = "Function called when transferring an object from an unloaded to a half-load state"))
	void LoadSelf();

	//������� ��������. �������, ������������ ��� ���������� Owner Actor ������������ ������ � LODObject.
	UFUNCTION(BlueprintNativeEvent, meta = (Tooltip = "Download function. A function that defines how to set Owner Actor relative to data from LODObject"))
	void LoadOwnerActor();

	//������ ������� �������� �� ������������ ��������� � ���������������, ��� ������ � ����������.
	//The section of loading functions from the unloaded state to the semi - loaded state, for calling in bulprints.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void LoadAllChildObjects();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void LoadChildByIndex(int Index);

	UFUNCTION(BlueprintCallable)
	UHalfLoadLODObject* LoadChildByName(FString Name);

	/// ������� ����������� LODObject � Anchor.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, meta = (Tooltip = "LODObject registration function in Anchor."))
	void RegisterChild(FLODSaveDataStruct SaveData);

	//��������� SaveLODName. ������ LODObject ����� ���������� SaveLODName. ����������� �� ������ SaveName+Anchor.SaveName+Anchor.Anchor.SaveName...
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, meta = (Tooltip = "Getting SaveLODName. Each LODObject has a unique SaveLODName. It is formed on the basis of SaveName+Anchor.SaveName+Anchor.Anchor.SaveName..."))
	FString GetSaveLODName();

	UFUNCTION(BlueprintCallable, meta = (DeterminesOutputType = "FunctionClass"))
	UFunctionObject* GetFunctionByClass(TSubclassOf<UFunctionObject> FunctionClass);

	UFUNCTION(BlueprintCallable, meta = (DeterminesOutputType = "InlineClass"))
	UInlineObjectValue* GetInlineValueByName(FString Name, TSubclassOf<UInlineObjectValue> InlineClass, bool CreateIfNotFind, bool& Sucsess);

	UFUNCTION(BlueprintCallable, meta = (DeterminesOutputType = "InlineClass"))
	UInlineObjectValue* AddNewInlineValue(FString Name, TSubclassOf<UInlineObjectValue> InlineClass,  bool& Sucsess);

	UFUNCTION(BlueprintCallable)
	void RemoveInlineValue(FString Name);

	UFUNCTION(BlueprintCallable)
	void RemoveInlineValueByClass(TSubclassOf<UInlineObjectValue> InlineClass);

	///
};
