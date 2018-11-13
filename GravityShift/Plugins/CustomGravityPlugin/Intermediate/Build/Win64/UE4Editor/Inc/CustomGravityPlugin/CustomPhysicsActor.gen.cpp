// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Private/CustomGravityPluginPrivatePCH.h"
#include "CustomGravityPlugin/Public/Actors/CustomPhysicsActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPhysicsActor() {}
// Cross Module References
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_ACustomPhysicsActor_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_ACustomPhysicsActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_UCustomGravityComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACustomPhysicsActor::StaticRegisterNativesACustomPhysicsActor()
	{
	}
	UClass* Z_Construct_UClass_ACustomPhysicsActor_NoRegister()
	{
		return ACustomPhysicsActor::StaticClass();
	}
	struct Z_Construct_UClass_ACustomPhysicsActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GravityComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomPhysicsActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPhysicsActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/CustomPhysicsActor.h" },
		{ "ModuleRelativePath", "Public/Actors/CustomPhysicsActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_GravityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CustomPhysicsActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CustomPhysicsActor.h" },
		{ "ToolTip", "Gravity Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_GravityComponent = { UE4CodeGen_Private::EPropertyClass::Object, "GravityComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ACustomPhysicsActor, GravityComponent), Z_Construct_UClass_UCustomGravityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_GravityComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_GravityComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CustomPhysicsActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CustomPhysicsActor.h" },
		{ "ToolTip", "StaticMesh Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_MeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ACustomPhysicsActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomPhysicsActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_GravityComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomPhysicsActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomPhysicsActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomPhysicsActor_Statics::ClassParams = {
		&ACustomPhysicsActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ACustomPhysicsActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACustomPhysicsActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACustomPhysicsActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACustomPhysicsActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomPhysicsActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomPhysicsActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomPhysicsActor, 1302857186);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomPhysicsActor(Z_Construct_UClass_ACustomPhysicsActor, &ACustomPhysicsActor::StaticClass, TEXT("/Script/CustomGravityPlugin"), TEXT("ACustomPhysicsActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomPhysicsActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
