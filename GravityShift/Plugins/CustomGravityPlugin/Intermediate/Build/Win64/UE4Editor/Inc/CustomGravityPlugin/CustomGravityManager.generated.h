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
#ifdef CUSTOMGRAVITYPLUGIN_CustomGravityManager_generated_h
#error "CustomGravityManager.generated.h already included, missing '#pragma once' in CustomGravityManager.h"
#endif
#define CUSTOMGRAVITYPLUGIN_CustomGravityManager_generated_h

#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGravityInfo_Statics; \
	static class UScriptStruct* StaticStruct();


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_ForceModeToString) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InForceMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCustomGravityManager::Conv_ForceModeToString(EForceMode::Type(Z_Param_InForceMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_GravityTypeToString) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InGravityType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCustomGravityManager::Conv_GravityTypeToString(EGravityType::Type(Z_Param_InGravityType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_GravityInfoToString) \
	{ \
		P_GET_STRUCT(FGravityInfo,Z_Param_InGravityInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCustomGravityManager::Conv_GravityInfoToString(Z_Param_InGravityInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalCustomGravityInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGravityInfo*)Z_Param__Result=UCustomGravityManager::GetGlobalCustomGravityInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalCustomGravityForceMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EForceMode::Type>*)Z_Param__Result=UCustomGravityManager::GetGlobalCustomGravityForceMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalCustomGravityDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UCustomGravityManager::GetGlobalCustomGravityDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalCustomGravityPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCustomGravityManager::GetGlobalCustomGravityPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalCustomGravityInfo) \
	{ \
		P_GET_STRUCT_REF(FGravityInfo,Z_Param_Out_NewGravityInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomGravityManager::SetGlobalCustomGravityInfo(Z_Param_Out_NewGravityInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalCustomGravityForceMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewForceMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomGravityManager::SetGlobalCustomGravityForceMode(EForceMode::Type(Z_Param_NewForceMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalCustomGravityDirection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomGravityManager::SetGlobalCustomGravityDirection(Z_Param_Out_NewGravityDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalCustomGravityPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewGravityPower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomGravityManager::SetGlobalCustomGravityPower(Z_Param_NewGravityPower); \
		P_NATIVE_END; \
	}


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_ForceModeToString) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InForceMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCustomGravityManager::Conv_ForceModeToString(EForceMode::Type(Z_Param_InForceMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_GravityTypeToString) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InGravityType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCustomGravityManager::Conv_GravityTypeToString(EGravityType::Type(Z_Param_InGravityType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_GravityInfoToString) \
	{ \
		P_GET_STRUCT(FGravityInfo,Z_Param_InGravityInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCustomGravityManager::Conv_GravityInfoToString(Z_Param_InGravityInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalCustomGravityInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGravityInfo*)Z_Param__Result=UCustomGravityManager::GetGlobalCustomGravityInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalCustomGravityForceMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EForceMode::Type>*)Z_Param__Result=UCustomGravityManager::GetGlobalCustomGravityForceMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalCustomGravityDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UCustomGravityManager::GetGlobalCustomGravityDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalCustomGravityPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UCustomGravityManager::GetGlobalCustomGravityPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalCustomGravityInfo) \
	{ \
		P_GET_STRUCT_REF(FGravityInfo,Z_Param_Out_NewGravityInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomGravityManager::SetGlobalCustomGravityInfo(Z_Param_Out_NewGravityInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalCustomGravityForceMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewForceMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomGravityManager::SetGlobalCustomGravityForceMode(EForceMode::Type(Z_Param_NewForceMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalCustomGravityDirection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomGravityManager::SetGlobalCustomGravityDirection(Z_Param_Out_NewGravityDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalCustomGravityPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewGravityPower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomGravityManager::SetGlobalCustomGravityPower(Z_Param_NewGravityPower); \
		P_NATIVE_END; \
	}


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomGravityManager(); \
	friend struct Z_Construct_UClass_UCustomGravityManager_Statics; \
public: \
	DECLARE_CLASS(UCustomGravityManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomGravityManager)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUCustomGravityManager(); \
	friend struct Z_Construct_UClass_UCustomGravityManager_Statics; \
public: \
	DECLARE_CLASS(UCustomGravityManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomGravityManager)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomGravityManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomGravityManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGravityManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGravityManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGravityManager(UCustomGravityManager&&); \
	NO_API UCustomGravityManager(const UCustomGravityManager&); \
public:


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGravityManager(UCustomGravityManager&&); \
	NO_API UCustomGravityManager(const UCustomGravityManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGravityManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGravityManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomGravityManager)


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_PRIVATE_PROPERTY_OFFSET
#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_74_PROLOG
#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_PRIVATE_PROPERTY_OFFSET \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_RPC_WRAPPERS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_INCLASS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_PRIVATE_PROPERTY_OFFSET \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_INCLASS_NO_PURE_DECLS \
	GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GravityShift_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h


#define FOREACH_ENUM_EFORCEMODE(op) \
	op(EForceMode::EFM_Acceleration) \
	op(EForceMode::EFM_Force) 
#define FOREACH_ENUM_EGRAVITYTYPE(op) \
	op(EGravityType::EGT_Default) \
	op(EGravityType::EGT_Point) \
	op(EGravityType::EGT_Custom) \
	op(EGravityType::EGT_GlobalCustom) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
