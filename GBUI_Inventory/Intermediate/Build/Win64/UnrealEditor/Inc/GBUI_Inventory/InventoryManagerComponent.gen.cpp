// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBUI_Inventory/InventoryManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryManagerComponent() {}
// Cross Module References
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UInventoryManagerComponent_NoRegister();
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UInventoryManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GBUI_Inventory();
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UInventoryWidget_NoRegister();
// End Cross Module References
	void UInventoryManagerComponent::StaticRegisterNativesUInventoryManagerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryManagerComponent);
	UClass* Z_Construct_UClass_UInventoryManagerComponent_NoRegister()
	{
		return UInventoryManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalInventoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalInventoryComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinInventorySize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinInventorySize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EquipWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GBUI_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryManagerComponent.h" },
		{ "ModuleRelativePath", "InventoryManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_LocalInventoryComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_LocalInventoryComponent = { "LocalInventoryComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryManagerComponent, LocalInventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_LocalInventoryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_LocalInventoryComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_ItemsData_MetaData[] = {
		{ "Category", "InventoryManagerComponent" },
		{ "ModuleRelativePath", "InventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_ItemsData = { "ItemsData", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryManagerComponent, ItemsData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_ItemsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_ItemsData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_MinInventorySize_MetaData[] = {
		{ "Category", "InventoryManagerComponent" },
		{ "ModuleRelativePath", "InventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_MinInventorySize = { "MinInventorySize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryManagerComponent, MinInventorySize), METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_MinInventorySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_MinInventorySize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidgetClass_MetaData[] = {
		{ "Category", "InventoryManagerComponent" },
		{ "ModuleRelativePath", "InventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidgetClass = { "InventoryWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryManagerComponent, InventoryWidgetClass), Z_Construct_UClass_UInventoryWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidget = { "InventoryWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryManagerComponent, InventoryWidget), Z_Construct_UClass_UInventoryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipWidgetClass_MetaData[] = {
		{ "Category", "InventoryManagerComponent" },
		{ "ModuleRelativePath", "InventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipWidgetClass = { "EquipWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryManagerComponent, EquipWidgetClass), Z_Construct_UClass_UInventoryWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipWidget = { "EquipWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryManagerComponent, EquipWidget), Z_Construct_UClass_UInventoryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_LocalInventoryComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_ItemsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_MinInventorySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryManagerComponent_Statics::ClassParams = {
		&UInventoryManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UInventoryManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryManagerComponent.OuterSingleton, Z_Construct_UClass_UInventoryManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryManagerComponent.OuterSingleton;
	}
	template<> GBUI_INVENTORY_API UClass* StaticClass<UInventoryManagerComponent>()
	{
		return UInventoryManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryManagerComponent);
	struct Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryManagerComponent, UInventoryManagerComponent::StaticClass, TEXT("UInventoryManagerComponent"), &Z_Registration_Info_UClass_UInventoryManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryManagerComponent), 240777995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_528527212(TEXT("/Script/GBUI_Inventory"),
		Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
