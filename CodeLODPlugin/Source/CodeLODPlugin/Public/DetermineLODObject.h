// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InlineObject.h"
#include "DetermineLODObject.generated.h"

/**
 * Класс назначаемый в HalfLoadLODObject, который отвечает за определение текущего состояния дочернего HalfLoadLODObject. 
 * Имеет жесткую привязку к классу  дочернего HalfLoadLODObject, который может обслуживать. (Иной вариант в доработке)
 * 
 * Пример:
 * НПС Морпеха выгрузили. Затем тот заново был загружен. В момент загрзки тот запрашивает у своего Anchor DetermineLODObject под свой класс и вызывает bool DetermineLODObject(). DetermineLODObject определеляет состояние морпеха и то как оно пом
 */

 /**
 * The class assigned to HalfLoadLODObject, which is responsible for determining the current state of the child HalfLoadLODObject.
  * Has a rigid binding to the child HalfLoadLODObject class, which can serve. (Another option is in the revision)
  *
  * Example:
 * The Marine's NPC was unloaded. Then it was re-loaded. At the moment of loading, he requests a DetermineLODObject from his Anchor for his class and calls bool DetermineLODObject(). DetermineLODObject defines the state of the marine and how it is pom
  */

UCLASS(meta = (Tooltipe = "The class assigned to HalfLoadLODObject, which is responsible for determining the current state of the child HalfLoadLODObject"))
class CODELODPLUGIN_API UDetermineLODObject : public UInlineObject
{
	GENERATED_BODY()

public:
	//Класс дочернего HalfLoadLODObject. Используется для подбора DetermineLODObject в LODObject Anchor. DetermineLODObject будет определять класс, указанный ниже. 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame, meta = (Tooltipe = "The class of the child HalfLoadLODObject. Used to match DetermineLODObject to LODObject Anchor. DetermineLODObject will define the class specified below."))
	TSubclassOf<UHalfLoadLODObject> DetemineClass;

	UPROPERTY(BlueprintReadWrite)
	UHalfLoadLODObject* OwnerLODObject;
	
	//Абстрактная функция определения.  Определяется в булпринтах.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (Tooltipe = "TAbstract main definition function. Defined in bullprints."))
	bool DetermineLODObject(UHalfLoadLODObject* Object);
	//!Сделать абстрактной.Переименовать нахер.
};
