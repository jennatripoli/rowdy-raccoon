// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaccoonGame/NPCBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCBase() {}
// Cross Module References
	RACCOONGAME_API UClass* Z_Construct_UClass_ANPCBase_NoRegister();
	RACCOONGAME_API UClass* Z_Construct_UClass_ANPCBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_RaccoonGame();
// End Cross Module References
	void ANPCBase::StaticRegisterNativesANPCBase()
	{
	}
	UClass* Z_Construct_UClass_ANPCBase_NoRegister()
	{
		return ANPCBase::StaticClass();
	}
	struct Z_Construct_UClass_ANPCBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RaccoonGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPCBase.h" },
		{ "ModuleRelativePath", "NPCBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPCBase_Statics::ClassParams = {
		&ANPCBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANPCBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPCBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPCBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPCBase, 891758723);
	template<> RACCOONGAME_API UClass* StaticClass<ANPCBase>()
	{
		return ANPCBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPCBase(Z_Construct_UClass_ANPCBase, &ANPCBase::StaticClass, TEXT("/Script/RaccoonGame"), TEXT("ANPCBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
