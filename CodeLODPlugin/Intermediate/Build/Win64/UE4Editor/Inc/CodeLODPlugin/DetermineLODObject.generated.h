// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHalfLoadLODObject;
#ifdef CODELODPLUGIN_DetermineLODObject_generated_h
#error "DetermineLODObject.generated.h already included, missing '#pragma once' in DetermineLODObject.h"
#endif
#define CODELODPLUGIN_DetermineLODObject_generated_h

#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_SPARSE_DATA
#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_RPC_WRAPPERS \
	virtual bool DetermineLODObject_Implementation(UHalfLoadLODObject* Object); \
 \
	DECLARE_FUNCTION(execDetermineLODObject);


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool DetermineLODObject_Implementation(UHalfLoadLODObject* Object); \
 \
	DECLARE_FUNCTION(execDetermineLODObject);


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_EVENT_PARMS \
	struct DetermineLODObject_eventDetermineLODObject_Parms \
	{ \
		UHalfLoadLODObject* Object; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DetermineLODObject_eventDetermineLODObject_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_CALLBACK_WRAPPERS
#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDetermineLODObject(); \
	friend struct Z_Construct_UClass_UDetermineLODObject_Statics; \
public: \
	DECLARE_CLASS(UDetermineLODObject, UInlineObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CodeLODPlugin"), NO_API) \
	DECLARE_SERIALIZER(UDetermineLODObject)


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUDetermineLODObject(); \
	friend struct Z_Construct_UClass_UDetermineLODObject_Statics; \
public: \
	DECLARE_CLASS(UDetermineLODObject, UInlineObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CodeLODPlugin"), NO_API) \
	DECLARE_SERIALIZER(UDetermineLODObject)


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDetermineLODObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetermineLODObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetermineLODObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetermineLODObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDetermineLODObject(UDetermineLODObject&&); \
	NO_API UDetermineLODObject(const UDetermineLODObject&); \
public:


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDetermineLODObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDetermineLODObject(UDetermineLODObject&&); \
	NO_API UDetermineLODObject(const UDetermineLODObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetermineLODObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetermineLODObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetermineLODObject)


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_PRIVATE_PROPERTY_OFFSET
#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_25_PROLOG \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_EVENT_PARMS


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_PRIVATE_PROPERTY_OFFSET \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_SPARSE_DATA \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_RPC_WRAPPERS \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_CALLBACK_WRAPPERS \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_INCLASS \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_PRIVATE_PROPERTY_OFFSET \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_SPARSE_DATA \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_CALLBACK_WRAPPERS \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_INCLASS_NO_PURE_DECLS \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODELODPLUGIN_API UClass* StaticClass<class UDetermineLODObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_DetermineLODObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
