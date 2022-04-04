// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RACCOONGAME_NPCBase_generated_h
#error "NPCBase.generated.h already included, missing '#pragma once' in NPCBase.h"
#endif
#define RACCOONGAME_NPCBase_generated_h

#define RaccoonGame_Source_RaccoonGame_NPCBase_h_12_SPARSE_DATA
#define RaccoonGame_Source_RaccoonGame_NPCBase_h_12_RPC_WRAPPERS
#define RaccoonGame_Source_RaccoonGame_NPCBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define RaccoonGame_Source_RaccoonGame_NPCBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCBase(); \
	friend struct Z_Construct_UClass_ANPCBase_Statics; \
public: \
	DECLARE_CLASS(ANPCBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaccoonGame"), NO_API) \
	DECLARE_SERIALIZER(ANPCBase)


#define RaccoonGame_Source_RaccoonGame_NPCBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANPCBase(); \
	friend struct Z_Construct_UClass_ANPCBase_Statics; \
public: \
	DECLARE_CLASS(ANPCBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaccoonGame"), NO_API) \
	DECLARE_SERIALIZER(ANPCBase)


#define RaccoonGame_Source_RaccoonGame_NPCBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPCBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPCBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCBase(ANPCBase&&); \
	NO_API ANPCBase(const ANPCBase&); \
public:


#define RaccoonGame_Source_RaccoonGame_NPCBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCBase(ANPCBase&&); \
	NO_API ANPCBase(const ANPCBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPCBase)


#define RaccoonGame_Source_RaccoonGame_NPCBase_h_12_PRIVATE_PROPERTY_OFFSET
#define RaccoonGame_Source_RaccoonGame_NPCBase_h_9_PROLOG
#define RaccoonGame_Source_RaccoonGame_NPCBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaccoonGame_Source_RaccoonGame_NPCBase_h_12_PRIVATE_PROPERTY_OFFSET \
	RaccoonGame_Source_RaccoonGame_NPCBase_h_12_SPARSE_DATA \
	RaccoonGame_Source_RaccoonGame_NPCBase_h_12_RPC_WRAPPERS \
	RaccoonGame_Source_RaccoonGame_NPCBase_h_12_INCLASS \
	RaccoonGame_Source_RaccoonGame_NPCBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaccoonGame_Source_RaccoonGame_NPCBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaccoonGame_Source_RaccoonGame_NPCBase_h_12_PRIVATE_PROPERTY_OFFSET \
	RaccoonGame_Source_RaccoonGame_NPCBase_h_12_SPARSE_DATA \
	RaccoonGame_Source_RaccoonGame_NPCBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RaccoonGame_Source_RaccoonGame_NPCBase_h_12_INCLASS_NO_PURE_DECLS \
	RaccoonGame_Source_RaccoonGame_NPCBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RACCOONGAME_API UClass* StaticClass<class ANPCBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RaccoonGame_Source_RaccoonGame_NPCBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
