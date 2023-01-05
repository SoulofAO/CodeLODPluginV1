// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InlineObject.h"
#include "InlineObjectValue.generated.h"

/**
 * Механизм динамических абстрактных переменных, задаваемых внутри LODObject. По сути единый интерфейс под необходимые игроку параметры. 
 */

 /**
 * Mechanism of dynamic abstract variables set inside LODObject. In fact, a single interface for the parameters necessary for the player.
  */

UCLASS(Blueprintable)
class CODELODPLUGIN_API UInlineObjectValue : public UInlineObject
{
	GENERATED_BODY()

public:
	//Имя, под которым будет сохранена переменная.
	UPROPERTY(BlueprintReadWrite, SaveGame, meta = (Tooltipe = "The name under which the variable will be saved."))
	FString ValueName;
};
