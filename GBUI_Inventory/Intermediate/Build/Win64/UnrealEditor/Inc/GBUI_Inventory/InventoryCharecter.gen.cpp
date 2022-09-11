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
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UEquipInventoryComponent_NoRegister();
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UEquipIntarface_NoRegister();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalInventory2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalInventory2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_LocalInventory2_MetaData[] = {
		{ "Category", "InventoryCharecter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryCharecter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_LocalInventory2 = { "LocalInventory2", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryCharecter, LocalInventory2), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_LocalInventory2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_LocalInventory2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_InventoryManager_MetaData[] = {
		{ "Category", "InventoryCharecter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryCharecter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryCharecter, InventoryManager), Z_Construct_UClass_UInventoryManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_InventoryManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_InventoryManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_EquipInventory_MetaData[] = {
		{ "Category", "InventoryCharecter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryCharecter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_EquipInventory = { "EquipInventory", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryCharecter, EquipInventory), Z_Construct_UClass_UEquipInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_EquipInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_EquipInventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "InventoryCharecter" },
		{ "ModuleRelativePath", "InventoryCharecter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryCharecter, Damage), METADATA_PARAMS(Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_Damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInventoryCharecter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_LocalInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_LocalInventory2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_InventoryManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_EquipInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryCharecter_Statics::NewProp_Damage,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInventoryCharecter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEquipIntarface_NoRegister, (int32)VTABLE_OFFSET(AInventoryCharecter, IEquipIntarface), false },  // 426137823
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
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCharecter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
		{ Z_Construct_UClass_AInventoryCharecter, AInventoryCharecter::StaticClass, TEXT("AInventoryCharecter"), &Z_Registration_Info_UClass_AInventoryCharecter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInventoryCharecter), 833305088U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryCharecter_h_1063276182(TEXT("/Script/GBUI_Inventory"),
		Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryCharecter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryCharecter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
