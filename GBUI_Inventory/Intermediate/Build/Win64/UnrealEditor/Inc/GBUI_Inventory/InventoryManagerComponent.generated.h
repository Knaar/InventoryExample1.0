// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventoryComponent;
#ifdef GBUI_INVENTORY_InventoryManagerComponent_generated_h
#error "InventoryManagerComponent.generated.h already included, missing '#pragma once' in InventoryManagerComponent.h"
#endif
#define GBUI_INVENTORY_InventoryManagerComponent_generated_h

#define FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_SPARSE_DATA
#define FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execInit2);


#define FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execInit2);


#define FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryManagerComponent(); \
	friend struct Z_Construct_UClass_UInventoryManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GBUI_Inventory"), NO_API) \
	DECLARE_SERIALIZER(UInventoryManagerComponent)


#define FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryManagerComponent(); \
	friend struct Z_Construct_UClass_UInventoryManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GBUI_Inventory"), NO_API) \
	DECLARE_SERIALIZER(UInventoryManagerComponent)


#define FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryManagerComponent(UInventoryManagerComponent&&); \
	NO_API UInventoryManagerComponent(const UInventoryManagerComponent&); \
public:


#define FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryManagerComponent(UInventoryManagerComponent&&); \
	NO_API UInventoryManagerComponent(const UInventoryManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryManagerComponent)


#define FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_15_PROLOG
#define FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_SPARSE_DATA \
	FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_RPC_WRAPPERS \
	FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_INCLASS \
	FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_SPARSE_DATA \
	FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GBUI_INVENTORY_API UClass* StaticClass<class UInventoryManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GBUI_Inventory_Source_GBUI_Inventory_InventoryManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
