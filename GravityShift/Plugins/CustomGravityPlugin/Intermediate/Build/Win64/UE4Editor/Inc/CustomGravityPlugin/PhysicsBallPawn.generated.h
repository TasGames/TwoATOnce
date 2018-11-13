// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMGRAVITYPLUGIN_PhysicsBallPawn_generated_h
#error "PhysicsBallPawn.generated.h already included, missing '#pragma once' in PhysicsBallPawn.h"
#endif
#define CUSTOMGRAVITYPLUGIN_PhysicsBallPawn_generated_h

#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Jump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCameraYawInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UpdateRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCameraYawInput(Z_Param_UpdateRate,Z_Param_ScaleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCameraPitchInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UpdateRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCameraPitchInput(Z_Param_UpdateRate,Z_Param_ScaleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForwardTorque) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddForwardTorque(Z_Param_ScaleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRightTorque) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRightTorque(Z_Param_ScaleValue); \
		P_NATIVE_END; \
	}


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Jump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCameraYawInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UpdateRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCameraYawInput(Z_Param_UpdateRate,Z_Param_ScaleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCameraPitchInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UpdateRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCameraPitchInput(Z_Param_UpdateRate,Z_Param_ScaleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForwardTorque) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddForwardTorque(Z_Param_ScaleValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRightTorque) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRightTorque(Z_Param_ScaleValue); \
		P_NATIVE_END; \
	}


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhysicsBallPawn(); \
	friend struct Z_Construct_UClass_APhysicsBallPawn_Statics; \
public: \
	DECLARE_CLASS(APhysicsBallPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(APhysicsBallPawn)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAPhysicsBallPawn(); \
	friend struct Z_Construct_UClass_APhysicsBallPawn_Statics; \
public: \
	DECLARE_CLASS(APhysicsBallPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(APhysicsBallPawn)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhysicsBallPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsBallPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsBallPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsBallPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsBallPawn(APhysicsBallPawn&&); \
	NO_API APhysicsBallPawn(const APhysicsBallPawn&); \
public:


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsBallPawn(APhysicsBallPawn&&); \
	NO_API APhysicsBallPawn(const APhysicsBallPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsBallPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsBallPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhysicsBallPawn)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Ball() { return STRUCT_OFFSET(APhysicsBallPawn, Ball); } \
	FORCEINLINE static uint32 __PPO__SpringRoot() { return STRUCT_OFFSET(APhysicsBallPawn, SpringRoot); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(APhysicsBallPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(APhysicsBallPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__GravityComponent() { return STRUCT_OFFSET(APhysicsBallPawn, GravityComponent); }


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_7_PROLOG
#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_PRIVATE_PROPERTY_OFFSET \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_RPC_WRAPPERS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_INCLASS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_PRIVATE_PROPERTY_OFFSET \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_INCLASS_NO_PURE_DECLS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
