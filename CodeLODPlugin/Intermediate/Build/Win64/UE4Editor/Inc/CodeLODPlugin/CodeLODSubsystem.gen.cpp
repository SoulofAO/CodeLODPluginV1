// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeLODPlugin/Public/CodeLODSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeLODSubsystem() {}
// Cross Module References
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UCodeLODSubsystem_NoRegister();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UCodeLODSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_CodeLODPlugin();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UHalfLoadLODObject_NoRegister();
// End Cross Module References
	void UCodeLODSubsystem::StaticRegisterNativesUCodeLODSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UCodeLODSubsystem_NoRegister()
	{
		return UCodeLODSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCodeLODSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LodConstantObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodConstantObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LodConstantObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCodeLODSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeLODPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeLODSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ???????? ?????? ??????????: ????????????? ????? ???? HalfLoadLODObject, ????????? ??????????? HalfLoadLODObjects, ??????? ??????????? ? ???? ????? ??? HalfLoadLODObject. \n ????????? ????? ????????? ???????????, ???? ? ??? ???? ??????????? ????????? LODObject.\n * The main tasks of the subsystem: to implement the spawn of all halfloadlodobjects, to save constant HalfLoadLODObjects, to clear the slots saved in the game for HalfLoadLODObject.\n The latter may require modification if you have the ability to save LODObject.\n */" },
		{ "IncludePath", "CodeLODSubsystem.h" },
		{ "ModuleRelativePath", "Public/CodeLODSubsystem.h" },
		{ "ToolTip", "???????? ?????? ??????????: ????????????? ????? ???? HalfLoadLODObject, ????????? ??????????? HalfLoadLODObjects, ??????? ??????????? ? ???? ????? ??? HalfLoadLODObject.\n ????????? ????? ????????? ???????????, ???? ? ??? ???? ??????????? ????????? LODObject.\nThe main tasks of the subsystem: to implement the spawn of all halfloadlodobjects, to save constant HalfLoadLODObjects, to clear the slots saved in the game for HalfLoadLODObject.\n The latter may require modification if you have the ability to save LODObject." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCodeLODSubsystem_Statics::NewProp_LodConstantObjects_Inner = { "LodConstantObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHalfLoadLODObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeLODSubsystem_Statics::NewProp_LodConstantObjects_MetaData[] = {
		{ "Category", "CodeLODSubsystem" },
		{ "Comment", "//?????? Constant HalfLoadLODObject\n" },
		{ "ModuleRelativePath", "Public/CodeLODSubsystem.h" },
		{ "ToolTip", "?????? Constant HalfLoadLODObject" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCodeLODSubsystem_Statics::NewProp_LodConstantObjects = { "LodConstantObjects", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCodeLODSubsystem, LodConstantObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCodeLODSubsystem_Statics::NewProp_LodConstantObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeLODSubsystem_Statics::NewProp_LodConstantObjects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCodeLODSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeLODSubsystem_Statics::NewProp_LodConstantObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeLODSubsystem_Statics::NewProp_LodConstantObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCodeLODSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCodeLODSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCodeLODSubsystem_Statics::ClassParams = {
		&UCodeLODSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCodeLODSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCodeLODSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCodeLODSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeLODSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCodeLODSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCodeLODSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCodeLODSubsystem, 683951646);
	template<> CODELODPLUGIN_API UClass* StaticClass<UCodeLODSubsystem>()
	{
		return UCodeLODSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCodeLODSubsystem(Z_Construct_UClass_UCodeLODSubsystem, &UCodeLODSubsystem::StaticClass, TEXT("/Script/CodeLODPlugin"), TEXT("UCodeLODSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCodeLODSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
