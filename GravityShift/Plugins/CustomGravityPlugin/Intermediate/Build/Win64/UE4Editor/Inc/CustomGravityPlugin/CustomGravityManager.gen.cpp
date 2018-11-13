// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Private/CustomGravityPluginPrivatePCH.h"
#include "CustomGravityPlugin/Public/Objects/CustomGravityManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomGravityManager() {}
// Cross Module References
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_EForceMode();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_EGravityType();
	CUSTOMGRAVITYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGravityInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_UCustomGravityManager_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_UCustomGravityManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	CUSTOMGRAVITYPLUGIN_API UFunction* Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString();
	CUSTOMGRAVITYPLUGIN_API UFunction* Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString();
	CUSTOMGRAVITYPLUGIN_API UFunction* Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString();
	CUSTOMGRAVITYPLUGIN_API UFunction* Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection();
	CUSTOMGRAVITYPLUGIN_API UFunction* Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode();
	CUSTOMGRAVITYPLUGIN_API UFunction* Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo();
	CUSTOMGRAVITYPLUGIN_API UFunction* Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower();
	CUSTOMGRAVITYPLUGIN_API UFunction* Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection();
	CUSTOMGRAVITYPLUGIN_API UFunction* Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode();
	CUSTOMGRAVITYPLUGIN_API UFunction* Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo();
	CUSTOMGRAVITYPLUGIN_API UFunction* Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower();
