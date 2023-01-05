// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HalfLoadLODObject.h"
#include "CodeLODComponent.generated.h"

class UHalfLoadLODObject;


// ������� ��������� ��� ������ Actor ������������� � Code LOD System. �������� Actor, ��� ������������ � LOD, �������� �� ������� ��������� LODObject, ������ ��������� �� LODObject. ��� ������� �� ������� �������������. 

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), meta = (Tooltip="The basic component for any Actor connected to the Code LOD System. Marks Actor as being connected to LOD, is responsible for the basic configuration of LODObject, stores a pointer to LODObject. As a rule, it does not require modification."))
class CODELODPLUGIN_API UCodeLODComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// ������ �� LOD ������. ������������ �� ������ ������ ObjectClass �����������
	UPROPERTY(BLueprintReadWrite, EditAnywhere, meta = (Tooltip = "Link to the LOD object. Generated based on the objectClass class by the subsystem"))
	UHalfLoadLODObject* Object;

	// ������ �� Actor, ������� ����� ��������� � ������������ HalfLodObject ��������.
	UPROPERTY(BLueprintReadWrite, EditAnywhere, meta = (Tooltip = "A reference to an Actor that has a component with a parent HalfLodObject of objects"))
	AActor* AnchorActor;

	// ����������� ������ �� ������ � �� ����� �����������. ��� ������ ���� ������ ������, ������������ �� HalfLodObject � �� Anchor.
	UPROPERTY(EditAnywhere, meta = (Tooltip = "Constant Actors should not and cannot be unloaded. They should be the top of the tree formed from HalfLodObject and their Anchor."))
	bool Constant;

	// ��������� �� ����� HalfLoadLODObject �������, ������� ����� ��������� � ����� ��������������� ����� Actor.
	UPROPERTY(BLueprintReadWrite, EditAnywhere, meta = (Tooltip = "Pointer to the HalfLoadLODObject class of the Object that will be spawned and will correspond to this Actor."))
	TSubclassOf<UHalfLoadLODObject> ObjectClass;

	// Sets default values for this component's properties
	UCodeLODComponent();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DefineLODObjectBySelf();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
