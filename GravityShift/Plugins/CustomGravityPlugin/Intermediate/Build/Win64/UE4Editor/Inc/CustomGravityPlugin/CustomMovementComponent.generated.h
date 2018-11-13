// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class APlanetActor;
class ACustomPawn;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CUSTOMGRAVITYPLUGIN_CustomMovementComponent_generated_h
#error "CustomMovementComponent.generated.h already included, missing '#pragma once' in CustomMovementComponent.h"
#endif
#define CUSTOMGRAVITYPLUGIN_CustomMovementComponent_generated_h

#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrientationSettings_Statics; \
	CUSTOMGRAVITYPLUGIN_API static class UScriptStruct* StaticStruct();


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrientationInfo_Statics; \
	CUSTOMGRAVITYPLUGIN_API static class UScriptStruct* StaticStruct();


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInAirTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInAirTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWalkSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentWalkSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFallingSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFallingSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetMovementVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFallingVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetFallingVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPlanet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlanetActor**)Z_Param__Result=P_THIS->GetCurrentPlanet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravityDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravityPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGravityPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPlanet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPlanet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentPlanet) \
	{ \
		P_GET_OBJECT(APlanetActor,Z_Param_NewPlanetActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentPlanet(Z_Param_NewPlanetActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetComponentOwner) \
	{ \
		P_GET_OBJECT(ACustomPawn,Z_Param_Owner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetComponentOwner(Z_Param_Owner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestGavityImmediateUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestGavityImmediateUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleHited) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_UBOOL(Z_Param_bSelfMoved); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_STRUCT(FVector,Z_Param_HitNormal); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CapsuleHited(Z_Param_MyComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_bSelfMoved,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInAirTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInAirTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWalkSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentWalkSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFallingSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFallingSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetMovementVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFallingVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetFallingVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPlanet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlanetActor**)Z_Param__Result=P_THIS->GetCurrentPlanet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravityDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravityPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGravityPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPlanet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPlanet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentPlanet) \
	{ \
		P_GET_OBJECT(APlanetActor,Z_Param_NewPlanetActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentPlanet(Z_Param_NewPlanetActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetComponentOwner) \
	{ \
		P_GET_OBJECT(ACustomPawn,Z_Param_Owner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetComponentOwner(Z_Param_Owner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestGavityImmediateUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestGavityImmediateUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleHited) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_UBOOL(Z_Param_bSelfMoved); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_STRUCT(FVector,Z_Param_HitNormal); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CapsuleHited(Z_Param_MyComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_bSelfMoved,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomMovementComponent(); \
	friend struct Z_Construct_UClass_UCustomMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomMovementComponent, UFloatingPawnMovement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomMovementComponent)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_INCLASS \
private: \
	static void StaticRegisterNativesUCustomMovementComponent(); \
	friend struct Z_Construct_UClass_UCustomMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomMovementComponent, UFloatingPawnMovement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomMovementComponent)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomMovementComponent(UCustomMovementComponent&&); \
	NO_API UCustomMovementComponent(const UCustomMovementComponent&); \
public:


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomMovementComponent(UCustomMovementComponent&&); \
	NO_API UCustomMovementComponent(const UCustomMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomMovementComponent)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_PRIVATE_PROPERTY_OFFSET
#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_107_PROLOG
#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_PRIVATE_PROPERTY_OFFSET \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_RPC_WRAPPERS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_INCLASS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_PRIVATE_PROPERTY_OFFSET \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_INCLASS_NO_PURE_DECLS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h


#define FOREACH_ENUM_ETRACESHAPE(op) \
	op(ETraceShape::ETS_Sphere) \
	op(ETraceShape::ETS_Box) \
	op(ETraceShape::ETS_Line) 
#define FOREACH_ENUM_EVERTICALORIENTATION(op) \
	op(EVerticalOrientation::EVO_GravityDirection) \
	op(EVerticalOrientation::EVO_SurfaceNormal) 
#define FOREACH_ENUM_EORIENTATIONINTERPOLATIONMODE(op) \
	op(EOrientationInterpolationMode::OIM_RInterpTo) \
	op(EOrientationInterpolationMode::OIM_Slerp) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
