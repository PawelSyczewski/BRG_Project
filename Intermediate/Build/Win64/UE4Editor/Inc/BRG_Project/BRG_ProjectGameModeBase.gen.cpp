// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BRG_ProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBRG_ProjectGameModeBase() {}
// Cross Module References
	BRG_PROJECT_API UClass* Z_Construct_UClass_ABRG_ProjectGameModeBase_NoRegister();
	BRG_PROJECT_API UClass* Z_Construct_UClass_ABRG_ProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BRG_Project();
// End Cross Module References
	void ABRG_ProjectGameModeBase::StaticRegisterNativesABRG_ProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABRG_ProjectGameModeBase_NoRegister()
	{
		return ABRG_ProjectGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABRG_ProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_BRG_Project,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "BRG_ProjectGameModeBase.h" },
				{ "ModuleRelativePath", "BRG_ProjectGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABRG_ProjectGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABRG_ProjectGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABRG_ProjectGameModeBase, 3026356484);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABRG_ProjectGameModeBase(Z_Construct_UClass_ABRG_ProjectGameModeBase, &ABRG_ProjectGameModeBase::StaticClass, TEXT("/Script/BRG_Project"), TEXT("ABRG_ProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABRG_ProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
