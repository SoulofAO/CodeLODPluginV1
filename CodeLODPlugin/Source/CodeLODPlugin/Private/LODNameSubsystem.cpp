// Fill out your copyright notice in the Description page of Project Settings.


#include "LODNameSubsystem.h"

FName ULODNameSubsystem::GetName()
{
	FName Name = FName(FString::FromInt(IndexSubsistem));
	IndexSubsistem = IndexSubsistem + 1;
	return Name;
}
