// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeLODPlugin/Public/CodeLODComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeLODComponent() {}
// Cross Module References
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UCodeLODComponent_NoRegister();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UCodeLODComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CodeLODPlugin();
	CODELODPLUGIN_API UClass* Z_Construct_UClass_UHalfLoadLODObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UCodeLODComponent::execDefineLODObjectBySelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DefineLODObjectBySelf_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCodeLODComponent_DefineLODObjectBySelf = FName(TEXT("DefineLODObjectBySelf"));
	void UCodeLODComponent::DefineLODObjectBySelf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCodeLODComponent_DefineLODObjectBySelf),NULL);
	}
	void UCodeLODComponent::StaticRegisterNativesUCodeLODComponent()
	{
		UClass* Class = UCodeLODComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DefineLODObjectBySelf", &UCodeLODComponent::execDefineLODObjectBySelf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCodeLODComponent_DefineLODObjectBySelf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCodeLODComponent_DefineLODObjectBySelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CodeLODComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCodeLODComponent_DefineLODObjectBySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCodeLODComponent, nullptr, "DefineLODObjectBySelf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCodeLODComponent_DefineLODObjectBySelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCodeLODComponent_DefineLODObjectBySelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCodeLODComponent_DefineLODObjectBySelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCodeLODComponent_DefineLODObjectBySelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCodeLODComponent_NoRegister()
	{
		return UCodeLODComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCodeLODComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnchorActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnchorActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[];
#endif
		static void NewProp_Constant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Constant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCodeLODComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeLODPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCodeLODComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCodeLODComponent_DefineLODObjectBySelf, "DefineLODObjectBySelf" }, // 465108083
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeLODComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CodeLODComponent.h" },
		{ "ModuleRelativePath", "Public/CodeLODComponent.h" },
		{ "Tooltip", "The basic component for any Actor connected to the Code LOD System. Marks Actor as being connected to LOD, is responsible for the basic configuration of LODObject, stores a pointer to LODObject. As a rule, it does not require modification." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "CodeLODComponent" },
		{ "ModuleRelativePath", "Public/CodeLODComponent.h" },
		{ "Tooltip", "Link to the LOD object. Generated based on the objectClass class by the subsystem" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCodeLODComponent, Object), Z_Construct_UClass_UHalfLoadLODObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_AnchorActor_MetaData[] = {
		{ "Category", "CodeLODComponent" },
		{ "ModuleRelativePath", "Public/CodeLODComponent.h" },
		{ "Tooltip", "A reference to an Actor that has a component with a parent HalfLodObject of objects" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_AnchorActor = { "AnchorActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCodeLODComponent, AnchorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_AnchorActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_AnchorActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_Constant_MetaData[] = {
		{ "Category", "CodeLODComponent" },
		{ "ModuleRelativePath", "Public/CodeLODComponent.h" },
		{ "Tooltip", "Constant Actors should not and cannot be unloaded. They should be the top of the tree formed from HalfLodObject and their Anchor." },
	};
#endif
	void Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_Constant_SetBit(void* Obj)
	{
		((UCodeLODComponent*)Obj)->Constant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCodeLODComponent), &Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_Constant_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_Constant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_Constant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_ObjectClass_MetaData[] = {
		{ "Category", "CodeLODComponent" },
		{ "ModuleRelativePath", "Public/CodeLODComponent.h" },
		{ "Tooltip", "Pointer to the HalfLoadLODObject class of the Object that will be spawned and will correspond to this Actor." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCodeLODComponent, ObjectClass), Z_Construct_UClass_UHalfLoadLODObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_ObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_ObjectClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCodeLODComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_AnchorActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_Constant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeLODComponent_Statics::NewProp_ObjectClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCodeLODComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCodeLODComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCodeLODComponent_Statics::ClassParams = {
		&UCodeLODComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCodeLODComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCodeLODComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCodeLODComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeLODComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCodeLODComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCodeLODComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCodeLODComponent, 1376806248);
	template<> CODELODPLUGIN_API UClass* StaticClass<UCodeLODComponent>()
	{
		return UCodeLODComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCodeLODComponent(Z_Construct_UClass_UCodeLODComponent, &UCodeLODComponent::StaticClass, TEXT("/Script/CodeLODPlugin"), TEXT("UCodeLODComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCodeLODComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
