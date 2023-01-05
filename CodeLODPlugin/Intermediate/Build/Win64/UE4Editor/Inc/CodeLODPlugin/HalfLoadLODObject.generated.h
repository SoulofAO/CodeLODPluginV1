// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInlineObjectValue;
class UFunctionObject;
struct FLODSaveDataStruct;
class UHalfLoadLODObject;
enum class ELoadStatus : uint8;
#ifdef CODELODPLUGIN_HalfLoadLODObject_generated_h
#error "HalfLoadLODObject.generated.h already included, missing '#pragma once' in HalfLoadLODObject.h"
#endif
#define CODELODPLUGIN_HalfLoadLODObject_generated_h

#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLODSaveDataStruct_Statics; \
	CODELODPLUGIN_API static class UScriptStruct* StaticStruct();


template<> CODELODPLUGIN_API UScriptStruct* StaticStruct<struct FLODSaveDataStruct>();

#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSaveObjectStruct_Statics; \
	CODELODPLUGIN_API static class UScriptStruct* StaticStruct();


template<> CODELODPLUGIN_API UScriptStruct* StaticStruct<struct FSaveObjectStruct>();

#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_72_DELEGATE \
static inline void FChangeStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChangeStatusDelegate) \
{ \
	ChangeStatusDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_SPARSE_DATA
#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_RPC_WRAPPERS \
	virtual FString GetSaveLODName_Implementation(); \
	virtual void RegisterChild_Implementation(FLODSaveDataStruct SaveData); \
	virtual void LoadChildByIndex_Implementation(int32 Index); \
	virtual void LoadAllChildObjects_Implementation(); \
	virtual void LoadOwnerActor_Implementation(); \
	virtual void LoadSelf_Implementation(); \
	virtual void UnloadOwnerActor_Implementation(); \
	virtual void UnloadSelf_Implementation(); \
	virtual void ChangeLoadStatus_Implementation(ELoadStatus NewStatus); \
	virtual void DeserialiseSelf_Implementation(); \
	virtual void SerializeSelf_Implementation(); \
	virtual bool DefineLODChildObject_Implementation(UHalfLoadLODObject* Object); \
	virtual bool DefineLODObjectByAnchor_Implementation(); \
	virtual bool DefineLODObjectBySelf_Implementation(); \
	virtual void BeginPlay_Implementation(); \
 \
	DECLARE_FUNCTION(execRemoveInlineValueByClass); \
	DECLARE_FUNCTION(execRemoveInlineValue); \
	DECLARE_FUNCTION(execAddNewInlineValue); \
	DECLARE_FUNCTION(execGetInlineValueByName); \
	DECLARE_FUNCTION(execGetFunctionByClass); \
	DECLARE_FUNCTION(execGetSaveLODName); \
	DECLARE_FUNCTION(execRegisterChild); \
	DECLARE_FUNCTION(execLoadChildByName); \
	DECLARE_FUNCTION(execLoadChildByIndex); \
	DECLARE_FUNCTION(execLoadAllChildObjects); \
	DECLARE_FUNCTION(execLoadOwnerActor); \
	DECLARE_FUNCTION(execLoadSelf); \
	DECLARE_FUNCTION(execUnloadOwnerActor); \
	DECLARE_FUNCTION(execUnloadSelf); \
	DECLARE_FUNCTION(execChangeLoadStatus); \
	DECLARE_FUNCTION(execDeserialiseSelf); \
	DECLARE_FUNCTION(execSerializeSelf); \
	DECLARE_FUNCTION(execDefineLODChildObject); \
	DECLARE_FUNCTION(execDefineLODObjectByAnchor); \
	DECLARE_FUNCTION(execDefineLODObjectBySelf); \
	DECLARE_FUNCTION(execBeginPlay);


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FString GetSaveLODName_Implementation(); \
	virtual void RegisterChild_Implementation(FLODSaveDataStruct SaveData); \
	virtual void LoadChildByIndex_Implementation(int32 Index); \
	virtual void LoadAllChildObjects_Implementation(); \
	virtual void LoadOwnerActor_Implementation(); \
	virtual void LoadSelf_Implementation(); \
	virtual void UnloadOwnerActor_Implementation(); \
	virtual void UnloadSelf_Implementation(); \
	virtual void ChangeLoadStatus_Implementation(ELoadStatus NewStatus); \
	virtual void DeserialiseSelf_Implementation(); \
	virtual void SerializeSelf_Implementation(); \
	virtual bool DefineLODChildObject_Implementation(UHalfLoadLODObject* Object); \
	virtual bool DefineLODObjectByAnchor_Implementation(); \
	virtual bool DefineLODObjectBySelf_Implementation(); \
	virtual void BeginPlay_Implementation(); \
 \
	DECLARE_FUNCTION(execRemoveInlineValueByClass); \
	DECLARE_FUNCTION(execRemoveInlineValue); \
	DECLARE_FUNCTION(execAddNewInlineValue); \
	DECLARE_FUNCTION(execGetInlineValueByName); \
	DECLARE_FUNCTION(execGetFunctionByClass); \
	DECLARE_FUNCTION(execGetSaveLODName); \
	DECLARE_FUNCTION(execRegisterChild); \
	DECLARE_FUNCTION(execLoadChildByName); \
	DECLARE_FUNCTION(execLoadChildByIndex); \
	DECLARE_FUNCTION(execLoadAllChildObjects); \
	DECLARE_FUNCTION(execLoadOwnerActor); \
	DECLARE_FUNCTION(execLoadSelf); \
	DECLARE_FUNCTION(execUnloadOwnerActor); \
	DECLARE_FUNCTION(execUnloadSelf); \
	DECLARE_FUNCTION(execChangeLoadStatus); \
	DECLARE_FUNCTION(execDeserialiseSelf); \
	DECLARE_FUNCTION(execSerializeSelf); \
	DECLARE_FUNCTION(execDefineLODChildObject); \
	DECLARE_FUNCTION(execDefineLODObjectByAnchor); \
	DECLARE_FUNCTION(execDefineLODObjectBySelf); \
	DECLARE_FUNCTION(execBeginPlay);


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_EVENT_PARMS \
	struct HalfLoadLODObject_eventChangeLoadStatus_Parms \
	{ \
		ELoadStatus NewStatus; \
	}; \
	struct HalfLoadLODObject_eventDefineLODChildObject_Parms \
	{ \
		UHalfLoadLODObject* Object; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HalfLoadLODObject_eventDefineLODChildObject_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HalfLoadLODObject_eventDefineLODObjectByAnchor_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HalfLoadLODObject_eventDefineLODObjectByAnchor_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HalfLoadLODObject_eventDefineLODObjectBySelf_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HalfLoadLODObject_eventDefineLODObjectBySelf_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HalfLoadLODObject_eventGetSaveLODName_Parms \
	{ \
		FString ReturnValue; \
	}; \
	struct HalfLoadLODObject_eventLoadChildByIndex_Parms \
	{ \
		int32 Index; \
	}; \
	struct HalfLoadLODObject_eventRegisterChild_Parms \
	{ \
		FLODSaveDataStruct SaveData; \
	};


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_CALLBACK_WRAPPERS
#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHalfLoadLODObject(); \
	friend struct Z_Construct_UClass_UHalfLoadLODObject_Statics; \
public: \
	DECLARE_CLASS(UHalfLoadLODObject, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CodeLODPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHalfLoadLODObject)


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_INCLASS \
private: \
	static void StaticRegisterNativesUHalfLoadLODObject(); \
	friend struct Z_Construct_UClass_UHalfLoadLODObject_Statics; \
public: \
	DECLARE_CLASS(UHalfLoadLODObject, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CodeLODPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHalfLoadLODObject)


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHalfLoadLODObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHalfLoadLODObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHalfLoadLODObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHalfLoadLODObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHalfLoadLODObject(UHalfLoadLODObject&&); \
	NO_API UHalfLoadLODObject(const UHalfLoadLODObject&); \
public:


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHalfLoadLODObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHalfLoadLODObject(UHalfLoadLODObject&&); \
	NO_API UHalfLoadLODObject(const UHalfLoadLODObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHalfLoadLODObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHalfLoadLODObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHalfLoadLODObject)


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_PRIVATE_PROPERTY_OFFSET
#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_138_PROLOG \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_EVENT_PARMS


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_PRIVATE_PROPERTY_OFFSET \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_SPARSE_DATA \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_RPC_WRAPPERS \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_CALLBACK_WRAPPERS \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_INCLASS \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_PRIVATE_PROPERTY_OFFSET \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_SPARSE_DATA \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_CALLBACK_WRAPPERS \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_INCLASS_NO_PURE_DECLS \
	CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODELODPLUGIN_API UClass* StaticClass<class UHalfLoadLODObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CodeLODPlugin_Plugins_CodeLODPlugin_Source_CodeLODPlugin_Public_HalfLoadLODObject_h


#define FOREACH_ENUM_ELOADSTATUS(op) \
	op(ELoadStatus::Load) \
	op(ELoadStatus::HalfLoad) \
	op(ELoadStatus::Unload) 

enum class ELoadStatus : uint8;
template<> CODELODPLUGIN_API UEnum* StaticEnum<ELoadStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
