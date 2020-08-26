// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicPlatform/BasicPlatformGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicPlatformGameMode() {}
// Cross Module References
	BASICPLATFORM_API UClass* Z_Construct_UClass_ABasicPlatformGameMode_NoRegister();
	BASICPLATFORM_API UClass* Z_Construct_UClass_ABasicPlatformGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BasicPlatform();
// End Cross Module References
	void ABasicPlatformGameMode::StaticRegisterNativesABasicPlatformGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABasicPlatformGameMode_NoRegister()
	{
		return ABasicPlatformGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABasicPlatformGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicPlatformGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicPlatform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicPlatformGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BasicPlatformGameMode.h" },
		{ "ModuleRelativePath", "BasicPlatformGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicPlatformGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicPlatformGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicPlatformGameMode_Statics::ClassParams = {
		&ABasicPlatformGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABasicPlatformGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicPlatformGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicPlatformGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicPlatformGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicPlatformGameMode, 1954327888);
	template<> BASICPLATFORM_API UClass* StaticClass<ABasicPlatformGameMode>()
	{
		return ABasicPlatformGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicPlatformGameMode(Z_Construct_UClass_ABasicPlatformGameMode, &ABasicPlatformGameMode::StaticClass, TEXT("/Script/BasicPlatform"), TEXT("ABasicPlatformGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicPlatformGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
