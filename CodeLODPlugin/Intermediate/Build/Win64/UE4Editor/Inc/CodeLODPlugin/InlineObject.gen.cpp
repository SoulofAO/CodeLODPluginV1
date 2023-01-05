// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeLODPlugin/Public/InlineObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInlineObject() {}
// Cross Module References
	CODELODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInlineObjectStruct();
	UPackage* Z_Construct_UPackage__Script_CodeLODPlugin();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UInlineObject_NoRegister();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UInlineObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FInlineObjectStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CODELODPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FInlineObjectStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInlineObjectStruct, Z_Construct_UPackage__Script_CodeLODPlugin(), TEXT("InlineObjectStruct"), sizeof(FInlineObjectStruct), Get_Z_Construct_UScriptStruct_FInlineObjectStruct_Hash());
	}
	return Singleton;
}
template<> CODELODPLUGIN_API UScriptStruct* StaticStruct<FInlineObjectStruct>()
{
	return FInlineObjectStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInlineObjectStruct(FInlineObjectStruct::StaticStruct, TEXT("/Script/CodeLODPlugin"), TEXT("InlineObjectStruct"), false, nullptr, nullptr);
static struct FScriptStruct_CodeLODPlugin_StaticRegisterNativesFInlineObjectStruct
{
	FScriptStruct_CodeLODPlugin_StaticRegisterNativesFInlineObjectStruct()
	{
		UScriptStruct::DeferCppStructOps<FInlineObjectStruct>(FName(TEXT("InlineObjectStruct")));
	}
} ScriptStruct_CodeLODPlugin_StaticRegisterNativesFInlineObjectStruct;
	struct Z_Construct_UScriptStruct_FInlineObjectStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyBattleStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ApplyBattleStep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInlineObjectStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */// ????????? ?? ??????, ???? ?? ???????? ???????????? InlineObject ??? ?? ??? ? ??????????.\n" },
		{ "ModuleRelativePath", "Public/InlineObject.h" },
		{ "ToolTip", "// ????????? ?? ??????, ???? ?? ???????? ???????????? InlineObject ??? ?? ??? ? ??????????." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInlineObjectStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInlineObjectStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInlineObjectStruct_Statics::NewProp_ApplyBattleStep_MetaData[] = {
		{ "Category", "InlineObjectStruct" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InlineObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInlineObjectStruct_Statics::NewProp_ApplyBattleStep = { "ApplyBattleStep", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInlineObjectStruct, ApplyBattleStep), Z_Construct_UClass_UInlineObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInlineObjectStruct_Statics::NewProp_ApplyBattleStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineObjectStruct_Statics::NewProp_ApplyBattleStep_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInlineObjectStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInlineObjectStruct_Statics::NewProp_ApplyBattleStep,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInlineObjectStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CodeLODPlugin,
		nullptr,
		&NewStructOps,
		"InlineObjectStruct",
		sizeof(FInlineObjectStruct),
		alignof(FInlineObjectStruct),
		Z_Construct_UScriptStruct_FInlineObjectStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineObjectStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInlineObjectStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInlineObjectStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInlineObjectStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInlineObjectStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CodeLODPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InlineObjectStruct"), sizeof(FInlineObjectStruct), Get_Z_Construct_UScriptStruct_FInlineObjectStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInlineObjectStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInlineObjectStruct_Hash() { return 4150197074U; }
	void UInlineObject::StaticRegisterNativesUInlineObject()
	{
	}
	UClass* Z_Construct_UClass_UInlineObject_NoRegister()
	{
		return UInlineObject::StaticClass();
	}
	struct Z_Construct_UClass_UInlineObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInlineObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeLODPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInlineObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Inline Object - ??????, ??????? ????? ?????? ? ??????????? Instanced ??? ???? ??? ?? ????? ???? ??????????? ????????????? ????????? ???????????? ????????. \n" },
		{ "IncludePath", "InlineObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InlineObject.h" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "Inline Object - ??????, ??????? ????? ?????? ? ??????????? Instanced ??? ???? ??? ?? ????? ???? ??????????? ????????????? ????????? ???????????? ????????." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInlineObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInlineObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInlineObject_Statics::ClassParams = {
		&UInlineObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInlineObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInlineObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInlineObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInlineObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInlineObject, 865200450);
	template<> CODELODPLUGIN_API UClass* StaticClass<UInlineObject>()
	{
		return UInlineObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInlineObject(Z_Construct_UClass_UInlineObject, &UInlineObject::StaticClass, TEXT("/Script/CodeLODPlugin"), TEXT("UInlineObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInlineObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
