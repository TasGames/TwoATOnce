// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Private/CustomGravityPluginPrivatePCH.h"
#include "CustomGravityPlugin/Public/Pawns/ThirdPersonCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonCharacter() {}
// Cross Module References
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_AThirdPersonCharacter();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_ACustomPawn();
// End Cross Module References
	static UEnum* EMeshOrientation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("EMeshOrientation"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshOrientation(EMeshOrientation_StaticEnum, TEXT("/Script/CustomGravityPlugin"), TEXT("EMeshOrientation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation_CRC() { return 2775859751U; }
	UEnum* Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CustomGravityPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshOrientation"), 0, Get_Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshOrientation::EMO_Movement", (int64)EMeshOrientation::EMO_Movement },
				{ "EMeshOrientation::EMO_Camera", (int64)EMeshOrientation::EMO_Camera },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMO_Camera.DisplayName", "Camera Direction" },
				{ "EMO_Movement.DisplayName", "Movement Direction" },
				{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMeshOrientation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EMeshOrientation::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AThirdPersonCharacter::StaticRegisterNativesAThirdPersonCharacter()
	{
	}
	UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister()
	{
		return AThirdPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstantRotation_MetaData[];
#endif
		static void NewProp_bInstantRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstantRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinVelocityToRotateMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinVelocityToRotateMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateMeshOnlyWhenMoving_MetaData[];
#endif
		static void NewProp_bRotateMeshOnlyWhenMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateMeshOnlyWhenMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshOrientation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACustomPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/ThirdPersonCharacter.h" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "ClampMin", "0" },
		{ "editcondition", "!bInstantRotation" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ToolTip", "Controls how smooth the rotation is done , editable if InstantRotation is false" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_RotationInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "RotationInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AThirdPersonCharacter, RotationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_RotationInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_RotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "editcondition", "bRotateMeshOnlyWhenMoving" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ToolTip", "if true , instantly rotate the character mesh toward the desired rotation.\nif false , smoothly rotate the character mesh toward the desired rotation." },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->bInstantRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bInstantRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MinVelocityToRotateMesh_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "ClampMin", "0" },
		{ "editcondition", "bRotateMeshOnlyWhenMoving" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ToolTip", "Minimum Movement speed needed to orient the mesh toward the desired direction" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MinVelocityToRotateMesh = { UE4CodeGen_Private::EPropertyClass::Float, "MinVelocityToRotateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AThirdPersonCharacter, MinVelocityToRotateMesh), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MinVelocityToRotateMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MinVelocityToRotateMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ToolTip", "if true , rotate the mesh only when the custom pawn is moving ." },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->bRotateMeshOnlyWhenMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving = { UE4CodeGen_Private::EPropertyClass::Bool, "bRotateMeshOnlyWhenMoving", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving_MetaData, ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MeshOrientation_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ToolTip", "Set Mesh Orientation.\nrotate the Character toward the direction of :\n-Movement Direction\n-Camera Direction" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MeshOrientation = { UE4CodeGen_Private::EPropertyClass::Byte, "MeshOrientation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AThirdPersonCharacter, MeshOrientation), Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MeshOrientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MeshOrientation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_RotationInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MinVelocityToRotateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MeshOrientation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams = {
		&AThirdPersonCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdPersonCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThirdPersonCharacter, 3513943698);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThirdPersonCharacter(Z_Construct_UClass_AThirdPersonCharacter, &AThirdPersonCharacter::StaticClass, TEXT("/Script/CustomGravityPlugin"), TEXT("AThirdPersonCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
