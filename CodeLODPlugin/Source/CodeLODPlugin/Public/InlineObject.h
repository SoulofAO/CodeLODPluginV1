// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InlineObject.generated.h"

/**
 * 
 */

// ��������� �� ������, ���� �� �������� ������������ InlineObject ��� �� ��� � ����������.
USTRUCT(BlueprintType)
struct FInlineObjectStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite)
	UInlineObject* ApplyBattleStep;

};

// Inline Object - ������, ������� ����� ������ � ����������� Instanced ��� ���� ��� �� ����� ���� ����������� ������������� ��������� ������������ ��������. 
UCLASS(Abstract, EditInlineNew, Blueprintable, meta = (ShowWorldContextPin))
class CODELODPLUGIN_API UInlineObject : public UObject
{
	GENERATED_BODY()

public:
	virtual UWorld* GetWorld() const override;
};
