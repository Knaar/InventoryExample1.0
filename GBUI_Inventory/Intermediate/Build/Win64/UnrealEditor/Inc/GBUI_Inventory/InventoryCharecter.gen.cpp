// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBUI_Inventory/InventoryCharecter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryCharecter() {}
// Cross Module References
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_AInventoryCharecter_NoRegister();
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_AInventoryCharecter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GBUI_Inventory();
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UInventoryManagerComponent_NoRegister();
// End Cross Module References
	void AInventoryCharecter::StaticRegisterNativesAInventoryCharecter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInventoryCharecter);
	UClass* Z_Construct_UClass_AInventoryCharecter_NoRegister()
	{
		return AInventoryCharecter::StaticClass();
	}
	struct Z_Construct_UClass_AInventoryCharecter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventoryCharecter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GBUI_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryCharecter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "InventoryCharecter.h" },
		{ "ModuleRelativePath", "InventoryCharecter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_LocalInventory_MetaData[] = {
		{ "Category", "InventoryCharecter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryCharecter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_LocalInventory = { "LocalInventory", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryCharecter, LocalInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_LocalInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_LocalInventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_InventoryManager_MetaData[] = {
		{ "Category", "InventoryCharecter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryCharecter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryCharecter, InventoryManager), Z_Construct_UClass_UInventoryManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_InventoryManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_InventoryManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInventoryCharecter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_LocalInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_InventoryManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventoryCharecter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryCharecter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInventoryCharecter_Statics::ClassParams = {
		&AInventoryCharecter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInventoryCharecter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCharecter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInventoryCharecter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCharecter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventoryCharecter()
	{
		if (!Z_Registration_Info_UClass_AInventoryCharecter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInventoryCharecter.OuterSingleton, Z_Construct_UClass_AInventoryCharecter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInventoryCharecter.OuterSingleton;
	}
	template<> GBUI_INVENTORY_API UClass* StaticClass<AInventoryCharecter>()
	{
		return AInventoryCharecter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryCharecter);
	struct Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryCharecter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryCharecter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInventoryCharecter, AInventoryCharecter::StaticClass, TEXT("AInventoryCharecter"), &Z_Registration_Info_UClass_AInventoryCharecter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInventoryCharecter), 2318006538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryCharecter_h_3053945480(TEXT("/Script/GBUI_Inventory"),
		Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryCharecter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryCharecter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
