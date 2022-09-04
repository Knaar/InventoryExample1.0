// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBUI_Inventory/GBUI_InventoryGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGBUI_InventoryGameMode() {}
// Cross Module References
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_AGBUI_InventoryGameMode_NoRegister();
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_AGBUI_InventoryGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GBUI_Inventory();
// End Cross Module References
	void AGBUI_InventoryGameMode::StaticRegisterNativesAGBUI_InventoryGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGBUI_InventoryGameMode);
	UClass* Z_Construct_UClass_AGBUI_InventoryGameMode_NoRegister()
	{
		return AGBUI_InventoryGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGBUI_InventoryGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGBUI_InventoryGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GBUI_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGBUI_InventoryGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GBUI_InventoryGameMode.h" },
		{ "ModuleRelativePath", "GBUI_InventoryGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGBUI_InventoryGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGBUI_InventoryGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGBUI_InventoryGameMode_Statics::ClassParams = {
		&AGBUI_InventoryGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGBUI_InventoryGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGBUI_InventoryGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGBUI_InventoryGameMode()
	{
		if (!Z_Registration_Info_UClass_AGBUI_InventoryGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGBUI_InventoryGameMode.OuterSingleton, Z_Construct_UClass_AGBUI_InventoryGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGBUI_InventoryGameMode.OuterSingleton;
	}
	template<> GBUI_INVENTORY_API UClass* StaticClass<AGBUI_InventoryGameMode>()
	{
		return AGBUI_InventoryGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGBUI_InventoryGameMode);
	struct Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_GBUI_InventoryGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_GBUI_InventoryGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGBUI_InventoryGameMode, AGBUI_InventoryGameMode::StaticClass, TEXT("AGBUI_InventoryGameMode"), &Z_Registration_Info_UClass_AGBUI_InventoryGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGBUI_InventoryGameMode), 1197062785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_GBUI_InventoryGameMode_h_488512582(TEXT("/Script/GBUI_Inventory"),
		Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_GBUI_InventoryGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_GBUI_InventoryGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