// End Cross Module References
	static UEnum* EForceMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CustomGravityPlugin_EForceMode, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("EForceMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EForceMode(EForceMode_StaticEnum, TEXT("/Script/CustomGravityPlugin"), TEXT("EForceMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CustomGravityPlugin_EForceMode_CRC() { return 2298388090U; }
	UEnum* Z_Construct_UEnum_CustomGravityPlugin_EForceMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CustomGravityPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EForceMode"), 0, Get_Z_Construct_UEnum_CustomGravityPlugin_EForceMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EForceMode::EFM_Acceleration", (int64)EForceMode::EFM_Acceleration },
				{ "EForceMode::EFM_Force", (int64)EForceMode::EFM_Force },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EFM_Acceleration.DisplayName", "Acceleration" },
				{ "EFM_Force.DisplayName", "Force" },
				{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
				{ "ToolTip", "Type of force applied to a body using Custom Gravity." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EForceMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EForceMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGravityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CustomGravityPlugin_EGravityType, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("EGravityType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGravityType(EGravityType_StaticEnum, TEXT("/Script/CustomGravityPlugin"), TEXT("EGravityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CustomGravityPlugin_EGravityType_CRC() { return 3427646094U; }
	UEnum* Z_Construct_UEnum_CustomGravityPlugin_EGravityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CustomGravityPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGravityType"), 0, Get_Z_Construct_UEnum_CustomGravityPlugin_EGravityType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGravityType::EGT_Default", (int64)EGravityType::EGT_Default },
				{ "EGravityType::EGT_Point", (int64)EGravityType::EGT_Point },
				{ "EGravityType::EGT_Custom", (int64)EGravityType::EGT_Custom },
				{ "EGravityType::EGT_GlobalCustom", (int64)EGravityType::EGT_GlobalCustom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EGT_Custom.DisplayName", "Custom Gravity" },
				{ "EGT_Default.DisplayName", "Default Gravity" },
				{ "EGT_GlobalCustom.DisplayName", "Global Custom Gravity" },
				{ "EGT_Point.DisplayName", "Point Gravity" },
				{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
				{ "ToolTip", "Enumerates available custom gravity types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGravityType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EGravityType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGravityInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CUSTOMGRAVITYPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FGravityInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGravityInfo, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("GravityInfo"), sizeof(FGravityInfo), Get_Z_Construct_UScriptStruct_FGravityInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGravityInfo(FGravityInfo::StaticStruct, TEXT("/Script/CustomGravityPlugin"), TEXT("GravityInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CustomGravityPlugin_StaticRegisterNativesFGravityInfo
{
	FScriptStruct_CustomGravityPlugin_StaticRegisterNativesFGravityInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GravityInfo")),new UScriptStruct::TCppStructOps<FGravityInfo>);
	}
} ScriptStruct_CustomGravityPlugin_StaticRegisterNativesFGravityInfo;
	struct Z_Construct_UScriptStruct_FGravityInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceSubStepping_MetaData[];
#endif
		static void NewProp_bForceSubStepping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceSubStepping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ForceMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GravityDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGravityInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Struct to hold information about the \"Gravity Type\" ." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGravityInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGravityInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_bForceSubStepping_MetaData[] = {
		{ "Category", "GravityInfo" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_bForceSubStepping_SetBit(void* Obj)
	{
		((FGravityInfo*)Obj)->bForceSubStepping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_bForceSubStepping = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceSubStepping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGravityInfo), &Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_bForceSubStepping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_bForceSubStepping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_bForceSubStepping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_ForceMode_MetaData[] = {
		{ "Category", "GravityInfo" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_ForceMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ForceMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGravityInfo, ForceMode), Z_Construct_UEnum_CustomGravityPlugin_EForceMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_ForceMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_ForceMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityDirection_MetaData[] = {
		{ "Category", "GravityInfo" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "GravityDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGravityInfo, GravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityDirection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityPower_MetaData[] = {
		{ "Category", "GravityInfo" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityPower = { UE4CodeGen_Private::EPropertyClass::Float, "GravityPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGravityInfo, GravityPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityPower_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGravityInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_bForceSubStepping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_ForceMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityPower,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGravityInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
		nullptr,
		&NewStructOps,
		"GravityInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FGravityInfo),
		alignof(FGravityInfo),
		Z_Construct_UScriptStruct_FGravityInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGravityInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGravityInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGravityInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGravityInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGravityInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CustomGravityPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GravityInfo"), sizeof(FGravityInfo), Get_Z_Construct_UScriptStruct_FGravityInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGravityInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGravityInfo_CRC() { return 3449122405U; }
	void UCustomGravityManager::StaticRegisterNativesUCustomGravityManager()
	{
		UClass* Class = UCustomGravityManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_ForceModeToString", &UCustomGravityManager::execConv_ForceModeToString },
			{ "Conv_GravityInfoToString", &UCustomGravityManager::execConv_GravityInfoToString },
			{ "Conv_GravityTypeToString", &UCustomGravityManager::execConv_GravityTypeToString },
			{ "GetGlobalCustomGravityDirection", &UCustomGravityManager::execGetGlobalCustomGravityDirection },
			{ "GetGlobalCustomGravityForceMode", &UCustomGravityManager::execGetGlobalCustomGravityForceMode },
			{ "GetGlobalCustomGravityInfo", &UCustomGravityManager::execGetGlobalCustomGravityInfo },
			{ "GetGlobalCustomGravityPower", &UCustomGravityManager::execGetGlobalCustomGravityPower },
			{ "SetGlobalCustomGravityDirection", &UCustomGravityManager::execSetGlobalCustomGravityDirection },
			{ "SetGlobalCustomGravityForceMode", &UCustomGravityManager::execSetGlobalCustomGravityForceMode },
			{ "SetGlobalCustomGravityInfo", &UCustomGravityManager::execSetGlobalCustomGravityInfo },
			{ "SetGlobalCustomGravityPower", &UCustomGravityManager::execSetGlobalCustomGravityPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics
	{
		struct CustomGravityManager_eventConv_ForceModeToString_Parms
		{
			TEnumAsByte<EForceMode::Type> InForceMode;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InForceMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CustomGravityManager_eventConv_ForceModeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::NewProp_InForceMode = { UE4CodeGen_Private::EPropertyClass::Byte, "InForceMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CustomGravityManager_eventConv_ForceModeToString_Parms, InForceMode), Z_Construct_UEnum_CustomGravityPlugin_EForceMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::NewProp_InForceMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (ForceMode)" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Converts a ForceMode enum value to a string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, "Conv_ForceModeToString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CustomGravityManager_eventConv_ForceModeToString_Parms), Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics
	{
		struct CustomGravityManager_eventConv_GravityInfoToString_Parms
		{
			FGravityInfo InGravityInfo;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InGravityInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CustomGravityManager_eventConv_GravityInfoToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::NewProp_InGravityInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "InGravityInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CustomGravityManager_eventConv_GravityInfoToString_Parms, InGravityInfo), Z_Construct_UScriptStruct_FGravityInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::NewProp_InGravityInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (GravityInfo)" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Converts a GravityInfo struct value to a string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, "Conv_GravityInfoToString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CustomGravityManager_eventConv_GravityInfoToString_Parms), Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics
	{
		struct CustomGravityManager_eventConv_GravityTypeToString_Parms
		{
			TEnumAsByte<EGravityType::Type> InGravityType;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InGravityType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CustomGravityManager_eventConv_GravityTypeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::NewProp_InGravityType = { UE4CodeGen_Private::EPropertyClass::Byte, "InGravityType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CustomGravityManager_eventConv_GravityTypeToString_Parms, InGravityType), Z_Construct_UEnum_CustomGravityPlugin_EGravityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::NewProp_InGravityType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (GravityType)" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Converts a GravityType enum value to a string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, "Conv_GravityTypeToString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CustomGravityManager_eventConv_GravityTypeToString_Parms), Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics
	{
		struct CustomGravityManager_eventGetGlobalCustomGravityDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CustomGravityManager_eventGetGlobalCustomGravityDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "DisplayName", "Global Custom Gravity Direction" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "returns Global Custom Gravity direction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, "GetGlobalCustomGravityDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(CustomGravityManager_eventGetGlobalCustomGravityDirection_Parms), Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics
	{
		struct CustomGravityManager_eventGetGlobalCustomGravityForceMode_Parms
		{
			TEnumAsByte<EForceMode::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CustomGravityManager_eventGetGlobalCustomGravityForceMode_Parms, ReturnValue), Z_Construct_UEnum_CustomGravityPlugin_EForceMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "DisplayName", "Global Custom Gravity ForceMode" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "returns Global Custom Gravity force mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, "GetGlobalCustomGravityForceMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CustomGravityManager_eventGetGlobalCustomGravityForceMode_Parms), Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics
	{
		struct CustomGravityManager_eventGetGlobalCustomGravityInfo_Parms
		{
			FGravityInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CustomGravityManager_eventGetGlobalCustomGravityInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FGravityInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "DisplayName", "Global Custom Gravity Info" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "returns Global Custom Gravity information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, "GetGlobalCustomGravityInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CustomGravityManager_eventGetGlobalCustomGravityInfo_Parms), Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics
	{
		struct CustomGravityManager_eventGetGlobalCustomGravityPower_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CustomGravityManager_eventGetGlobalCustomGravityPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "DisplayName", "Global Custom Gravity Power" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "returns Global Custom Gravity power" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, "GetGlobalCustomGravityPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(CustomGravityManager_eventGetGlobalCustomGravityPower_Parms), Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics
	{
		struct CustomGravityManager_eventSetGlobalCustomGravityDirection_Parms
		{
			FVector NewGravityDirection;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::NewProp_NewGravityDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::NewProp_NewGravityDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "NewGravityDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CustomGravityManager_eventSetGlobalCustomGravityDirection_Parms, NewGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::NewProp_NewGravityDirection_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::NewProp_NewGravityDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::NewProp_NewGravityDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "DisplayName", "Set Global Custom Gravity Direction" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Change Global Custom Gravity direction.\nThis change will affect all physics object using a CustomGravityComponent with GravityType set to \"Global Custom Gravity\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, "SetGlobalCustomGravityDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(CustomGravityManager_eventSetGlobalCustomGravityDirection_Parms), Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics
	{
		struct CustomGravityManager_eventSetGlobalCustomGravityForceMode_Parms
		{
			TEnumAsByte<EForceMode::Type> NewForceMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewForceMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::NewProp_NewForceMode = { UE4CodeGen_Private::EPropertyClass::Byte, "NewForceMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CustomGravityManager_eventSetGlobalCustomGravityForceMode_Parms, NewForceMode), Z_Construct_UEnum_CustomGravityPlugin_EForceMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::NewProp_NewForceMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "DisplayName", "Set Global Custom Gravity Force Mode" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Change Global Custom Gravity force mode.\n     * This change will affect all physics object using a CustomGravityComponent with GravityType set to \"Global Custom Gravity\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, "SetGlobalCustomGravityForceMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CustomGravityManager_eventSetGlobalCustomGravityForceMode_Parms), Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics
	{
		struct CustomGravityManager_eventSetGlobalCustomGravityInfo_Parms
		{
			FGravityInfo NewGravityInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::NewProp_NewGravityInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::NewProp_NewGravityInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "NewGravityInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CustomGravityManager_eventSetGlobalCustomGravityInfo_Parms, NewGravityInfo), Z_Construct_UScriptStruct_FGravityInfo, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::NewProp_NewGravityInfo_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::NewProp_NewGravityInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::NewProp_NewGravityInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "DisplayName", "Set Global Custom Gravity Info" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Change Global Custom Gravity information.\nThis change will affect all physics object using a CustomGravityComponent with GravityType set to \"Global Custom Gravity\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, "SetGlobalCustomGravityInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(CustomGravityManager_eventSetGlobalCustomGravityInfo_Parms), Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics
	{
		struct CustomGravityManager_eventSetGlobalCustomGravityPower_Parms
		{
			float NewGravityPower;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewGravityPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::NewProp_NewGravityPower = { UE4CodeGen_Private::EPropertyClass::Float, "NewGravityPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CustomGravityManager_eventSetGlobalCustomGravityPower_Parms, NewGravityPower), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::NewProp_NewGravityPower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "DisplayName", "Set Global Custom Gravity Power" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Change Global Custom Gravity power.\nThis change will affect all physics object using a CustomGravityComponent with GravityType set to \"Global Custom Gravity\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, "SetGlobalCustomGravityPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CustomGravityManager_eventSetGlobalCustomGravityPower_Parms), Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomGravityManager_NoRegister()
	{
		return UCustomGravityManager::StaticClass();
	}
	struct Z_Construct_UClass_UCustomGravityManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomGravityManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomGravityManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString, "Conv_ForceModeToString" }, // 434600289
		{ &Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString, "Conv_GravityInfoToString" }, // 3118281579
		{ &Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString, "Conv_GravityTypeToString" }, // 1253698256
		{ &Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection, "GetGlobalCustomGravityDirection" }, // 753191045
		{ &Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode, "GetGlobalCustomGravityForceMode" }, // 1035255150
		{ &Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo, "GetGlobalCustomGravityInfo" }, // 3820772541
		{ &Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower, "GetGlobalCustomGravityPower" }, // 3855521734
		{ &Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection, "SetGlobalCustomGravityDirection" }, // 2952489245
		{ &Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode, "SetGlobalCustomGravityForceMode" }, // 4067025221
		{ &Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo, "SetGlobalCustomGravityInfo" }, // 3310326323
		{ &Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower, "SetGlobalCustomGravityPower" }, // 2979118616
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGravityManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Objects/CustomGravityManager.h" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomGravityManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomGravityManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomGravityManager_Statics::ClassParams = {
		&UCustomGravityManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCustomGravityManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCustomGravityManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomGravityManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomGravityManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomGravityManager, 3369356540);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomGravityManager(Z_Construct_UClass_UCustomGravityManager, &UCustomGravityManager::StaticClass, TEXT("/Script/CustomGravityPlugin"), TEXT("UCustomGravityManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomGravityManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
