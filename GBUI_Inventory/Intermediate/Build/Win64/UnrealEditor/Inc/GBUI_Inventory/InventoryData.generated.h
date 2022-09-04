// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GBUI_INVENTORY_InventoryData_generated_h
#error "InventoryData.generated.h already included, missing '#pragma once' in InventoryData.h"
#endif
#define GBUI_INVENTORY_InventoryData_generated_h

#define FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryData_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItemInfo_Statics; \
	GBUI_INVENTORY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> GBUI_INVENTORY_API UScriptStruct* StaticStruct<struct FInventoryItemInfo>();

#define FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryData_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventorySlotInfo_Statics; \
	GBUI_INVENTORY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> GBUI_INVENTORY_API UScriptStruct* StaticStruct<struct FInventorySlotInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryData_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::It_Misc) \
	op(EItemType::It_Currency) \
	op(EItemType::It_Equip) \
	op(EItemType::It_Consumable) 

enum class EItemType : uint8;
template<> GBUI_INVENTORY_API UEnum* StaticEnum<EItemType>();

#define FOREACH_ENUM_EITEMRARITY(op) \
	op(EItemRarity::Ir_Common) \
	op(EItemRarity::Ir_Rare) \
	op(EItemRarity::Ir_Epic) 

enum class EItemRarity : uint8;
template<> GBUI_INVENTORY_API UEnum* StaticEnum<EItemRarity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
