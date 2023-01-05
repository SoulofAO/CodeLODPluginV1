// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InlineObject.h"
#include "DetermineLODObject.generated.h"

/**
 * ����� ����������� � HalfLoadLODObject, ������� �������� �� ����������� �������� ��������� ��������� HalfLoadLODObject. 
 * ����� ������� �������� � ������  ��������� HalfLoadLODObject, ������� ����� �����������. (���� ������� � ���������)
 * 
 * ������:
 * ��� ������� ���������. ����� ��� ������ ��� ��������. � ������ ������� ��� ����������� � ������ Anchor DetermineLODObject ��� ���� ����� � �������� bool DetermineLODObject(). DetermineLODObject ������������ ��������� ������� � �� ��� ��� ���
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
	//����� ��������� HalfLoadLODObject. ������������ ��� ������� DetermineLODObject � LODObject Anchor. DetermineLODObject ����� ���������� �����, ��������� ����. 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame, meta = (Tooltipe = "The class of the child HalfLoadLODObject. Used to match DetermineLODObject to LODObject Anchor. DetermineLODObject will define the class specified below."))
	TSubclassOf<UHalfLoadLODObject> DetemineClass;

	UPROPERTY(BlueprintReadWrite)
	UHalfLoadLODObject* OwnerLODObject;
	
	//����������� ������� �����������.  ������������ � ����������.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (Tooltipe = "TAbstract main definition function. Defined in bullprints."))
	bool DetermineLODObject(UHalfLoadLODObject* Object);
	//!������� �����������.������������� �����.
};
