// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaccoonGame/Stroller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStroller() {}
// Cross Module References
	RACCOONGAME_API UClass* Z_Construct_UClass_AStroller_NoRegister();
	RACCOONGAME_API UClass* Z_Construct_UClass_AStroller();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_RaccoonGame();
// End Cross Module References
	void AStroller::StaticRegisterNativesAStroller()
	{
	}
	UClass* Z_Construct_UClass_AStroller_NoRegister()
	{
		return AStroller::StaticClass();
	}
	struct Z_Construct_UClass_AStroller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStroller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RaccoonGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStroller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Stroller.h" },
		{ "ModuleRelativePath", "Stroller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStroller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStroller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStroller_Statics::ClassParams = {
		&AStroller::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStroller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStroller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStroller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStroller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStroller, 3542482898);
	template<> RACCOONGAME_API UClass* StaticClass<AStroller>()
	{
		return AStroller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStroller(Z_Construct_UClass_AStroller, &AStroller::StaticClass, TEXT("/Script/RaccoonGame"), TEXT("AStroller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStroller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
