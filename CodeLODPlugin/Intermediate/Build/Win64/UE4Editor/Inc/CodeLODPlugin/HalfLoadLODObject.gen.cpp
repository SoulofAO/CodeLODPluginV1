// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeLODPlugin/Public/HalfLoadLODObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHalfLoadLODObject() {}
// Cross Module References
	CODELODPLUGIN_API UFunction* Z_Construct_UDelegateFunction_CodeLODPlugin_ChangeStatusDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CodeLODPlugin();
	CODELODPLUGIN_API UEnum* Z_Construct_UEnum_CodeLODPlugin_ELoadStatus();
	CODELODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLODSaveDataStruct();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UHalfLoadLODObject_NoRegister();
	CODELODPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSaveObjectStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UHalfLoadLODObject();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UInlineObjectValue_NoRegister();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UFunctionObject_NoRegister();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UCodeLODComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UDetermineLODObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CodeLODPlugin_ChangeStatusDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CodeLODPlugin_ChangeStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//???????, ???????????? ? ?????? ????? ???????. ???????????? ? ??????? ?????? ??? ?????? Debug ?????????? ???????. \n" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "ToolTip", "???????, ???????????? ? ?????? ????? ???????. ???????????? ? ??????? ?????? ??? ?????? Debug ?????????? ???????." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CodeLODPlugin_ChangeStatusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CodeLODPlugin, nullptr, "ChangeStatusDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CodeLODPlugin_ChangeStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CodeLODPlugin_ChangeStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CodeLODPlugin_ChangeStatusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CodeLODPlugin_ChangeStatusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ELoadStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CodeLODPlugin_ELoadStatus, Z_Construct_UPackage__Script_CodeLODPlugin(), TEXT("ELoadStatus"));
		}
		return Singleton;
	}
	template<> CODELODPLUGIN_API UEnum* StaticEnum<ELoadStatus>()
	{
		return ELoadStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoadStatus(ELoadStatus_StaticEnum, TEXT("/Script/CodeLODPlugin"), TEXT("ELoadStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CodeLODPlugin_ELoadStatus_Hash() { return 1382294873U; }
	UEnum* Z_Construct_UEnum_CodeLODPlugin_ELoadStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CodeLODPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoadStatus"), 0, Get_Z_Construct_UEnum_CodeLODPlugin_ELoadStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELoadStatus::Load", (int64)ELoadStatus::Load },
				{ "ELoadStatus::HalfLoad", (int64)ELoadStatus::HalfLoad },
				{ "ELoadStatus::Unload", (int64)ELoadStatus::Unload },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//?????????? ? ????? ????????? ???????? ???????. \n//All load Status enum\n" },
				{ "HalfLoad.DisplayName", "Half-Load" },
				{ "HalfLoad.Name", "ELoadStatus::HalfLoad" },
				{ "Load.DisplayName", "Load " },
				{ "Load.Name", "ELoadStatus::Load" },
				{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
				{ "ToolTip", "?????????? ? ????? ????????? ???????? ???????.\nAll load Status enum" },
				{ "Unload.DisplayName", "Unload" },
				{ "Unload.Name", "ELoadStatus::Unload" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CodeLODPlugin,
				nullptr,
				"ELoadStatus",
				"ELoadStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLODSaveDataStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CODELODPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FLODSaveDataStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLODSaveDataStruct, Z_Construct_UPackage__Script_CodeLODPlugin(), TEXT("LODSaveDataStruct"), sizeof(FLODSaveDataStruct), Get_Z_Construct_UScriptStruct_FLODSaveDataStruct_Hash());
	}
	return Singleton;
}
template<> CODELODPLUGIN_API UScriptStruct* StaticStruct<FLODSaveDataStruct>()
{
	return FLODSaveDataStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLODSaveDataStruct(FLODSaveDataStruct::StaticStruct, TEXT("/Script/CodeLODPlugin"), TEXT("LODSaveDataStruct"), false, nullptr, nullptr);
static struct FScriptStruct_CodeLODPlugin_StaticRegisterNativesFLODSaveDataStruct
{
	FScriptStruct_CodeLODPlugin_StaticRegisterNativesFLODSaveDataStruct()
	{
		UScriptStruct::DeferCppStructOps<FLODSaveDataStruct>(FName(TEXT("LODSaveDataStruct")));
	}
} ScriptStruct_CodeLODPlugin_StaticRegisterNativesFLODSaveDataStruct;
	struct Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardRefLODObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HardRefLODObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_LODObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SaveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//The structure responsible for regestration of Childs Lod Object in Anchor, forming a tree. \n// When LODObject is unloaded, it makes valid a weak reference to itself, and a strong unvalid. In the case of the uploaded status, the situation is reversed. This is necessary for garbage collection.\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "ToolTip", "The structure responsible for regestration of Childs Lod Object in Anchor, forming a tree.\n When LODObject is unloaded, it makes valid a weak reference to itself, and a strong unvalid. In the case of the uploaded status, the situation is reversed. This is necessary for garbage collection." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLODSaveDataStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewProp_HardRefLODObject_MetaData[] = {
		{ "Category", "LODSaveDataStruct" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewProp_HardRefLODObject = { "HardRefLODObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLODSaveDataStruct, HardRefLODObject), Z_Construct_UClass_UHalfLoadLODObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewProp_HardRefLODObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewProp_HardRefLODObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewProp_LODObject_MetaData[] = {
		{ "Category", "LODSaveDataStruct" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewProp_LODObject = { "LODObject", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLODSaveDataStruct, LODObject), Z_Construct_UClass_UHalfLoadLODObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewProp_LODObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewProp_LODObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewProp_SaveName_MetaData[] = {
		{ "Category", "LODSaveDataStruct" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLODSaveDataStruct, SaveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewProp_SaveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewProp_SaveName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewProp_HardRefLODObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewProp_LODObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::NewProp_SaveName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CodeLODPlugin,
		nullptr,
		&NewStructOps,
		"LODSaveDataStruct",
		sizeof(FLODSaveDataStruct),
		alignof(FLODSaveDataStruct),
		Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLODSaveDataStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLODSaveDataStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CodeLODPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LODSaveDataStruct"), sizeof(FLODSaveDataStruct), Get_Z_Construct_UScriptStruct_FLODSaveDataStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLODSaveDataStruct_Hash() { return 2635859237U; }
class UScriptStruct* FSaveObjectStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CODELODPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FSaveObjectStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveObjectStruct, Z_Construct_UPackage__Script_CodeLODPlugin(), TEXT("SaveObjectStruct"), sizeof(FSaveObjectStruct), Get_Z_Construct_UScriptStruct_FSaveObjectStruct_Hash());
	}
	return Singleton;
}
template<> CODELODPLUGIN_API UScriptStruct* StaticStruct<FSaveObjectStruct>()
{
	return FSaveObjectStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveObjectStruct(FSaveObjectStruct::StaticStruct, TEXT("/Script/CodeLODPlugin"), TEXT("SaveObjectStruct"), false, nullptr, nullptr);
static struct FScriptStruct_CodeLODPlugin_StaticRegisterNativesFSaveObjectStruct
{
	FScriptStruct_CodeLODPlugin_StaticRegisterNativesFSaveObjectStruct()
	{
		UScriptStruct::DeferCppStructOps<FSaveObjectStruct>(FName(TEXT("SaveObjectStruct")));
	}
} ScriptStruct_CodeLODPlugin_StaticRegisterNativesFSaveObjectStruct;
	struct Z_Construct_UScriptStruct_FSaveObjectStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SerializeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerializeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SerializeArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//??????? ????????? ????????????\n//Basic Serialization structure\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "ToolTip", "??????? ????????? ????????????\nBasic Serialization structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveObjectStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "SaveObjectStruct" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveObjectStruct, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_ObjectClass_MetaData[] = {
		{ "Category", "SaveObjectStruct" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveObjectStruct, ObjectClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_ObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_ObjectClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_SerializeArray_Inner = { "SerializeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_SerializeArray_MetaData[] = {
		{ "Category", "SaveObjectStruct" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_SerializeArray = { "SerializeArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveObjectStruct, SerializeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_SerializeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_SerializeArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_ObjectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_SerializeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::NewProp_SerializeArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CodeLODPlugin,
		nullptr,
		&NewStructOps,
		"SaveObjectStruct",
		sizeof(FSaveObjectStruct),
		alignof(FSaveObjectStruct),
		Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveObjectStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveObjectStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CodeLODPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveObjectStruct"), sizeof(FSaveObjectStruct), Get_Z_Construct_UScriptStruct_FSaveObjectStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveObjectStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveObjectStruct_Hash() { return 809182561U; }
	DEFINE_FUNCTION(UHalfLoadLODObject::execRemoveInlineValueByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InlineClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveInlineValueByClass(Z_Param_InlineClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execRemoveInlineValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveInlineValue(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execAddNewInlineValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UClass,Z_Param_InlineClass);
		P_GET_UBOOL_REF(Z_Param_Out_Sucsess);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInlineObjectValue**)Z_Param__Result=P_THIS->AddNewInlineValue(Z_Param_Name,Z_Param_InlineClass,Z_Param_Out_Sucsess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execGetInlineValueByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UClass,Z_Param_InlineClass);
		P_GET_UBOOL(Z_Param_CreateIfNotFind);
		P_GET_UBOOL_REF(Z_Param_Out_Sucsess);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInlineObjectValue**)Z_Param__Result=P_THIS->GetInlineValueByName(Z_Param_Name,Z_Param_InlineClass,Z_Param_CreateIfNotFind,Z_Param_Out_Sucsess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execGetFunctionByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_FunctionClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFunctionObject**)Z_Param__Result=P_THIS->GetFunctionByClass(Z_Param_FunctionClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execGetSaveLODName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSaveLODName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execRegisterChild)
	{
		P_GET_STRUCT(FLODSaveDataStruct,Z_Param_SaveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterChild_Implementation(Z_Param_SaveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execLoadChildByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHalfLoadLODObject**)Z_Param__Result=P_THIS->LoadChildByName(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execLoadChildByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadChildByIndex_Implementation(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execLoadAllChildObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAllChildObjects_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execLoadOwnerActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadOwnerActor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execLoadSelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSelf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execUnloadOwnerActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadOwnerActor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execUnloadSelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadSelf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execChangeLoadStatus)
	{
		P_GET_ENUM(ELoadStatus,Z_Param_NewStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeLoadStatus_Implementation(ELoadStatus(Z_Param_NewStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execDeserialiseSelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeserialiseSelf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execSerializeSelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SerializeSelf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execDefineLODChildObject)
	{
		P_GET_OBJECT(UHalfLoadLODObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DefineLODChildObject_Implementation(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execDefineLODObjectByAnchor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DefineLODObjectByAnchor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execDefineLODObjectBySelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DefineLODObjectBySelf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHalfLoadLODObject::execBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UHalfLoadLODObject_BeginInitializeLOD = FName(TEXT("BeginInitializeLOD"));
	void UHalfLoadLODObject::BeginInitializeLOD()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_BeginInitializeLOD),NULL);
	}
	static FName NAME_UHalfLoadLODObject_BeginPlay = FName(TEXT("BeginPlay"));
	void UHalfLoadLODObject::BeginPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_BeginPlay),NULL);
	}
	static FName NAME_UHalfLoadLODObject_ChangeLoadStatus = FName(TEXT("ChangeLoadStatus"));
	void UHalfLoadLODObject::ChangeLoadStatus(ELoadStatus NewStatus)
	{
		HalfLoadLODObject_eventChangeLoadStatus_Parms Parms;
		Parms.NewStatus=NewStatus;
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_ChangeLoadStatus),&Parms);
	}
	static FName NAME_UHalfLoadLODObject_DefineLODChildObject = FName(TEXT("DefineLODChildObject"));
	bool UHalfLoadLODObject::DefineLODChildObject(UHalfLoadLODObject* Object)
	{
		HalfLoadLODObject_eventDefineLODChildObject_Parms Parms;
		Parms.Object=Object;
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_DefineLODChildObject),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHalfLoadLODObject_DefineLODObjectByAnchor = FName(TEXT("DefineLODObjectByAnchor"));
	bool UHalfLoadLODObject::DefineLODObjectByAnchor()
	{
		HalfLoadLODObject_eventDefineLODObjectByAnchor_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_DefineLODObjectByAnchor),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHalfLoadLODObject_DefineLODObjectBySelf = FName(TEXT("DefineLODObjectBySelf"));
	bool UHalfLoadLODObject::DefineLODObjectBySelf()
	{
		HalfLoadLODObject_eventDefineLODObjectBySelf_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_DefineLODObjectBySelf),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHalfLoadLODObject_DeserialiseSelf = FName(TEXT("DeserialiseSelf"));
	void UHalfLoadLODObject::DeserialiseSelf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_DeserialiseSelf),NULL);
	}
	static FName NAME_UHalfLoadLODObject_GetSaveLODName = FName(TEXT("GetSaveLODName"));
	FString UHalfLoadLODObject::GetSaveLODName()
	{
		HalfLoadLODObject_eventGetSaveLODName_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_GetSaveLODName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHalfLoadLODObject_LoadAllChildObjects = FName(TEXT("LoadAllChildObjects"));
	void UHalfLoadLODObject::LoadAllChildObjects()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_LoadAllChildObjects),NULL);
	}
	static FName NAME_UHalfLoadLODObject_LoadChildByIndex = FName(TEXT("LoadChildByIndex"));
	void UHalfLoadLODObject::LoadChildByIndex(int32 Index)
	{
		HalfLoadLODObject_eventLoadChildByIndex_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_LoadChildByIndex),&Parms);
	}
	static FName NAME_UHalfLoadLODObject_LoadOwnerActor = FName(TEXT("LoadOwnerActor"));
	void UHalfLoadLODObject::LoadOwnerActor()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_LoadOwnerActor),NULL);
	}
	static FName NAME_UHalfLoadLODObject_LoadSelf = FName(TEXT("LoadSelf"));
	void UHalfLoadLODObject::LoadSelf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_LoadSelf),NULL);
	}
	static FName NAME_UHalfLoadLODObject_RegisterChild = FName(TEXT("RegisterChild"));
	void UHalfLoadLODObject::RegisterChild(FLODSaveDataStruct SaveData)
	{
		HalfLoadLODObject_eventRegisterChild_Parms Parms;
		Parms.SaveData=SaveData;
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_RegisterChild),&Parms);
	}
	static FName NAME_UHalfLoadLODObject_SerializeSelf = FName(TEXT("SerializeSelf"));
	void UHalfLoadLODObject::SerializeSelf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_SerializeSelf),NULL);
	}
	static FName NAME_UHalfLoadLODObject_UnloadOwnerActor = FName(TEXT("UnloadOwnerActor"));
	void UHalfLoadLODObject::UnloadOwnerActor()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_UnloadOwnerActor),NULL);
	}
	static FName NAME_UHalfLoadLODObject_UnloadSelf = FName(TEXT("UnloadSelf"));
	void UHalfLoadLODObject::UnloadSelf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHalfLoadLODObject_UnloadSelf),NULL);
	}
	void UHalfLoadLODObject::StaticRegisterNativesUHalfLoadLODObject()
	{
		UClass* Class = UHalfLoadLODObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewInlineValue", &UHalfLoadLODObject::execAddNewInlineValue },
			{ "BeginPlay", &UHalfLoadLODObject::execBeginPlay },
			{ "ChangeLoadStatus", &UHalfLoadLODObject::execChangeLoadStatus },
			{ "DefineLODChildObject", &UHalfLoadLODObject::execDefineLODChildObject },
			{ "DefineLODObjectByAnchor", &UHalfLoadLODObject::execDefineLODObjectByAnchor },
			{ "DefineLODObjectBySelf", &UHalfLoadLODObject::execDefineLODObjectBySelf },
			{ "DeserialiseSelf", &UHalfLoadLODObject::execDeserialiseSelf },
			{ "GetFunctionByClass", &UHalfLoadLODObject::execGetFunctionByClass },
			{ "GetInlineValueByName", &UHalfLoadLODObject::execGetInlineValueByName },
			{ "GetSaveLODName", &UHalfLoadLODObject::execGetSaveLODName },
			{ "LoadAllChildObjects", &UHalfLoadLODObject::execLoadAllChildObjects },
			{ "LoadChildByIndex", &UHalfLoadLODObject::execLoadChildByIndex },
			{ "LoadChildByName", &UHalfLoadLODObject::execLoadChildByName },
			{ "LoadOwnerActor", &UHalfLoadLODObject::execLoadOwnerActor },
			{ "LoadSelf", &UHalfLoadLODObject::execLoadSelf },
			{ "RegisterChild", &UHalfLoadLODObject::execRegisterChild },
			{ "RemoveInlineValue", &UHalfLoadLODObject::execRemoveInlineValue },
			{ "RemoveInlineValueByClass", &UHalfLoadLODObject::execRemoveInlineValueByClass },
			{ "SerializeSelf", &UHalfLoadLODObject::execSerializeSelf },
			{ "UnloadOwnerActor", &UHalfLoadLODObject::execUnloadOwnerActor },
			{ "UnloadSelf", &UHalfLoadLODObject::execUnloadSelf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics
	{
		struct HalfLoadLODObject_eventAddNewInlineValue_Parms
		{
			FString Name;
			TSubclassOf<UInlineObjectValue>  InlineClass;
			bool Sucsess;
			UInlineObjectValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InlineClass;
		static void NewProp_Sucsess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Sucsess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventAddNewInlineValue_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::NewProp_InlineClass = { "InlineClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventAddNewInlineValue_Parms, InlineClass), Z_Construct_UClass_UInlineObjectValue_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::NewProp_Sucsess_SetBit(void* Obj)
	{
		((HalfLoadLODObject_eventAddNewInlineValue_Parms*)Obj)->Sucsess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::NewProp_Sucsess = { "Sucsess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HalfLoadLODObject_eventAddNewInlineValue_Parms), &Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::NewProp_Sucsess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventAddNewInlineValue_Parms, ReturnValue), Z_Construct_UClass_UInlineObjectValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::NewProp_InlineClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::NewProp_Sucsess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "InlineClass" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "AddNewInlineValue", nullptr, nullptr, sizeof(HalfLoadLODObject_eventAddNewInlineValue_Parms), Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_BeginInitializeLOD_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_BeginInitializeLOD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "ShortToolTip", "Function for the player. Triggered when the generator (CodeLODSubsistem) has set all the necessary values. It is used only for working in bulprints.." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_BeginInitializeLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "BeginInitializeLOD", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_BeginInitializeLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_BeginInitializeLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_BeginInitializeLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_BeginInitializeLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//????? ?? ????????????? LODSystem. ?????????? ??? ????????\n" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "ShortToolTip", "Event BEFORE LODSystem initialization." },
		{ "ToolTip", "????? ?? ????????????? LODSystem. ?????????? ??? ????????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_ChangeLoadStatus_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHalfLoadLODObject_ChangeLoadStatus_Statics::NewProp_NewStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_ChangeLoadStatus_Statics::NewProp_NewStatus = { "NewStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventChangeLoadStatus_Parms, NewStatus), Z_Construct_UEnum_CodeLODPlugin_ELoadStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalfLoadLODObject_ChangeLoadStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_ChangeLoadStatus_Statics::NewProp_NewStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_ChangeLoadStatus_Statics::NewProp_NewStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_ChangeLoadStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "Tooltip", "The main universal function of changing the status of Object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_ChangeLoadStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "ChangeLoadStatus", nullptr, nullptr, sizeof(HalfLoadLODObject_eventChangeLoadStatus_Parms), Z_Construct_UFunction_UHalfLoadLODObject_ChangeLoadStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_ChangeLoadStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_ChangeLoadStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_ChangeLoadStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_ChangeLoadStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_ChangeLoadStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventDefineLODChildObject_Parms, Object), Z_Construct_UClass_UHalfLoadLODObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HalfLoadLODObject_eventDefineLODChildObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HalfLoadLODObject_eventDefineLODChildObject_Parms), &Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "DefineLODChildObject", nullptr, nullptr, sizeof(HalfLoadLODObject_eventDefineLODChildObject_Parms), Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectByAnchor_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectByAnchor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HalfLoadLODObject_eventDefineLODObjectByAnchor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectByAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HalfLoadLODObject_eventDefineLODObjectByAnchor_Parms), &Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectByAnchor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectByAnchor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectByAnchor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectByAnchor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "Tooltip", "Defines the object relative to the parent Anchor. Calling this function only ensures that it is passed to the corresponding Detriment in Anchor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectByAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "DefineLODObjectByAnchor", nullptr, nullptr, sizeof(HalfLoadLODObject_eventDefineLODObjectByAnchor_Parms), Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectByAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectByAnchor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectByAnchor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectByAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectByAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectByAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectBySelf_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectBySelf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HalfLoadLODObject_eventDefineLODObjectBySelf_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectBySelf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HalfLoadLODObject_eventDefineLODObjectBySelf_Parms), &Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectBySelf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectBySelf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectBySelf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectBySelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "Tooltip", "Defines an object relative to its OwnerComponent->OwnerActor. All lodobjects are bound to exactly one class of objects or work through interfaces." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectBySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "DefineLODObjectBySelf", nullptr, nullptr, sizeof(HalfLoadLODObject_eventDefineLODObjectBySelf_Parms), Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectBySelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectBySelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectBySelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectBySelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectBySelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectBySelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_DeserialiseSelf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_DeserialiseSelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "Tooltip", "Deserialization function Inline Object, FuntionObject, DetermineObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_DeserialiseSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "DeserialiseSelf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_DeserialiseSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_DeserialiseSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_DeserialiseSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_DeserialiseSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_GetFunctionByClass_Statics
	{
		struct HalfLoadLODObject_eventGetFunctionByClass_Parms
		{
			TSubclassOf<UFunctionObject>  FunctionClass;
			UFunctionObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FunctionClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_GetFunctionByClass_Statics::NewProp_FunctionClass = { "FunctionClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventGetFunctionByClass_Parms, FunctionClass), Z_Construct_UClass_UFunctionObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_GetFunctionByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventGetFunctionByClass_Parms, ReturnValue), Z_Construct_UClass_UFunctionObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalfLoadLODObject_GetFunctionByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_GetFunctionByClass_Statics::NewProp_FunctionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_GetFunctionByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_GetFunctionByClass_Statics::Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "FunctionClass" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_GetFunctionByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "GetFunctionByClass", nullptr, nullptr, sizeof(HalfLoadLODObject_eventGetFunctionByClass_Parms), Z_Construct_UFunction_UHalfLoadLODObject_GetFunctionByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_GetFunctionByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_GetFunctionByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_GetFunctionByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_GetFunctionByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_GetFunctionByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics
	{
		struct HalfLoadLODObject_eventGetInlineValueByName_Parms
		{
			FString Name;
			TSubclassOf<UInlineObjectValue>  InlineClass;
			bool CreateIfNotFind;
			bool Sucsess;
			UInlineObjectValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InlineClass;
		static void NewProp_CreateIfNotFind_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateIfNotFind;
		static void NewProp_Sucsess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Sucsess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventGetInlineValueByName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::NewProp_InlineClass = { "InlineClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventGetInlineValueByName_Parms, InlineClass), Z_Construct_UClass_UInlineObjectValue_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::NewProp_CreateIfNotFind_SetBit(void* Obj)
	{
		((HalfLoadLODObject_eventGetInlineValueByName_Parms*)Obj)->CreateIfNotFind = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::NewProp_CreateIfNotFind = { "CreateIfNotFind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HalfLoadLODObject_eventGetInlineValueByName_Parms), &Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::NewProp_CreateIfNotFind_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::NewProp_Sucsess_SetBit(void* Obj)
	{
		((HalfLoadLODObject_eventGetInlineValueByName_Parms*)Obj)->Sucsess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::NewProp_Sucsess = { "Sucsess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HalfLoadLODObject_eventGetInlineValueByName_Parms), &Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::NewProp_Sucsess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventGetInlineValueByName_Parms, ReturnValue), Z_Construct_UClass_UInlineObjectValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::NewProp_InlineClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::NewProp_CreateIfNotFind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::NewProp_Sucsess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "InlineClass" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "GetInlineValueByName", nullptr, nullptr, sizeof(HalfLoadLODObject_eventGetInlineValueByName_Parms), Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_GetSaveLODName_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_GetSaveLODName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventGetSaveLODName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalfLoadLODObject_GetSaveLODName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_GetSaveLODName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_GetSaveLODName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "Tooltip", "Getting SaveLODName. Each LODObject has a unique SaveLODName. It is formed on the basis of SaveName+Anchor.SaveName+Anchor.Anchor.SaveName..." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_GetSaveLODName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "GetSaveLODName", nullptr, nullptr, sizeof(HalfLoadLODObject_eventGetSaveLODName_Parms), Z_Construct_UFunction_UHalfLoadLODObject_GetSaveLODName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_GetSaveLODName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_GetSaveLODName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_GetSaveLODName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_GetSaveLODName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_GetSaveLODName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_LoadAllChildObjects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_LoadAllChildObjects_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//?????? ??????? ???????? ?? ???????????? ????????? ? ???????????????, ??? ?????? ? ??????????.\n//The section of loading functions from the unloaded state to the semi - loaded state, for calling in bulprints.\n" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "ToolTip", "?????? ??????? ???????? ?? ???????????? ????????? ? ???????????????, ??? ?????? ? ??????????.\nThe section of loading functions from the unloaded state to the semi - loaded state, for calling in bulprints." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_LoadAllChildObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "LoadAllChildObjects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_LoadAllChildObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_LoadAllChildObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_LoadAllChildObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_LoadAllChildObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByIndex_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventLoadChildByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "LoadChildByIndex", nullptr, nullptr, sizeof(HalfLoadLODObject_eventLoadChildByIndex_Parms), Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByName_Statics
	{
		struct HalfLoadLODObject_eventLoadChildByName_Parms
		{
			FString Name;
			UHalfLoadLODObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventLoadChildByName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventLoadChildByName_Parms, ReturnValue), Z_Construct_UClass_UHalfLoadLODObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "LoadChildByName", nullptr, nullptr, sizeof(HalfLoadLODObject_eventLoadChildByName_Parms), Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_LoadOwnerActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_LoadOwnerActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "Tooltip", "Download function. A function that defines how to set Owner Actor relative to data from LODObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_LoadOwnerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "LoadOwnerActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_LoadOwnerActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_LoadOwnerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_LoadOwnerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_LoadOwnerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_LoadSelf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_LoadSelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "Tooltip", "Function called when transferring an object from an unloaded to a half-load state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_LoadSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "LoadSelf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_LoadSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_LoadSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_LoadSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_LoadSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_RegisterChild_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SaveData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_RegisterChild_Statics::NewProp_SaveData = { "SaveData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventRegisterChild_Parms, SaveData), Z_Construct_UScriptStruct_FLODSaveDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalfLoadLODObject_RegisterChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_RegisterChild_Statics::NewProp_SaveData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_RegisterChild_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "Tooltip", "LODObject registration function in Anchor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_RegisterChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "RegisterChild", nullptr, nullptr, sizeof(HalfLoadLODObject_eventRegisterChild_Parms), Z_Construct_UFunction_UHalfLoadLODObject_RegisterChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_RegisterChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_RegisterChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_RegisterChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_RegisterChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_RegisterChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValue_Statics
	{
		struct HalfLoadLODObject_eventRemoveInlineValue_Parms
		{
			FString Name;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventRemoveInlineValue_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValue_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "RemoveInlineValue", nullptr, nullptr, sizeof(HalfLoadLODObject_eventRemoveInlineValue_Parms), Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValueByClass_Statics
	{
		struct HalfLoadLODObject_eventRemoveInlineValueByClass_Parms
		{
			TSubclassOf<UInlineObjectValue>  InlineClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InlineClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValueByClass_Statics::NewProp_InlineClass = { "InlineClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HalfLoadLODObject_eventRemoveInlineValueByClass_Parms, InlineClass), Z_Construct_UClass_UInlineObjectValue_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValueByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValueByClass_Statics::NewProp_InlineClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValueByClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValueByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "RemoveInlineValueByClass", nullptr, nullptr, sizeof(HalfLoadLODObject_eventRemoveInlineValueByClass_Parms), Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValueByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValueByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValueByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValueByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValueByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValueByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_SerializeSelf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_SerializeSelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "Tooltip", "Serialization function Inline Object, FuntionObject, DetermineObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_SerializeSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "SerializeSelf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_SerializeSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_SerializeSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_SerializeSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_SerializeSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_UnloadOwnerActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_UnloadOwnerActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "Tooltip", "A function called when it is transferred to a semi-loaded state. Deletes the Actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_UnloadOwnerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "UnloadOwnerActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_UnloadOwnerActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_UnloadOwnerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_UnloadOwnerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_UnloadOwnerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHalfLoadLODObject_UnloadSelf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHalfLoadLODObject_UnloadSelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "Tooltip", "The function called when unloading LODObject." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHalfLoadLODObject_UnloadSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHalfLoadLODObject, nullptr, "UnloadSelf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHalfLoadLODObject_UnloadSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHalfLoadLODObject_UnloadSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHalfLoadLODObject_UnloadSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHalfLoadLODObject_UnloadSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHalfLoadLODObject_NoRegister()
	{
		return UHalfLoadLODObject::StaticClass();
	}
	struct Z_Construct_UClass_UHalfLoadLODObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[];
#endif
		static void NewProp_Constant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Constant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anchor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anchor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Childs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Childs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Childs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LODName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetermineObjects_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetermineObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetermineObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetermineObjects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SerializeDetermineObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerializeDetermineObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SerializeDetermineObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionObjects_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionObjects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SerializeFunctionObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerializeFunctionObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SerializeFunctionObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InlineValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InlineValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InlineValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SerializeInlineValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerializeInlineValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SerializeInlineValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeLoadStatusDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ChangeLoadStatusDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHalfLoadLODObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeLODPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHalfLoadLODObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHalfLoadLODObject_AddNewInlineValue, "AddNewInlineValue" }, // 4248046939
		{ &Z_Construct_UFunction_UHalfLoadLODObject_BeginInitializeLOD, "BeginInitializeLOD" }, // 240242569
		{ &Z_Construct_UFunction_UHalfLoadLODObject_BeginPlay, "BeginPlay" }, // 162834288
		{ &Z_Construct_UFunction_UHalfLoadLODObject_ChangeLoadStatus, "ChangeLoadStatus" }, // 3649734335
		{ &Z_Construct_UFunction_UHalfLoadLODObject_DefineLODChildObject, "DefineLODChildObject" }, // 3128991065
		{ &Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectByAnchor, "DefineLODObjectByAnchor" }, // 142087118
		{ &Z_Construct_UFunction_UHalfLoadLODObject_DefineLODObjectBySelf, "DefineLODObjectBySelf" }, // 3266164680
		{ &Z_Construct_UFunction_UHalfLoadLODObject_DeserialiseSelf, "DeserialiseSelf" }, // 2349357962
		{ &Z_Construct_UFunction_UHalfLoadLODObject_GetFunctionByClass, "GetFunctionByClass" }, // 1699445890
		{ &Z_Construct_UFunction_UHalfLoadLODObject_GetInlineValueByName, "GetInlineValueByName" }, // 3480408725
		{ &Z_Construct_UFunction_UHalfLoadLODObject_GetSaveLODName, "GetSaveLODName" }, // 2993174300
		{ &Z_Construct_UFunction_UHalfLoadLODObject_LoadAllChildObjects, "LoadAllChildObjects" }, // 3955490603
		{ &Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByIndex, "LoadChildByIndex" }, // 1195829613
		{ &Z_Construct_UFunction_UHalfLoadLODObject_LoadChildByName, "LoadChildByName" }, // 313482001
		{ &Z_Construct_UFunction_UHalfLoadLODObject_LoadOwnerActor, "LoadOwnerActor" }, // 3605468111
		{ &Z_Construct_UFunction_UHalfLoadLODObject_LoadSelf, "LoadSelf" }, // 3211911833
		{ &Z_Construct_UFunction_UHalfLoadLODObject_RegisterChild, "RegisterChild" }, // 1431483108
		{ &Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValue, "RemoveInlineValue" }, // 3722706615
		{ &Z_Construct_UFunction_UHalfLoadLODObject_RemoveInlineValueByClass, "RemoveInlineValueByClass" }, // 22151904
		{ &Z_Construct_UFunction_UHalfLoadLODObject_SerializeSelf, "SerializeSelf" }, // 934211349
		{ &Z_Construct_UFunction_UHalfLoadLODObject_UnloadOwnerActor, "UnloadOwnerActor" }, // 2917419097
		{ &Z_Construct_UFunction_UHalfLoadLODObject_UnloadSelf, "UnloadSelf" }, // 1125739639
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HalfLoadLODObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "ToolTip", "The main class for the LOD System." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_OwnerComponent_MetaData[] = {
		{ "Category", "HalfLoadLODObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHalfLoadLODObject, OwnerComponent), Z_Construct_UClass_UCodeLODComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_OwnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_OwnerComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_LoadStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_LoadStatus_MetaData[] = {
		{ "Category", "HalfLoadLODObject" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "ToolTip", "Current LoadStatus LODObject" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_LoadStatus = { "LoadStatus", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHalfLoadLODObject, LoadStatus), Z_Construct_UEnum_CodeLODPlugin_ELoadStatus, METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_LoadStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_LoadStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Constant_MetaData[] = {
		{ "Category", "HalfLoadLODObject" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "ToolTip", "Constant Actors and their LOD Object should not and cannot be unloaded. They should be the top of the tree formed from HalfLodObject and their Anchor." },
	};
#endif
	void Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Constant_SetBit(void* Obj)
	{
		((UHalfLoadLODObject*)Obj)->Constant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHalfLoadLODObject), &Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Constant_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Constant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Constant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Anchor_MetaData[] = {
		{ "Category", "HalfLoadLODObject" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "ToolTip", "A pointer to the parent LODObject for the current LODObject.Form a tree." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHalfLoadLODObject, Anchor), Z_Construct_UClass_UHalfLoadLODObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Anchor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Anchor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Childs_Inner = { "Childs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLODSaveDataStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Childs_MetaData[] = {
		{ "Category", "HalfLoadLODObject" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "ToolTip", "Children of the tree for LODObject." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Childs = { "Childs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHalfLoadLODObject, Childs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Childs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Childs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_LODName_MetaData[] = {
		{ "Category", "HalfLoadLODObject" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "ToolTip", "CodeLOD's second name. It is generated once at the start of the game and is responsible for the cell in which the CodeLOD will be saved." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_LODName = { "LODName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHalfLoadLODObject, LODName), METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_LODName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_LODName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "HalfLoadLODObject" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "ToolTip", "The class of the Actor being served. You can change it. This class will spawn with the Load status for LOD Object." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHalfLoadLODObject, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_DetermineObjects_Inner_MetaData[] = {
		{ "Category", "HalfLoadLODObject" },
		{ "Comment", "//????????? Serialize ????????, ??? ???? ?????????? ?????????? ?? ????????????? ????????. \n//??? ??? ???? ???????? ???? ????????????? ? ?????? ????????? ??????? Unload ??? LODObject, ? ??????????????? ??????? ??? ??????? Half-Load ? Load.\n//Serialize prefixes mean that information about serialized objects is entered here. \n//All three types of objects below are serialized when the Unload status is set for LODObject, and deserialized back when the status is Half-Load and Load.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "ToolTip", "????????? Serialize ????????, ??? ???? ?????????? ?????????? ?? ????????????? ????????.\n??? ??? ???? ???????? ???? ????????????? ? ?????? ????????? ??????? Unload ??? LODObject, ? ??????????????? ??????? ??? ??????? Half-Load ? Load.\nSerialize prefixes mean that information about serialized objects is entered here.\nAll three types of objects below are serialized when the Unload status is set for LODObject, and deserialized back when the status is Half-Load and Load." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_DetermineObjects_Inner = { "DetermineObjects", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDetermineLODObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_DetermineObjects_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_DetermineObjects_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_DetermineObjects_MetaData[] = {
		{ "Category", "HalfLoadLODObject" },
		{ "Comment", "//????????? Serialize ????????, ??? ???? ?????????? ?????????? ?? ????????????? ????????. \n//??? ??? ???? ???????? ???? ????????????? ? ?????? ????????? ??????? Unload ??? LODObject, ? ??????????????? ??????? ??? ??????? Half-Load ? Load.\n//Serialize prefixes mean that information about serialized objects is entered here. \n//All three types of objects below are serialized when the Unload status is set for LODObject, and deserialized back when the status is Half-Load and Load.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
		{ "ToolTip", "????????? Serialize ????????, ??? ???? ?????????? ?????????? ?? ????????????? ????????.\n??? ??? ???? ???????? ???? ????????????? ? ?????? ????????? ??????? Unload ??? LODObject, ? ??????????????? ??????? ??? ??????? Half-Load ? Load.\nSerialize prefixes mean that information about serialized objects is entered here.\nAll three types of objects below are serialized when the Unload status is set for LODObject, and deserialized back when the status is Half-Load and Load." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_DetermineObjects = { "DetermineObjects", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHalfLoadLODObject, DetermineObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_DetermineObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_DetermineObjects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeDetermineObjects_Inner = { "SerializeDetermineObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveObjectStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeDetermineObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeDetermineObjects = { "SerializeDetermineObjects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHalfLoadLODObject, SerializeDetermineObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeDetermineObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeDetermineObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_FunctionObjects_Inner_MetaData[] = {
		{ "Category", "HalfLoadLODObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_FunctionObjects_Inner = { "FunctionObjects", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFunctionObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_FunctionObjects_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_FunctionObjects_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_FunctionObjects_MetaData[] = {
		{ "Category", "HalfLoadLODObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_FunctionObjects = { "FunctionObjects", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHalfLoadLODObject, FunctionObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_FunctionObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_FunctionObjects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeFunctionObjects_Inner = { "SerializeFunctionObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveObjectStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeFunctionObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeFunctionObjects = { "SerializeFunctionObjects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHalfLoadLODObject, SerializeFunctionObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeFunctionObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeFunctionObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_InlineValues_Inner = { "InlineValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInlineObjectValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_InlineValues_MetaData[] = {
		{ "Category", "HalfLoadLODObject" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_InlineValues = { "InlineValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHalfLoadLODObject, InlineValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_InlineValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_InlineValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeInlineValues_Inner = { "SerializeInlineValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveObjectStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeInlineValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeInlineValues = { "SerializeInlineValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHalfLoadLODObject, SerializeInlineValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeInlineValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeInlineValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_ChangeLoadStatusDelegate_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/HalfLoadLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_ChangeLoadStatusDelegate = { "ChangeLoadStatusDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHalfLoadLODObject, ChangeLoadStatusDelegate), Z_Construct_UDelegateFunction_CodeLODPlugin_ChangeStatusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_ChangeLoadStatusDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_ChangeLoadStatusDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHalfLoadLODObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_OwnerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_LoadStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_LoadStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Constant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Anchor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Childs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_Childs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_LODName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_DetermineObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_DetermineObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeDetermineObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeDetermineObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_FunctionObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_FunctionObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeFunctionObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeFunctionObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_InlineValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_InlineValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeInlineValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_SerializeInlineValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHalfLoadLODObject_Statics::NewProp_ChangeLoadStatusDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHalfLoadLODObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHalfLoadLODObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHalfLoadLODObject_Statics::ClassParams = {
		&UHalfLoadLODObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHalfLoadLODObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHalfLoadLODObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHalfLoadLODObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHalfLoadLODObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHalfLoadLODObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHalfLoadLODObject, 1971232500);
	template<> CODELODPLUGIN_API UClass* StaticClass<UHalfLoadLODObject>()
	{
		return UHalfLoadLODObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHalfLoadLODObject(Z_Construct_UClass_UHalfLoadLODObject, &UHalfLoadLODObject::StaticClass, TEXT("/Script/CodeLODPlugin"), TEXT("UHalfLoadLODObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHalfLoadLODObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
