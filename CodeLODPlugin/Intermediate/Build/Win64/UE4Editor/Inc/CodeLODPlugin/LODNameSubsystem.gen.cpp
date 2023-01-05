// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeLODPlugin/Public/LODNameSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODNameSubsystem() {}
// Cross Module References
	CODELODPLUGIN_API UClass* Z_Construct_UClass_ULODNameSubsystem_NoRegister();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_ULODNameSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_CodeLODPlugin();
// End Cross Module References
	DEFINE_FUNCTION(ULODNameSubsystem::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	void ULODNameSubsystem::StaticRegisterNativesULODNameSubsystem()
	{
		UClass* Class = ULODNameSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetName", &ULODNameSubsystem::execGetName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULODNameSubsystem_GetName_Statics
	{
		struct LODNameSubsystem_eventGetName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULODNameSubsystem_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LODNameSubsystem_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULODNameSubsystem_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULODNameSubsystem_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULODNameSubsystem_GetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LODNameSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULODNameSubsystem_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULODNameSubsystem, nullptr, "GetName", nullptr, nullptr, sizeof(LODNameSubsystem_eventGetName_Parms), Z_Construct_UFunction_ULODNameSubsystem_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODNameSubsystem_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULODNameSubsystem_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODNameSubsystem_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULODNameSubsystem_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULODNameSubsystem_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULODNameSubsystem_NoRegister()
	{
		return ULODNameSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULODNameSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULODNameSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeLODPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULODNameSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULODNameSubsystem_GetName, "GetName" }, // 3278568182
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODNameSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A system for generating the simplest names. Generates unique names for SaveLOD saves. It does not depend on the names of SaveLOD and already unloaded entities.\n  * Generation is carried out on the basis of IndexSubsistem, to which a unit is added at the time a new name is required.\n  */" },
		{ "IncludePath", "LODNameSubsystem.h" },
		{ "ModuleRelativePath", "Public/LODNameSubsystem.h" },
		{ "ToolTip", "A system for generating the simplest names. Generates unique names for SaveLOD saves. It does not depend on the names of SaveLOD and already unloaded entities.\nGeneration is carried out on the basis of IndexSubsistem, to which a unit is added at the time a new name is required." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULODNameSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULODNameSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULODNameSubsystem_Statics::ClassParams = {
		&ULODNameSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULODNameSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULODNameSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULODNameSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULODNameSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULODNameSubsystem, 240090904);
	template<> CODELODPLUGIN_API UClass* StaticClass<ULODNameSubsystem>()
	{
		return ULODNameSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULODNameSubsystem(Z_Construct_UClass_ULODNameSubsystem, &ULODNameSubsystem::StaticClass, TEXT("/Script/CodeLODPlugin"), TEXT("ULODNameSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULODNameSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
