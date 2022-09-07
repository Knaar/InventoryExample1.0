// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBUI_Inventory/InventoryWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryWidget() {}
// Cross Module References
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UInventoryWidget_NoRegister();
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UInventoryWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GBUI_Inventory();
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UInventoryCellWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
// End Cross Module References
	void UInventoryWidget::StaticRegisterNativesUInventoryWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryWidget);
	UClass* Z_Construct_UClass_UInventoryWidget_NoRegister()
	{
		return UInventoryWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsInRow_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemsInRow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CellWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellsPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CellsPanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoldCell_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GoldCell;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MassiveOfCellWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassiveOfCellWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MassiveOfCellWidgets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GBUI_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryWidget.h" },
		{ "ModuleRelativePath", "InventoryWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_ParentInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_ParentInventory = { "ParentInventory", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryWidget, ParentInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_ParentInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_ParentInventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_ItemsInRow_MetaData[] = {
		{ "Category", "InventoryWidget" },
		{ "Comment", "//\xd0\xad\xd1\x82\xd0\xbe \xd0\xba\xd0\xbe\xd0\xbb\xd0\xb8\xd1\x87\xd0\xb5\xd1\x81\xd1\x82\xd0\xb2\xd0\xbe \xd0\xbf\xd1\x80\xd0\xb5\xd0\xb4\xd0\xbc\xd0\xb5\xd1\x82\xd0\xbe\xd0\xb2 \xd0\xb2 \xd1\x81\xd1\x82\xd1\x80\xd0\xbe\xd0\xba\xd0\xb5\n" },
		{ "ModuleRelativePath", "InventoryWidget.h" },
		{ "ToolTip", "\xd0\xad\xd1\x82\xd0\xbe \xd0\xba\xd0\xbe\xd0\xbb\xd0\xb8\xd1\x87\xd0\xb5\xd1\x81\xd1\x82\xd0\xb2\xd0\xbe \xd0\xbf\xd1\x80\xd0\xb5\xd0\xb4\xd0\xbc\xd0\xb5\xd1\x82\xd0\xbe\xd0\xb2 \xd0\xb2 \xd1\x81\xd1\x82\xd1\x80\xd0\xbe\xd0\xba\xd0\xb5" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_ItemsInRow = { "ItemsInRow", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryWidget, ItemsInRow), METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_ItemsInRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_ItemsInRow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_CellWidgetClass_MetaData[] = {
		{ "Category", "InventoryWidget" },
		{ "Comment", "//\xd0\xa3\xd0\xba\xd0\xb0\xd0\xb7\xd1\x8b\xd0\xb2\xd0\xb0\xd0\xb5\xd0\xbc CellWidgetClass \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xbf\xd1\x80\xd0\xbe\xd1\x86\xd0\xb5\xd0\xb4\xd1\x83\xd1\x80\xd0\xbd\xd0\xbe\xd0\xb9 \xd0\xbe\xd1\x82\xd1\x80\xd0\xb8\xd1\x81\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb8 \xd1\x8f\xd1\x87\xd0\xb5\xd0\xb5\xd0\xba. CellWidgetClass \xd0\xbc\xd1\x8b \xd0\xb8 \xd0\xb1\xd1\x83\xd0\xb4\xd0\xb5\xd0\xbc \xd1\x81\xd0\xbf\xd0\xb0\xd0\xb2\xd0\xbd\xd0\xb8\xd1\x82\xd1\x8c\n" },
		{ "ModuleRelativePath", "InventoryWidget.h" },
		{ "ToolTip", "\xd0\xa3\xd0\xba\xd0\xb0\xd0\xb7\xd1\x8b\xd0\xb2\xd0\xb0\xd0\xb5\xd0\xbc CellWidgetClass \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xbf\xd1\x80\xd0\xbe\xd1\x86\xd0\xb5\xd0\xb4\xd1\x83\xd1\x80\xd0\xbd\xd0\xbe\xd0\xb9 \xd0\xbe\xd1\x82\xd1\x80\xd0\xb8\xd1\x81\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb8 \xd1\x8f\xd1\x87\xd0\xb5\xd0\xb5\xd0\xba. CellWidgetClass \xd0\xbc\xd1\x8b \xd0\xb8 \xd0\xb1\xd1\x83\xd0\xb4\xd0\xb5\xd0\xbc \xd1\x81\xd0\xbf\xd0\xb0\xd0\xb2\xd0\xbd\xd0\xb8\xd1\x82\xd1\x8c" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_CellWidgetClass = { "CellWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryWidget, CellWidgetClass), Z_Construct_UClass_UInventoryCellWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_CellWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_CellWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_CellsPanel_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "InventoryWidget" },
		{ "Comment", "//\xd0\x9f\xd0\xb0\xd0\xbd\xd0\xb5\xd0\xbb\xd1\x8c \xd0\xb4\xd0\xbb\xd1\x8f \xd1\x8f\xd1\x87\xd0\xb5\xd0\xb5\xd0\xba\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryWidget.h" },
		{ "ToolTip", "\xd0\x9f\xd0\xb0\xd0\xbd\xd0\xb5\xd0\xbb\xd1\x8c \xd0\xb4\xd0\xbb\xd1\x8f \xd1\x8f\xd1\x87\xd0\xb5\xd0\xb5\xd0\xba" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_CellsPanel = { "CellsPanel", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryWidget, CellsPanel), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_CellsPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_CellsPanel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_GoldCell_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "InventoryWidget" },
		{ "Comment", "//\xd0\x9e\xd1\x82\xd0\xb4\xd0\xb5\xd0\xbb\xd1\x8c\xd0\xbd\xd0\xb0\xd1\x8f \xd1\x8f\xd1\x87\xd0\xb5\xd0\xb9\xd0\xba\xd0\xb0 \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xb7\xd0\xbe\xd0\xbb\xd0\xbe\xd1\x82\xd0\xb0\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryWidget.h" },
		{ "ToolTip", "\xd0\x9e\xd1\x82\xd0\xb4\xd0\xb5\xd0\xbb\xd1\x8c\xd0\xbd\xd0\xb0\xd1\x8f \xd1\x8f\xd1\x87\xd0\xb5\xd0\xb9\xd0\xba\xd0\xb0 \xd0\xb4\xd0\xbb\xd1\x8f \xd0\xb7\xd0\xbe\xd0\xbb\xd0\xbe\xd1\x82\xd0\xb0" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_GoldCell = { "GoldCell", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryWidget, GoldCell), Z_Construct_UClass_UInventoryCellWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_GoldCell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_GoldCell_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_MassiveOfCellWidgets_Inner = { "MassiveOfCellWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInventoryCellWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_MassiveOfCellWidgets_MetaData[] = {
		{ "Category", "InventoryWidget" },
		{ "Comment", "//\xd0\x9c\xd0\xb0\xd1\x81\xd1\x81\xd0\xb8\xd0\xb2 \xd0\xb2\xd1\x81\xd0\xb5\xd1\x85 \xd1\x8f\xd1\x87\xd0\xb5\xd0\xb5\xd0\xba, \xd0\xba\xd0\xbe\xd1\x82\xd0\xbe\xd1\x80\xd1\x8b\xd0\xb5 \xd0\xbc\xd1\x8b \xd1\x81\xd0\xbe\xd0\xb7\xd0\xb4\xd0\xb0\xd0\xbb\xd0\xb8\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryWidget.h" },
		{ "ToolTip", "\xd0\x9c\xd0\xb0\xd1\x81\xd1\x81\xd0\xb8\xd0\xb2 \xd0\xb2\xd1\x81\xd0\xb5\xd1\x85 \xd1\x8f\xd1\x87\xd0\xb5\xd0\xb5\xd0\xba, \xd0\xba\xd0\xbe\xd1\x82\xd0\xbe\xd1\x80\xd1\x8b\xd0\xb5 \xd0\xbc\xd1\x8b \xd1\x81\xd0\xbe\xd0\xb7\xd0\xb4\xd0\xb0\xd0\xbb\xd0\xb8" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_MassiveOfCellWidgets = { "MassiveOfCellWidgets", nullptr, (EPropertyFlags)0x002008800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryWidget, MassiveOfCellWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_MassiveOfCellWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_MassiveOfCellWidgets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_ParentInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_ItemsInRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_CellWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_CellsPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_GoldCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_MassiveOfCellWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_MassiveOfCellWidgets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryWidget_Statics::ClassParams = {
		&UInventoryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryWidget()
	{
		if (!Z_Registration_Info_UClass_UInventoryWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryWidget.OuterSingleton, Z_Construct_UClass_UInventoryWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryWidget.OuterSingleton;
	}
	template<> GBUI_INVENTORY_API UClass* StaticClass<UInventoryWidget>()
	{
		return UInventoryWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryWidget);
	struct Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryWidget, UInventoryWidget::StaticClass, TEXT("UInventoryWidget"), &Z_Registration_Info_UClass_UInventoryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryWidget), 2920896162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryWidget_h_2731555167(TEXT("/Script/GBUI_Inventory"),
		Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
