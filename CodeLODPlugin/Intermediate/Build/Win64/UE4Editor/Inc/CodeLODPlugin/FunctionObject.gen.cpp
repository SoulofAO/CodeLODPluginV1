// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeLODPlugin/Public/FunctionObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionObject() {}
// Cross Module References
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UFunctionObject_NoRegister();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UFunctionObject();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UInlineObject();
	UPackage* Z_Construct_UPackage__Script_CodeLODPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UHalfLoadLODObject_NoRegister();
// End Cross Module References
	void UFunctionObject::StaticRegisterNativesUFunctionObject()
	{
	}
	UClass* Z_Construct_UClass_UFunctionObject_NoRegister()
	{
		return UFunctionObject::StaticClass();
	}
	struct Z_Construct_UClass_UFunctionObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerLODObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerLODObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFunctionObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInlineObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeLODPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FunctionObject.h" },
		{ "ModuleRelativePath", "Public/FunctionObject.h" },
		{ "Tooltipe", "A class assigned to HalfLoadLODObject that is responsible for actions or check" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionObject_Statics::NewProp_OwnerActor_MetaData[] = {
		{ "Category", "FunctionObject" },
		{ "ModuleRelativePath", "Public/FunctionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFunctionObject_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFunctionObject, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFunctionObject_Statics::NewProp_OwnerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionObject_Statics::NewProp_OwnerActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionObject_Statics::NewProp_OwnerLODObject_MetaData[] = {
		{ "Category", "FunctionObject" },
		{ "ModuleRelativePath", "Public/FunctionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFunctionObject_Statics::NewProp_OwnerLODObject = { "OwnerLODObject", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFunctionObject, OwnerLODObject), Z_Construct_UClass_UHalfLoadLODObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFunctionObject_Statics::NewProp_OwnerLODObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionObject_Statics::NewProp_OwnerLODObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFunctionObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionObject_Statics::NewProp_OwnerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionObject_Statics::NewProp_OwnerLODObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFunctionObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFunctionObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFunctionObject_Statics::ClassParams = {
		&UFunctionObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFunctionObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionObject_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFunctionObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFunctionObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFunctionObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFunctionObject, 1617247183);
	template<> CODELODPLUGIN_API UClass* StaticClass<UFunctionObject>()
	{
		return UFunctionObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFunctionObject(Z_Construct_UClass_UFunctionObject, &UFunctionObject::StaticClass, TEXT("/Script/CodeLODPlugin"), TEXT("UFunctionObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFunctionObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
