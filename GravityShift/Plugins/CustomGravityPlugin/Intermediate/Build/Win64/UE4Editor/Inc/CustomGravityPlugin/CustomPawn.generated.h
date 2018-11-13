// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef CUSTOMGRAVITYPLUGIN_CustomPawn_generated_h
#error "CustomPawn.generated.h already included, missing '#pragma once' in CustomPawn.h"
#endif
#define CUSTOMGRAVITYPLUGIN_CustomPawn_generated_h

#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentRightDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentRightDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentForwardDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentForwardDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableDebugging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableDebugging(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableDebugging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableDebugging(); \
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
	DECLARE_FUNCTION(execAddRightMovementInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRightMovementInput(Z_Param_ScaleValue,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForwardMovementInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddForwardMovementInput(Z_Param_ScaleValue,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Sprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Jump(); \
		P_NATIVE_END; \
	}


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentRightDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentRightDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentForwardDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentForwardDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableDebugging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableDebugging(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableDebugging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableDebugging(); \
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
	DECLARE_FUNCTION(execAddRightMovementInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRightMovementInput(Z_Param_ScaleValue,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForwardMovementInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScaleValue); \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddForwardMovementInput(Z_Param_ScaleValue,Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Sprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Jump(); \
		P_NATIVE_END; \
	}


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomPawn(); \
	friend struct Z_Construct_UClass_ACustomPawn_Statics; \
public: \
	DECLARE_CLASS(ACustomPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(ACustomPawn)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_INCLASS \
private: \
	static void StaticRegisterNativesACustomPawn(); \
	friend struct Z_Construct_UClass_ACustomPawn_Statics; \
public: \
	DECLARE_CLASS(ACustomPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(ACustomPawn)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomPawn(ACustomPawn&&); \
	NO_API ACustomPawn(const ACustomPawn&); \
public:


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomPawn(ACustomPawn&&); \
	NO_API ACustomPawn(const ACustomPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomPawn)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapsuleComponent() { return STRUCT_OFFSET(ACustomPawn, CapsuleComponent); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ACustomPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ACustomPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__MovementComponent() { return STRUCT_OFFSET(ACustomPawn, MovementComponent); } \
	FORCEINLINE static uint32 __PPO__PawnMesh() { return STRUCT_OFFSET(ACustomPawn, PawnMesh); } \
	FORCEINLINE static uint32 __PPO__GizmoRootComponent() { return STRUCT_OFFSET(ACustomPawn, GizmoRootComponent); } \
	FORCEINLINE static uint32 __PPO__ForwardArrowComponent() { return STRUCT_OFFSET(ACustomPawn, ForwardArrowComponent); } \
	FORCEINLINE static uint32 __PPO__RightArrowComponent() { return STRUCT_OFFSET(ACustomPawn, RightArrowComponent); } \
	FORCEINLINE static uint32 __PPO__UpArrowComponent() { return STRUCT_OFFSET(ACustomPawn, UpArrowComponent); }


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_8_PROLOG
#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_RPC_WRAPPERS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_INCLASS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_INCLASS_NO_PURE_DECLS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
