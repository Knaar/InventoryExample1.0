// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBUI_Inventory/EquipInventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipInventoryComponent() {}
// Cross Module References
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UEquipInventoryComponent_NoRegister();
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UEquipInventoryComponent();
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UInventoryComponent();
	UPackage* Z_Construct_UPackage__Script_GBUI_Inventory();
	GBUI_INVENTORY_API UEnum* Z_Construct_UEnum_GBUI_Inventory_EEquipSlot();
// End Cross Module References
	void UEquipInventoryComponent::StaticRegisterNativesUEquipInventoryComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipInventoryComponent);
	UClass* Z_Construct_UClass_UEquipInventoryComponent_NoRegister()
	{
		return UEquipInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEquipInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EquipSlotsMap_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipSlotsMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EquipSlotsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipSlotsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EquipSlotsMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInventoryComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GBUI_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EquipInventoryComponent.h" },
		{ "ModuleRelativePath", "EquipInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlotsMap_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlotsMap_ValueProp = { "EquipSlotsMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_GBUI_Inventory_EEquipSlot, METADATA_PARAMS(nullptr, 0) }; // 693636913
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlotsMap_Key_KeyProp = { "EquipSlotsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlotsMap_MetaData[] = {
		{ "Category", "EquipInventoryComponent" },
		{ "Comment", "/*\xd0\xa1\xd0\xb2\xd1\x8f\xd0\xb7\xd1\x8b\xd0\xb2\xd0\xb0\xd0\xb5\xd1\x82 \xd0\xb8\xd0\xbd\xd0\xb4\xd0\xb5\xd0\xba\xd1\x81 \xd1\x81\xd0\xbb\xd0\xbe\xd1\x82\xd0\xb0 \xd0\xb8 \xd1\x82\xd0\xb8\xd0\xbf \xd1\x8d\xd1\x82\xd0\xbe\xd0\xb3\xd0\xbe \xd1\x81\xd0\xbb\xd0\xbe\xd1\x82\xd0\xb0.\xd0\xa2\xd0\xb5 1\xd1\x81\xd0\xbb\xd0\xbe\xd1\x82-\xd0\xb3\xd0\xbe\xd0\xbb\xd0\xbe\xd0\xb2\xd0\xb0,2\xd0\xb9-\xd0\xbb\xd0\xb5\xd0\xb2\xd0\xb0\xd1\x8f \xd1\x80\xd1\x83\xd0\xba\xd0\xb0 \xd0\xb8 \xd1\x82\xd0\xb4\n\x09 *\xd0\x98\xd1\x81\xd0\xbf\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xb7\xd1\x83\xd0\xb5\xd0\xbc \xd0\x9c\xd0\xb0\xd1\x80 \xd0\xb4\xd0\xbb\xd1\x8f \xd1\x82\xd0\xbe\xd0\xb3\xd0\xbe, \xd1\x87\xd1\x82\xd0\xbe\xd0\xb1\xd1\x8b \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xb1\xd1\x8b\xd0\xbb\xd0\xbe \xd0\xbe\xd0\xb3\xd1\x80\xd0\xb0\xd0\xbd\xd0\xb8\xd1\x87\xd0\xb8\xd1\x82\xd1\x8c\xd1\x82\xd0\xb5 \xd0\xbf\xd1\x80\xd0\xb5\xd0\xb4\xd0\xbc\xd0\xb5\xd1\x82\xd1\x8b, \xd0\xba\xd0\xbe\xd1\x82\xd0\xbe\xd1\x80\xd1\x8b\xd0\xb5 \xd0\xb1\xd1\x83\xd0\xb4\xd0\xb5\xd1\x82 \xd0\xbd\xd0\xb0\xd0\xb4\xd0\xb5\xd0\xb2\xd0\xb0\xd1\x82\xd1\x8c \xd0\xb8\xd0\xb3\xd1\x80\xd0\xbe\xd0\xba*/" },
		{ "ModuleRelativePath", "EquipInventoryComponent.h" },
		{ "ToolTip", "\xd0\xa1\xd0\xb2\xd1\x8f\xd0\xb7\xd1\x8b\xd0\xb2\xd0\xb0\xd0\xb5\xd1\x82 \xd0\xb8\xd0\xbd\xd0\xb4\xd0\xb5\xd0\xba\xd1\x81 \xd1\x81\xd0\xbb\xd0\xbe\xd1\x82\xd0\xb0 \xd0\xb8 \xd1\x82\xd0\xb8\xd0\xbf \xd1\x8d\xd1\x82\xd0\xbe\xd0\xb3\xd0\xbe \xd1\x81\xd0\xbb\xd0\xbe\xd1\x82\xd0\xb0.\xd0\xa2\xd0\xb5 1\xd1\x81\xd0\xbb\xd0\xbe\xd1\x82-\xd0\xb3\xd0\xbe\xd0\xbb\xd0\xbe\xd0\xb2\xd0\xb0,2\xd0\xb9-\xd0\xbb\xd0\xb5\xd0\xb2\xd0\xb0\xd1\x8f \xd1\x80\xd1\x83\xd0\xba\xd0\xb0 \xd0\xb8 \xd1\x82\xd0\xb4\n        *\xd0\x98\xd1\x81\xd0\xbf\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xb7\xd1\x83\xd0\xb5\xd0\xbc \xd0\x9c\xd0\xb0\xd1\x80 \xd0\xb4\xd0\xbb\xd1\x8f \xd1\x82\xd0\xbe\xd0\xb3\xd0\xbe, \xd1\x87\xd1\x82\xd0\xbe\xd0\xb1\xd1\x8b \xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe \xd0\xb1\xd1\x8b\xd0\xbb\xd0\xbe \xd0\xbe\xd0\xb3\xd1\x80\xd0\xb0\xd0\xbd\xd0\xb8\xd1\x87\xd0\xb8\xd1\x82\xd1\x8c\xd1\x82\xd0\xb5 \xd0\xbf\xd1\x80\xd0\xb5\xd0\xb4\xd0\xbc\xd0\xb5\xd1\x82\xd1\x8b, \xd0\xba\xd0\xbe\xd1\x82\xd0\xbe\xd1\x80\xd1\x8b\xd0\xb5 \xd0\xb1\xd1\x83\xd0\xb4\xd0\xb5\xd1\x82 \xd0\xbd\xd0\xb0\xd0\xb4\xd0\xb5\xd0\xb2\xd0\xb0\xd1\x82\xd1\x8c \xd0\xb8\xd0\xb3\xd1\x80\xd0\xbe\xd0\xba" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlotsMap = { "EquipSlotsMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipInventoryComponent, EquipSlotsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlotsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlotsMap_MetaData)) }; // 693636913
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlotsMap_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlotsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlotsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlotsMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipInventoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipInventoryComponent_Statics::ClassParams = {
		&UEquipInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipInventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipInventoryComponent()
	{
		if (!Z_Registration_Info_UClass_UEquipInventoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipInventoryComponent.OuterSingleton, Z_Construct_UClass_UEquipInventoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipInventoryComponent.OuterSingleton;
	}
	template<> GBUI_INVENTORY_API UClass* StaticClass<UEquipInventoryComponent>()
	{
		return UEquipInventoryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipInventoryComponent);
	struct Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_EquipInventoryComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_EquipInventoryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipInventoryComponent, UEquipInventoryComponent::StaticClass, TEXT("UEquipInventoryComponent"), &Z_Registration_Info_UClass_UEquipInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipInventoryComponent), 222210305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_EquipInventoryComponent_h_1222466953(TEXT("/Script/GBUI_Inventory"),
		Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_EquipInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_EquipInventoryComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
