// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Building_Escape/Building_EscapeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilding_EscapeGameModeBase() {}
// Cross Module References
	BUILDING_ESCAPE_API UClass* Z_Construct_UClass_ABuilding_EscapeGameModeBase_NoRegister();
	BUILDING_ESCAPE_API UClass* Z_Construct_UClass_ABuilding_EscapeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Building_Escape();
// End Cross Module References
	void ABuilding_EscapeGameModeBase::StaticRegisterNativesABuilding_EscapeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABuilding_EscapeGameModeBase_NoRegister()
	{
		return ABuilding_EscapeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABuilding_EscapeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilding_EscapeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Building_Escape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_EscapeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Building_EscapeGameModeBase.h" },
		{ "ModuleRelativePath", "Building_EscapeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilding_EscapeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilding_EscapeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilding_EscapeGameModeBase_Statics::ClassParams = {
		&ABuilding_EscapeGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ABuilding_EscapeGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABuilding_EscapeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilding_EscapeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilding_EscapeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilding_EscapeGameModeBase, 3037738564);
	template<> BUILDING_ESCAPE_API UClass* StaticClass<ABuilding_EscapeGameModeBase>()
	{
		return ABuilding_EscapeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilding_EscapeGameModeBase(Z_Construct_UClass_ABuilding_EscapeGameModeBase, &ABuilding_EscapeGameModeBase::StaticClass, TEXT("/Script/Building_Escape"), TEXT("ABuilding_EscapeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilding_EscapeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
