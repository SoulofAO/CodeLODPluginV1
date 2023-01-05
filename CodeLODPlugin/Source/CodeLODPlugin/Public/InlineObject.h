// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InlineObject.generated.h"

/**
 * 
 */

// Структура на случай, если вы захотите использовать InlineObject где то еще в булпринтах.
USTRUCT(BlueprintType)
struct FInlineObjectStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite)
	UInlineObject* ApplyBattleStep;

};

// Inline Object - обьект, который можно задать в переменнтой Instanced для того что бы можно было динамически редактировать параметры выставляемой сущности. 
UCLASS(Abstract, EditInlineNew, Blueprintable, meta = (ShowWorldContextPin))
class CODELODPLUGIN_API UInlineObject : public UObject
{
	GENERATED_BODY()

public:
	virtual UWorld* GetWorld() const override;
};
