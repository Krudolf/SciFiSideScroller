// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SciFiSideScroller/SciFiSideScrollerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSciFiSideScrollerGameMode() {}
// Cross Module References
	SCIFISIDESCROLLER_API UClass* Z_Construct_UClass_ASciFiSideScrollerGameMode_NoRegister();
	SCIFISIDESCROLLER_API UClass* Z_Construct_UClass_ASciFiSideScrollerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SciFiSideScroller();
// End Cross Module References
	void ASciFiSideScrollerGameMode::StaticRegisterNativesASciFiSideScrollerGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASciFiSideScrollerGameMode_NoRegister()
	{
		return ASciFiSideScrollerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASciFiSideScrollerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASciFiSideScrollerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SciFiSideScroller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASciFiSideScrollerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SciFiSideScrollerGameMode.h" },
		{ "ModuleRelativePath", "SciFiSideScrollerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASciFiSideScrollerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASciFiSideScrollerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASciFiSideScrollerGameMode_Statics::ClassParams = {
		&ASciFiSideScrollerGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASciFiSideScrollerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASciFiSideScrollerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASciFiSideScrollerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASciFiSideScrollerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASciFiSideScrollerGameMode, 3181265041);
	template<> SCIFISIDESCROLLER_API UClass* StaticClass<ASciFiSideScrollerGameMode>()
	{
		return ASciFiSideScrollerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASciFiSideScrollerGameMode(Z_Construct_UClass_ASciFiSideScrollerGameMode, &ASciFiSideScrollerGameMode::StaticClass, TEXT("/Script/SciFiSideScroller"), TEXT("ASciFiSideScrollerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASciFiSideScrollerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
