// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Private/CustomGravityPluginPrivatePCH.h"
#include "CustomGravityPlugin/Public/Pawns/ThirdPersonBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonBall() {}
// Cross Module References
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_AThirdPersonBall_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_AThirdPersonBall();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_ACustomPawn();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AThirdPersonBall::StaticRegisterNativesAThirdPersonBall()
	{
	}
	UClass* Z_Construct_UClass_AThirdPersonBall_NoRegister()
	{
		return AThirdPersonBall::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ball_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ball;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinVelocityToRotateBall_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinVelocityToRotateBall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallRotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BallRotationRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACustomPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonBall_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/ThirdPersonBall.h" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonBall.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_Ball_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonBall.h" },
		{ "ToolTip", "StaticMesh used for the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_Ball = { UE4CodeGen_Private::EPropertyClass::Object, "Ball", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000b001d, 1, nullptr, STRUCT_OFFSET(AThirdPersonBall, Ball), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_Ball_MetaData, ARRAY_COUNT(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_Ball_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_MinVelocityToRotateBall_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonBall.h" },
		{ "ToolTip", "Minimum Movement speed needed to rotate the ball" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_MinVelocityToRotateBall = { UE4CodeGen_Private::EPropertyClass::Float, "MinVelocityToRotateBall", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AThirdPersonBall, MinVelocityToRotateBall), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_MinVelocityToRotateBall_MetaData, ARRAY_COUNT(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_MinVelocityToRotateBall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonBall.h" },
		{ "ToolTip", "How Smoothly go from Current Rotation to Desired Rotation" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_RotationInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "RotationInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AThirdPersonBall, RotationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_RotationInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_RotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_BallRotationRate_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonBall.h" },
		{ "ToolTip", "Change in ball rotation per second (Between 0 & 1).\nDepends on custom pawn movement speed.\n0.0f : No Rotation.\n1.0f : Full Speed Rotation." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_BallRotationRate = { UE4CodeGen_Private::EPropertyClass::Float, "BallRotationRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AThirdPersonBall, BallRotationRate), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_BallRotationRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_BallRotationRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdPersonBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_Ball,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_MinVelocityToRotateBall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_RotationInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_BallRotationRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonBall_Statics::ClassParams = {
		&AThirdPersonBall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AThirdPersonBall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AThirdPersonBall_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AThirdPersonBall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AThirdPersonBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdPersonBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThirdPersonBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThirdPersonBall, 710495210);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThirdPersonBall(Z_Construct_UClass_AThirdPersonBall, &AThirdPersonBall::StaticClass, TEXT("/Script/CustomGravityPlugin"), TEXT("AThirdPersonBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
