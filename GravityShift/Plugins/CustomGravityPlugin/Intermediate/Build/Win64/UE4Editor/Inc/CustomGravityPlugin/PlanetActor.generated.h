// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FGravityInfo;
#ifdef CUSTOMGRAVITYPLUGIN_PlanetActor_generated_h
#error "PlanetActor.generated.h already included, missing '#pragma once' in PlanetActor.h"
#endif
#define CUSTOMGRAVITYPLUGIN_PlanetActor_generated_h

#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGravityinfo) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGravityInfo*)Z_Param__Result=P_THIS->GetGravityinfo(Z_Param_Out_TargetLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravityDirection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection(Z_Param_Out_TargetLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForceMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_newForceMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForceMode(EForceMode::Type(Z_Param_newForceMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewGravity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityPower(Z_Param_NewGravity); \
		P_NATIVE_END; \
	}


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGravityinfo) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGravityInfo*)Z_Param__Result=P_THIS->GetGravityinfo(Z_Param_Out_TargetLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravityDirection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection(Z_Param_Out_TargetLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForceMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_newForceMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForceMode(EForceMode::Type(Z_Param_newForceMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewGravity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityPower(Z_Param_NewGravity); \
		P_NATIVE_END; \
	}


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlanetActor(); \
	friend struct Z_Construct_UClass_APlanetActor_Statics; \
public: \
	DECLARE_CLASS(APlanetActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(APlanetActor)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAPlanetActor(); \
	friend struct Z_Construct_UClass_APlanetActor_Statics; \
public: \
	DECLARE_CLASS(APlanetActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(APlanetActor)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlanetActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlanetActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlanetActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlanetActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlanetActor(APlanetActor&&); \
	NO_API APlanetActor(const APlanetActor&); \
public:


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlanetActor(APlanetActor&&); \
	NO_API APlanetActor(const APlanetActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlanetActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlanetActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlanetActor)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlanetRootComponent() { return STRUCT_OFFSET(APlanetActor, PlanetRootComponent); } \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(APlanetActor, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__SphereCollision() { return STRUCT_OFFSET(APlanetActor, SphereCollision); }


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_18_PROLOG
#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_PRIVATE_PROPERTY_OFFSET \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_RPC_WRAPPERS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_INCLASS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_PRIVATE_PROPERTY_OFFSET \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_INCLASS_NO_PURE_DECLS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h


#define FOREACH_ENUM_ECOLLISIONTYPE(op) \
	op(ECollisionType::ECol_Mesh) \
	op(ECollisionType::ECol_Sphere) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
