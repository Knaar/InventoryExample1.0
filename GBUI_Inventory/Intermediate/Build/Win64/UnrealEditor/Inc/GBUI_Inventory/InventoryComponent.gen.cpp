// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBUI_Inventory/InventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}
// Cross Module References
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UInventoryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GBUI_Inventory();
	GBUI_INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotInfo();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryComponent::execSetItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_STRUCT_REF(FInventorySlotInfo,Z_Param_Out_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItem(Z_Param_SlotIndex,Z_Param_Out_Item);
		P_NATIVE_END;
	}
	void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
	{
		UClass* Class = UInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetItem", &UInventoryComponent::execSetItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryComponent_SetItem_Statics
	{
		struct InventoryComponent_eventSetItem_Parms
		{
			int32 SlotIndex;
			FInventorySlotInfo Item;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventSetItem_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventSetItem_Parms, Item), Z_Construct_UScriptStruct_FInventorySlotInfo, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::NewProp_Item_MetaData)) }; // 161145044
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xd0\x97\xd0\xb0\xd0\xb4\xd0\xb0\xd1\x91\xd1\x82 \xd0\xbf\xd1\x80\xd0\xb5\xd0\xb4\xd0\xbc\xd0\xb5\xd1\x82\n" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
		{ "ToolTip", "\xd0\x97\xd0\xb0\xd0\xb4\xd0\xb0\xd1\x91\xd1\x82 \xd0\xbf\xd1\x80\xd0\xb5\xd0\xb4\xd0\xbc\xd0\xb5\xd1\x82" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SetItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::InventoryComponent_eventSetItem_Parms), Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_SetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponent);
	UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
	{
		return UInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotsDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotsDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Items_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GBUI_Inventory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_SetItem, "SetItem" }, // 3799199
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Component" },
		{ "IncludePath", "InventoryComponent.h" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SlotsDataTable_MetaData[] = {
		{ "Category", "InventoryComponent" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SlotsDataTable = { "SlotsDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, SlotsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SlotsDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SlotsDataTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SlotInfo_MetaData[] = {
		{ "Category", "InventoryComponent" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SlotInfo = { "SlotInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, SlotInfo), Z_Construct_UScriptStruct_FInventorySlotInfo, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SlotInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SlotInfo_MetaData)) }; // 161145044
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Items_ValueProp = { "Items", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FInventorySlotInfo, METADATA_PARAMS(nullptr, 0) }; // 161145044
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Items_Key_KeyProp = { "Items_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "InventoryComponent" },
		{ "ModuleRelativePath", "InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, Items), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Items_MetaData)) }; // 161145044
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SlotsDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SlotInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Items_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Items_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Items,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
		&UInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryComponent()
	{
		if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
	}
	template<> GBUI_INVENTORY_API UClass* StaticClass<UInventoryComponent>()
	{
		return UInventoryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
	struct Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 3188673430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryComponent_h_1303840467(TEXT("/Script/GBUI_Inventory"),
		Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
