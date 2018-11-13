// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGravityInfo;
struct FVector;
class APlanetActor;
class UPrimitiveComponent;
#ifdef CUSTOMGRAVITYPLUGIN_CustomGravityComponent_generated_h
#error "CustomGravityComponent.generated.h already included, missing '#pragma once' in CustomGravityComponent.h"
#endif
#define CUSTOMGRAVITYPLUGIN_CustomGravityComponent_generated_h

#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentGravityInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGravityInfo*)Z_Param__Result=P_THIS->GetCurrentGravityInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentGravityPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentGravityPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentGravityDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentGravityDirection(); \
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
	DECLARE_FUNCTION(execGetUpdatedComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetUpdatedComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpdatedComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewUpdatedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpdatedComponent(Z_Param_NewUpdatedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCurrentPlanet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCurrentPlanet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentPlanet) \
	{ \
		P_GET_OBJECT(APlanetActor,Z_Param_NewPlanet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentPlanet(Z_Param_NewPlanet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityType) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewGravityType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityType(EGravityType::Type(Z_Param_NewGravityType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewGravityScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityScale(Z_Param_NewGravityScale); \
		P_NATIVE_END; \
	}


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentGravityInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGravityInfo*)Z_Param__Result=P_THIS->GetCurrentGravityInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentGravityPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentGravityPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentGravityDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentGravityDirection(); \
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
	DECLARE_FUNCTION(execGetUpdatedComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetUpdatedComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpdatedComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewUpdatedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpdatedComponent(Z_Param_NewUpdatedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCurrentPlanet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCurrentPlanet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentPlanet) \
	{ \
		P_GET_OBJECT(APlanetActor,Z_Param_NewPlanet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentPlanet(Z_Param_NewPlanet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityType) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewGravityType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityType(EGravityType::Type(Z_Param_NewGravityType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewGravityScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityScale(Z_Param_NewGravityScale); \
		P_NATIVE_END; \
	}


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomGravityComponent(); \
	friend struct Z_Construct_UClass_UCustomGravityComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomGravityComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomGravityComponent)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCustomGravityComponent(); \
	friend struct Z_Construct_UClass_UCustomGravityComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomGravityComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomGravityComponent)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomGravityComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomGravityComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGravityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGravityComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGravityComponent(UCustomGravityComponent&&); \
	NO_API UCustomGravityComponent(const UCustomGravityComponent&); \
public:


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGravityComponent(UCustomGravityComponent&&); \
	NO_API UCustomGravityComponent(const UCustomGravityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGravityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGravityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomGravityComponent)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GravityScale() { return STRUCT_OFFSET(UCustomGravityComponent, GravityScale); } \
	FORCEINLINE static uint32 __PPO__CustomGravityInfo() { return STRUCT_OFFSET(UCustomGravityComponent, CustomGravityInfo); } \
	FORCEINLINE static uint32 __PPO__GravityType() { return STRUCT_OFFSET(UCustomGravityComponent, GravityType); } \
	FORCEINLINE static uint32 __PPO__PlanetActor() { return STRUCT_OFFSET(UCustomGravityComponent, PlanetActor); }


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_12_PROLOG
#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_RPC_WRAPPERS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_INCLASS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_INCLASS_NO_PURE_DECLS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
