// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Private/CustomGravityPluginPrivatePCH.h"
#include "CustomGravityPlugin/Public/Actors/PlanetActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanetActor() {}
// Cross Module References
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_ECollisionType();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_APlanetActor_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_APlanetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	CUSTOMGRAVITYPLUGIN_API UFunction* Z_Construct_UFunction_APlanetActor_GetGravityDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CUSTOMGRAVITYPLUGIN_API UFunction* Z_Construct_UFunction_APlanetActor_GetGravityinfo();
	CUSTOMGRAVITYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGravityInfo();
	CUSTOMGRAVITYPLUGIN_API UFunction* Z_Construct_UFunction_APlanetActor_SetForceMode();
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_EForceMode();
	CUSTOMGRAVITYPLUGIN_API UFunction* Z_Construct_UFunction_APlanetActor_SetGravityPower();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* ECollisionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CustomGravityPlugin_ECollisionType, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("ECollisionType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECollisionType(ECollisionType_StaticEnum, TEXT("/Script/CustomGravityPlugin"), TEXT("ECollisionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CustomGravityPlugin_ECollisionType_CRC() { return 167149082U; }
	UEnum* Z_Construct_UEnum_CustomGravityPlugin_ECollisionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CustomGravityPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECollisionType"), 0, Get_Z_Construct_UEnum_CustomGravityPlugin_ECollisionType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECollisionType::ECol_Mesh", (int64)ECollisionType::ECol_Mesh },
				{ "ECollisionType::ECol_Sphere", (int64)ECollisionType::ECol_Sphere },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ECol_Mesh.DisplayName", "Mesh Collision" },
				{ "ECol_Sphere.DisplayName", "Sphere Collision" },
				{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECollisionType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECollisionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void APlanetActor::StaticRegisterNativesAPlanetActor()
	{
		UClass* Class = APlanetActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGravityDirection", &APlanetActor::execGetGravityDirection },
			{ "GetGravityinfo", &APlanetActor::execGetGravityinfo },
			{ "SetForceMode", &APlanetActor::execSetForceMode },
			{ "SetGravityPower", &APlanetActor::execSetGravityPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics
	{
		struct PlanetActor_eventGetGravityDirection_Parms
		{
			FVector TargetLocation;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlanetActor_eventGetGravityDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_TargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PlanetActor_eventGetGravityDirection_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_TargetLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_TargetLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlanetActor" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Returns a specific gravity direction based on the target location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanetActor, "GetGravityDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(PlanetActor_eventGetGravityDirection_Parms), Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlanetActor_GetGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics
	{
		struct PlanetActor_eventGetGravityinfo_Parms
		{
			FVector TargetLocation;
			FGravityInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlanetActor_eventGetGravityinfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FGravityInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_TargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PlanetActor_eventGetGravityinfo_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_TargetLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_TargetLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlanetActor" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Get the current planet gravity information.\nNB : Needs a target location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanetActor, "GetGravityinfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(PlanetActor_eventGetGravityinfo_Parms), Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlanetActor_GetGravityinfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlanetActor_SetForceMode_Statics
	{
		struct PlanetActor_eventSetForceMode_Parms
		{
			TEnumAsByte<EForceMode::Type> newForceMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newForceMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::NewProp_newForceMode = { UE4CodeGen_Private::EPropertyClass::Byte, "newForceMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlanetActor_eventSetForceMode_Parms, newForceMode), Z_Construct_UEnum_CustomGravityPlugin_EForceMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::NewProp_newForceMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlanetActor" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Update planet force mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanetActor, "SetForceMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PlanetActor_eventSetForceMode_Parms), Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlanetActor_SetForceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics
	{
		struct PlanetActor_eventSetGravityPower_Parms
		{
			float NewGravity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewGravity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::NewProp_NewGravity = { UE4CodeGen_Private::EPropertyClass::Float, "NewGravity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlanetActor_eventSetGravityPower_Parms, NewGravity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::NewProp_NewGravity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlanetActor" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Change planet gravity power." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanetActor, "SetGravityPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PlanetActor_eventSetGravityPower_Parms), Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlanetActor_SetGravityPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlanetActor_NoRegister()
	{
		return APlanetActor::StaticClass();
	}
	struct Z_Construct_UClass_APlanetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanetRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlanetRootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldUseStepping_MetaData[];
#endif
		static void NewProp_bShouldUseStepping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldUseStepping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ForceMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanetMeshScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanetMeshScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanetMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlanetMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCollisionRaduis_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereCollisionRaduis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSphereCollisionIsSelected_MetaData[];
#endif
		static void NewProp_bSphereCollisionIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSphereCollisionIsSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlanetActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlanetActor_GetGravityDirection, "GetGravityDirection" }, // 3613712385
		{ &Z_Construct_UFunction_APlanetActor_GetGravityinfo, "GetGravityinfo" }, // 3870160235
		{ &Z_Construct_UFunction_APlanetActor_SetForceMode, "SetForceMode" }, // 1131889712
		{ &Z_Construct_UFunction_APlanetActor_SetGravityPower, "SetGravityPower" }, // 3788181152
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/PlanetActor.h" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet Sphere Collision.\nCreated only when CollisonType is set to \"Sphere Collision\".\nOtherwise the component is unregistered." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollision = { UE4CodeGen_Private::EPropertyClass::Object, "SphereCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(APlanetActor, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet MeshComponet" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_MeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(APlanetActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetRootComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "The root component of the planet" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetRootComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PlanetRootComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(APlanetActor, PlanetRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetRootComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetRootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "If true, forces sub-stepping." },
	};
#endif
	void Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping_SetBit(void* Obj)
	{
		((APlanetActor*)Obj)->bShouldUseStepping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldUseStepping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlanetActor), &Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_GravityPower_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet gravity power." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_GravityPower = { UE4CodeGen_Private::EPropertyClass::Float, "GravityPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(APlanetActor, GravityPower), METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_GravityPower_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_GravityPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_ForceMode_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet force mode : Acceleration or Force." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_ForceMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ForceMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(APlanetActor, ForceMode), Z_Construct_UEnum_CustomGravityPlugin_EForceMode, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_ForceMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_ForceMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMeshScale_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet Mesh scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMeshScale = { UE4CodeGen_Private::EPropertyClass::Struct, "PlanetMeshScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APlanetActor, PlanetMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMeshScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMeshScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMesh_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet Static Mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMesh = { UE4CodeGen_Private::EPropertyClass::Object, "PlanetMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlanetActor, PlanetMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollisionRaduis_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "editcondition", "bSphereCollisionIsSelected" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Collision Sphere Radius.\nEditable when CollisonType is set to \"Sphere Collision\"" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollisionRaduis = { UE4CodeGen_Private::EPropertyClass::Float, "SphereCollisionRaduis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APlanetActor, SphereCollisionRaduis), METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollisionRaduis_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollisionRaduis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Cannot be edited.\nTrue , if CollisonType is set to \"Sphere Collision\".\nFalse , if CollisonType is set to \"Sphere Collision\"." },
	};
#endif
	void Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected_SetBit(void* Obj)
	{
		((APlanetActor*)Obj)->bSphereCollisionIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bSphereCollisionIsSelected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlanetActor), &Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet collision type :\n- Mesh Collision.\n- Sphere Collision." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType = { UE4CodeGen_Private::EPropertyClass::Enum, "CollisionType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlanetActor, CollisionType), Z_Construct_UEnum_CustomGravityPlugin_ECollisionType, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlanetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetRootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_GravityPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_ForceMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollisionRaduis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanetActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlanetActor_Statics::ClassParams = {
		&APlanetActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APlanetActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanetActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlanetActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlanetActor, 1968092777);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlanetActor(Z_Construct_UClass_APlanetActor, &APlanetActor::StaticClass, TEXT("/Script/CustomGravityPlugin"), TEXT("APlanetActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanetActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
