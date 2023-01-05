// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "HalfLoadLODObject.h"
#include "Blueprint/UserWidget.h"
#include "CodeLODSubsystem.generated.h"

/**
 * Основные задачи сабсистемы: реализовывать спавн всех HalfLoadLODObject, сохранять константные HalfLoadLODObjects, очищать сохраненные в игре слоты под HalfLoadLODObject. 
 Последнее может требовать модификации, если у вас есть возможность сохранять LODObject.
 * The main tasks of the subsystem: to implement the spawn of all halfloadlodobjects, to save constant HalfLoadLODObjects, to clear the slots saved in the game for HalfLoadLODObject.
 The latter may require modification if you have the ability to save LODObject.
 */
UCLASS()
class CODELODPLUGIN_API UCodeLODSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
public:

	UCodeLODSubsystem();

	UPROPERTY()
	FKey KeyToBindDebugMode;
	//Основная функция инициализации. 
	//The main initialization function.
	void InitializeCodeLOD();

	//Список всех зарегестрированных HalfLoadLODObject. В доработке.
	//List of all registered halfloadlodobjects. In the revision.
	TMap <FName, TWeakObjectPtr<UHalfLoadLODObject>> RegisteredObjects;

	void AddvRegisteredObject(FName Name, UHalfLoadLODObject* Object);

	void ClearCloseName();

	UUserWidjet* DebugWidjet;

	void ChangeDebugInstrument();
	//Список Constant HalfLoadLODObject
	UPROPERTY(BlueprintReadWrite)
	TArray<UHalfLoadLODObject*> LodConstantObjects;
};
