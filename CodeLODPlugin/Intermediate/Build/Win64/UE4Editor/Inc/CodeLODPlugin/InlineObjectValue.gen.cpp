// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeLODPlugin/Public/InlineObjectValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInlineObjectValue() {}
// Cross Module References
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UInlineObjectValue_NoRegister();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UInlineObjectValue();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UInlineObject();
	UPackage* Z_Construct_UPackage__Script_CodeLODPlugin();
// End Cross Module References
	void UInlineObjectValue::StaticRegisterNativesUInlineObjectValue()
	{
	}
	UClass* Z_Construct_UClass_UInlineObjectValue_NoRegister()
	{
		return UInlineObjectValue::StaticClass();
	}
	struct Z_Construct_UClass_UInlineObjectValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ValueName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInlineObjectValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInlineObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeLODPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInlineObjectValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Mechanism of dynamic abstract variables set inside LODObject. In fact, a single interface for the parameters necessary for the player.\n  */" },
		{ "IncludePath", "InlineObjectValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InlineObjectValue.h" },
		{ "ToolTip", "Mechanism of dynamic abstract variables set inside LODObject. In fact, a single interface for the parameters necessary for the player." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInlineObjectValue_Statics::NewProp_ValueName_MetaData[] = {
		{ "Category", "InlineObjectValue" },
		{ "Comment", "//???, ??? ??????? ????? ????????? ??????????.\n" },
		{ "ModuleRelativePath", "Public/InlineObjectValue.h" },
		{ "Tooltipe", "The name under which the variable will be saved." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInlineObjectValue_Statics::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000001000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInlineObjectValue, ValueName), METADATA_PARAMS(Z_Construct_UClass_UInlineObjectValue_Statics::NewProp_ValueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInlineObjectValue_Statics::NewProp_ValueName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInlineObjectValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInlineObjectValue_Statics::NewProp_ValueName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInlineObjectValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInlineObjectValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInlineObjectValue_Statics::ClassParams = {
		&UInlineObjectValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInlineObjectValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInlineObjectValue_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInlineObjectValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInlineObjectValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInlineObjectValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInlineObjectValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInlineObjectValue, 43148707);
	template<> CODELODPLUGIN_API UClass* StaticClass<UInlineObjectValue>()
	{
		return UInlineObjectValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInlineObjectValue(Z_Construct_UClass_UInlineObjectValue, &UInlineObjectValue::StaticClass, TEXT("/Script/CodeLODPlugin"), TEXT("UInlineObjectValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInlineObjectValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
