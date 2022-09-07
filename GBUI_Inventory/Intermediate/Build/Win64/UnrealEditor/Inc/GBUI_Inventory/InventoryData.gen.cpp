// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBUI_Inventory/InventoryData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryData() {}
// Cross Module References
	GBUI_INVENTORY_API UEnum* Z_Construct_UEnum_GBUI_Inventory_EItemType();
	UPackage* Z_Construct_UPackage__Script_GBUI_Inventory();
	GBUI_INVENTORY_API UEnum* Z_Construct_UEnum_GBUI_Inventory_EItemRarity();
	GBUI_INVENTORY_API UEnum* Z_Construct_UEnum_GBUI_Inventory_EEquipSlot();
	GBUI_INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	GBUI_INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotInfo();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GBUI_Inventory_EItemType, Z_Construct_UPackage__Script_GBUI_Inventory(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> GBUI_INVENTORY_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_GBUI_Inventory_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GBUI_Inventory_EItemType_Statics::Enumerators[] = {
		{ "EItemType::It_Misc", (int64)EItemType::It_Misc },
		{ "EItemType::It_Currency", (int64)EItemType::It_Currency },
		{ "EItemType::It_Equip", (int64)EItemType::It_Equip },
		{ "EItemType::It_Consumable", (int64)EItemType::It_Consumable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GBUI_Inventory_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "It_Consumable.Name", "EItemType::It_Consumable" },
		{ "It_Currency.Name", "EItemType::It_Currency" },
		{ "It_Equip.Name", "EItemType::It_Equip" },
		{ "It_Misc.Name", "EItemType::It_Misc" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GBUI_Inventory_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GBUI_Inventory,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_GBUI_Inventory_EItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GBUI_Inventory_EItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GBUI_Inventory_EItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GBUI_Inventory_EItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GBUI_Inventory_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_GBUI_Inventory_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemRarity;
	static UEnum* EItemRarity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemRarity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemRarity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GBUI_Inventory_EItemRarity, Z_Construct_UPackage__Script_GBUI_Inventory(), TEXT("EItemRarity"));
		}
		return Z_Registration_Info_UEnum_EItemRarity.OuterSingleton;
	}
	template<> GBUI_INVENTORY_API UEnum* StaticEnum<EItemRarity>()
	{
		return EItemRarity_StaticEnum();
	}
	struct Z_Construct_UEnum_GBUI_Inventory_EItemRarity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GBUI_Inventory_EItemRarity_Statics::Enumerators[] = {
		{ "EItemRarity::Ir_Common", (int64)EItemRarity::Ir_Common },
		{ "EItemRarity::Ir_Rare", (int64)EItemRarity::Ir_Rare },
		{ "EItemRarity::Ir_Epic", (int64)EItemRarity::Ir_Epic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GBUI_Inventory_EItemRarity_Statics::Enum_MetaDataParams[] = {
		{ "Ir_Common.Name", "EItemRarity::Ir_Common" },
		{ "Ir_Epic.Name", "EItemRarity::Ir_Epic" },
		{ "Ir_Rare.Name", "EItemRarity::Ir_Rare" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GBUI_Inventory_EItemRarity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GBUI_Inventory,
		nullptr,
		"EItemRarity",
		"EItemRarity",
		Z_Construct_UEnum_GBUI_Inventory_EItemRarity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GBUI_Inventory_EItemRarity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GBUI_Inventory_EItemRarity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GBUI_Inventory_EItemRarity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GBUI_Inventory_EItemRarity()
	{
		if (!Z_Registration_Info_UEnum_EItemRarity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemRarity.InnerSingleton, Z_Construct_UEnum_GBUI_Inventory_EItemRarity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemRarity.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEquipSlot;
	static UEnum* EEquipSlot_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEquipSlot.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEquipSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GBUI_Inventory_EEquipSlot, Z_Construct_UPackage__Script_GBUI_Inventory(), TEXT("EEquipSlot"));
		}
		return Z_Registration_Info_UEnum_EEquipSlot.OuterSingleton;
	}
	template<> GBUI_INVENTORY_API UEnum* StaticEnum<EEquipSlot>()
	{
		return EEquipSlot_StaticEnum();
	}
	struct Z_Construct_UEnum_GBUI_Inventory_EEquipSlot_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GBUI_Inventory_EEquipSlot_Statics::Enumerators[] = {
		{ "EEquipSlot::Es_Head", (int64)EEquipSlot::Es_Head },
		{ "EEquipSlot::Es_LeftArm", (int64)EEquipSlot::Es_LeftArm },
		{ "EEquipSlot::Es_RightArm", (int64)EEquipSlot::Es_RightArm },
		{ "EEquipSlot::Es_Body", (int64)EEquipSlot::Es_Body },
		{ "EEquipSlot::Es_LeftLeg", (int64)EEquipSlot::Es_LeftLeg },
		{ "EEquipSlot::Es_RightLeg", (int64)EEquipSlot::Es_RightLeg },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GBUI_Inventory_EEquipSlot_Statics::Enum_MetaDataParams[] = {
		{ "Es_Body.Name", "EEquipSlot::Es_Body" },
		{ "Es_Head.Name", "EEquipSlot::Es_Head" },
		{ "Es_LeftArm.Name", "EEquipSlot::Es_LeftArm" },
		{ "Es_LeftLeg.Name", "EEquipSlot::Es_LeftLeg" },
		{ "Es_RightArm.Name", "EEquipSlot::Es_RightArm" },
		{ "Es_RightLeg.Name", "EEquipSlot::Es_RightLeg" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GBUI_Inventory_EEquipSlot_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GBUI_Inventory,
		nullptr,
		"EEquipSlot",
		"EEquipSlot",
		Z_Construct_UEnum_GBUI_Inventory_EEquipSlot_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GBUI_Inventory_EEquipSlot_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GBUI_Inventory_EEquipSlot_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GBUI_Inventory_EEquipSlot_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GBUI_Inventory_EEquipSlot()
	{
		if (!Z_Registration_Info_UEnum_EEquipSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEquipSlot.InnerSingleton, Z_Construct_UEnum_GBUI_Inventory_EEquipSlot_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEquipSlot.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInventoryItemInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventoryItemInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemInfo;
class UScriptStruct* FInventoryItemInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemInfo, Z_Construct_UPackage__Script_GBUI_Inventory(), TEXT("InventoryItemInfo"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemInfo.OuterSingleton;
}
template<> GBUI_INVENTORY_API UScriptStruct* StaticStruct<FInventoryItemInfo>()
{
	return FInventoryItemInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInventoryItemInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Rare_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rare_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Rare;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EquipSlot_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipSlot_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Intelligence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xd0\xa1\xd1\x82\xd0\xb0\xd1\x82\xd0\xb8\xd1\x87\n" },
		{ "ModuleRelativePath", "InventoryData.h" },
		{ "ToolTip", "\xd0\xa1\xd1\x82\xd0\xb0\xd1\x82\xd0\xb8\xd1\x87" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Type), Z_Construct_UEnum_GBUI_Inventory_EItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type_MetaData)) }; // 1243219285
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rare_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rare_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rare = { "Rare", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Rare), Z_Construct_UEnum_GBUI_Inventory_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rare_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rare_MetaData)) }; // 439065975
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSlot_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSlot = { "EquipSlot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, EquipSlot), Z_Construct_UEnum_GBUI_Inventory_EEquipSlot, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSlot_MetaData)) }; // 693636913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Armor), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Armor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Intelligence_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Intelligence = { "Intelligence", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Intelligence), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Intelligence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Intelligence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rare_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rare,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSlot_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Armor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Intelligence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBUI_Inventory,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"InventoryItemInfo",
		sizeof(FInventoryItemInfo),
		alignof(FInventoryItemInfo),
		Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_InventoryItemInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemInfo.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InventoryItemInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInventorySlotInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventorySlotInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventorySlotInfo;
class UScriptStruct* FInventorySlotInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventorySlotInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventorySlotInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventorySlotInfo, Z_Construct_UPackage__Script_GBUI_Inventory(), TEXT("InventorySlotInfo"));
	}
	return Z_Registration_Info_UScriptStruct_InventorySlotInfo.OuterSingleton;
}
template<> GBUI_INVENTORY_API UScriptStruct* StaticStruct<FInventorySlotInfo>()
{
	return FInventorySlotInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInventorySlotInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xd0\x94\xd0\xb8\xd0\xbd\xd0\xb0\xd0\xbc\xd0\xb8\xd1\x87\xd0\xbd\xd1\x8b\xd0\xb9 \xd1\x81\xd1\x82\xd1\x80\xd1\x83\xd0\xba\xd1\x82\n" },
		{ "ModuleRelativePath", "InventoryData.h" },
		{ "ToolTip", "\xd0\x94\xd0\xb8\xd0\xbd\xd0\xb0\xd0\xbc\xd0\xb8\xd1\x87\xd0\xbd\xd1\x8b\xd0\xb9 \xd1\x81\xd1\x82\xd1\x80\xd1\x83\xd0\xba\xd1\x82" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventorySlotInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_SlotId_MetaData[] = {
		{ "Category", "InventorySlotInfo" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotInfo, SlotId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_SlotId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_SlotId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "InventorySlotInfo" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotInfo, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_SlotId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Count,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GBUI_Inventory,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"InventorySlotInfo",
		sizeof(FInventorySlotInfo),
		alignof(FInventorySlotInfo),
		Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_InventorySlotInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventorySlotInfo.InnerSingleton, Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InventorySlotInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryData_h_Statics::EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1243219285U) },
		{ EItemRarity_StaticEnum, TEXT("EItemRarity"), &Z_Registration_Info_UEnum_EItemRarity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 439065975U) },
		{ EEquipSlot_StaticEnum, TEXT("EEquipSlot"), &Z_Registration_Info_UEnum_EEquipSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 693636913U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryData_h_Statics::ScriptStructInfo[] = {
		{ FInventoryItemInfo::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewStructOps, TEXT("InventoryItemInfo"), &Z_Registration_Info_UScriptStruct_InventoryItemInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemInfo), 999441329U) },
		{ FInventorySlotInfo::StaticStruct, Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewStructOps, TEXT("InventorySlotInfo"), &Z_Registration_Info_UScriptStruct_InventorySlotInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventorySlotInfo), 161145044U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryData_h_2832488066(TEXT("/Script/GBUI_Inventory"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
