// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICPLATFORM_BasicPlatformCharacter_generated_h
#error "BasicPlatformCharacter.generated.h already included, missing '#pragma once' in BasicPlatformCharacter.h"
#endif
#define BASICPLATFORM_BasicPlatformCharacter_generated_h

#define BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_SPARSE_DATA
#define BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_RPC_WRAPPERS
#define BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicPlatformCharacter(); \
	friend struct Z_Construct_UClass_ABasicPlatformCharacter_Statics; \
public: \
	DECLARE_CLASS(ABasicPlatformCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasicPlatform"), NO_API) \
	DECLARE_SERIALIZER(ABasicPlatformCharacter)


#define BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABasicPlatformCharacter(); \
	friend struct Z_Construct_UClass_ABasicPlatformCharacter_Statics; \
public: \
	DECLARE_CLASS(ABasicPlatformCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasicPlatform"), NO_API) \
	DECLARE_SERIALIZER(ABasicPlatformCharacter)


#define BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicPlatformCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicPlatformCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicPlatformCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicPlatformCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicPlatformCharacter(ABasicPlatformCharacter&&); \
	NO_API ABasicPlatformCharacter(const ABasicPlatformCharacter&); \
public:


#define BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicPlatformCharacter(ABasicPlatformCharacter&&); \
	NO_API ABasicPlatformCharacter(const ABasicPlatformCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicPlatformCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicPlatformCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicPlatformCharacter)


#define BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABasicPlatformCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABasicPlatformCharacter, FollowCamera); }


#define BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_9_PROLOG
#define BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_SPARSE_DATA \
	BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_RPC_WRAPPERS \
	BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_INCLASS \
	BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_SPARSE_DATA \
	BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_INCLASS_NO_PURE_DECLS \
	BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICPLATFORM_API UClass* StaticClass<class ABasicPlatformCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BasicPlatform_Source_BasicPlatform_BasicPlatformCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
