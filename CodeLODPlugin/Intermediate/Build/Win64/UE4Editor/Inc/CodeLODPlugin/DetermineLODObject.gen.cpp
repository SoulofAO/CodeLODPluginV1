// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeLODPlugin/Public/DetermineLODObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetermineLODObject() {}
// Cross Module References
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UDetermineLODObject_NoRegister();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UDetermineLODObject();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UInlineObject();
	UPackage* Z_Construct_UPackage__Script_CodeLODPlugin();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UHalfLoadLODObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UDetermineLODObject::execDetermineLODObject)
	{
		P_GET_OBJECT(UHalfLoadLODObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DetermineLODObject_Implementation(Z_Param_Object);
		P_NATIVE_END;
	}
	static FName NAME_UDetermineLODObject_DetermineLODObject = FName(TEXT("DetermineLODObject"));
	bool UDetermineLODObject::DetermineLODObject(UHalfLoadLODObject* Object)
	{
		DetermineLODObject_eventDetermineLODObject_Parms Parms;
		Parms.Object=Object;
		ProcessEvent(FindFunctionChecked(NAME_UDetermineLODObject_DetermineLODObject),&Parms);
		return !!Parms.ReturnValue;
	}
	void UDetermineLODObject::StaticRegisterNativesUDetermineLODObject()
	{
		UClass* Class = UDetermineLODObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DetermineLODObject", &UDetermineLODObject::execDetermineLODObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetermineLODObject_eventDetermineLODObject_Parms, Object), Z_Construct_UClass_UHalfLoadLODObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DetermineLODObject_eventDetermineLODObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetermineLODObject_eventDetermineLODObject_Parms), &Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//??????????? ??????? ???????????.  ???????????? ? ??????????.\n" },
		{ "ModuleRelativePath", "Public/DetermineLODObject.h" },
		{ "Tooltipe", "TAbstract main definition function. Defined in bullprints." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetermineLODObject, nullptr, "DetermineLODObject", nullptr, nullptr, sizeof(DetermineLODObject_eventDetermineLODObject_Parms), Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDetermineLODObject_NoRegister()
	{
		return UDetermineLODObject::StaticClass();
	}
	struct Z_Construct_UClass_UDetermineLODObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetemineClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DetemineClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerLODObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerLODObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDetermineLODObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInlineObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeLODPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDetermineLODObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDetermineLODObject_DetermineLODObject, "DetermineLODObject" }, // 3778052591
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetermineLODObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The class assigned to HalfLoadLODObject, which is responsible for determining the current state of the child HalfLoadLODObject.\n  * Has a rigid binding to the child HalfLoadLODObject class, which can serve. (Another option is in the revision)\n  *\n  * Example:\n * The Marine's NPC was unloaded. Then it was re-loaded. At the moment of loading, he requests a DetermineLODObject from his Anchor for his class and calls bool DetermineLODObject(). DetermineLODObject defines the state of the marine and how it is pom\n  */" },
		{ "IncludePath", "DetermineLODObject.h" },
		{ "ModuleRelativePath", "Public/DetermineLODObject.h" },
		{ "ToolTip", "The class assigned to HalfLoadLODObject, which is responsible for determining the current state of the child HalfLoadLODObject.\nHas a rigid binding to the child HalfLoadLODObject class, which can serve. (Another option is in the revision)\n\nExample:\nThe Marine's NPC was unloaded. Then it was re-loaded. At the moment of loading, he requests a DetermineLODObject from his Anchor for his class and calls bool DetermineLODObject(). DetermineLODObject defines the state of the marine and how it is pom" },
		{ "Tooltipe", "The class assigned to HalfLoadLODObject, which is responsible for determining the current state of the child HalfLoadLODObject" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetermineLODObject_Statics::NewProp_DetemineClass_MetaData[] = {
		{ "Category", "DetermineLODObject" },
		{ "Comment", "//????? ????????? HalfLoadLODObject. ???????????? ??? ??????? DetermineLODObject ? LODObject Anchor. DetermineLODObject ????? ?????????? ?????, ????????? ????. \n" },
		{ "ModuleRelativePath", "Public/DetermineLODObject.h" },
		{ "ToolTip", "????? ????????? HalfLoadLODObject. ???????????? ??? ??????? DetermineLODObject ? LODObject Anchor. DetermineLODObject ????? ?????????? ?????, ????????? ????." },
		{ "Tooltipe", "The class of the child HalfLoadLODObject. Used to match DetermineLODObject to LODObject Anchor. DetermineLODObject will define the class specified below." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDetermineLODObject_Statics::NewProp_DetemineClass = { "DetemineClass", nullptr, (EPropertyFlags)0x0014000001000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetermineLODObject, DetemineClass), Z_Construct_UClass_UHalfLoadLODObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDetermineLODObject_Statics::NewProp_DetemineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetermineLODObject_Statics::NewProp_DetemineClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetermineLODObject_Statics::NewProp_OwnerLODObject_MetaData[] = {
		{ "Category", "DetermineLODObject" },
		{ "ModuleRelativePath", "Public/DetermineLODObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDetermineLODObject_Statics::NewProp_OwnerLODObject = { "OwnerLODObject", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetermineLODObject, OwnerLODObject), Z_Construct_UClass_UHalfLoadLODObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDetermineLODObject_Statics::NewProp_OwnerLODObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetermineLODObject_Statics::NewProp_OwnerLODObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDetermineLODObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetermineLODObject_Statics::NewProp_DetemineClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetermineLODObject_Statics::NewProp_OwnerLODObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDetermineLODObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetermineLODObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDetermineLODObject_Statics::ClassParams = {
		&UDetermineLODObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDetermineLODObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDetermineLODObject_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDetermineLODObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDetermineLODObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDetermineLODObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDetermineLODObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDetermineLODObject, 63469456);
	template<> CODELODPLUGIN_API UClass* StaticClass<UDetermineLODObject>()
	{
		return UDetermineLODObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDetermineLODObject(Z_Construct_UClass_UDetermineLODObject, &UDetermineLODObject::StaticClass, TEXT("/Script/CodeLODPlugin"), TEXT("UDetermineLODObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDetermineLODObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
