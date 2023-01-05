// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InlineObject.h"
#include "FunctionObject.generated.h"

/**
 * Абстрактный Класс назначаемый в HalfLoadLODObject, который отвечает за действия или проверки, которые должен выполнить клиент без знания класса самого HalfLoadLODObject. 
 */

 /**
 * A abstract class assigned to HalfLoadLODObject that is responsible for actions or checks that the client must perform without knowing the class of HalfLoadLODObject itself.
  */

class UHalfLoadLODObject;

UCLASS(meta = (Tooltipe = " A class assigned to HalfLoadLODObject that is responsible for actions or check"))
class CODELODPLUGIN_API UFunctionObject : public UInlineObject
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	AActor* OwnerActor;

	UPROPERTY(BlueprintReadWrite)
	UHalfLoadLODObject* OwnerLODObject;
};
