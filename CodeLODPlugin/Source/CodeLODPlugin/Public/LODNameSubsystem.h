// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LODNameSubsystem.generated.h"

/**
 * ������� ��������� ���������� ����. ���������� ���������� ����� ��� ���������� SaveLOD. �� ������� �� ���� SaveLOD � ��� ����������� ���������.
 * ��������� ����������� �� ������ IndexSubsistem, � �������� ����������� ������� � ������ ���������� ������ �����.
 */

 /**
 * A system for generating the simplest names. Generates unique names for SaveLOD saves. It does not depend on the names of SaveLOD and already unloaded entities.
  * Generation is carried out on the basis of IndexSubsistem, to which a unit is added at the time a new name is required.
  */

UCLASS()
class CODELODPLUGIN_API ULODNameSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	int IndexSubsistem;

public:
	UFUNCTION(BlueprintCallable)
	FName GetName();
};
