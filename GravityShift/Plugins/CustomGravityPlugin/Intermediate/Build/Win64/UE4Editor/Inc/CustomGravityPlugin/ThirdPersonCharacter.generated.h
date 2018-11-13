// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMGRAVITYPLUGIN_ThirdPersonCharacter_generated_h
#error "ThirdPersonCharacter.generated.h already included, missing '#pragma once' in ThirdPersonCharacter.h"
#endif
#define CUSTOMGRAVITYPLUGIN_ThirdPersonCharacter_generated_h

#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_RPC_WRAPPERS
#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPersonCharacter(); \
	friend struct Z_Construct_UClass_AThirdPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonCharacter, ACustomPawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonCharacter)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAThirdPersonCharacter(); \
	friend struct Z_Construct_UClass_AThirdPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonCharacter, ACustomPawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonCharacter)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThirdPersonCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThirdPersonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonCharacter(AThirdPersonCharacter&&); \
	NO_API AThirdPersonCharacter(const AThirdPersonCharacter&); \
public:


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonCharacter(AThirdPersonCharacter&&); \
	NO_API AThirdPersonCharacter(const AThirdPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThirdPersonCharacter)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_PRIVATE_PROPERTY_OFFSET
#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_20_PROLOG
#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_RPC_WRAPPERS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_INCLASS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_INCLASS_NO_PURE_DECLS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h


#define FOREACH_ENUM_EMESHORIENTATION(op) \
	op(EMeshOrientation::EMO_Movement) \
	op(EMeshOrientation::EMO_Camera) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
