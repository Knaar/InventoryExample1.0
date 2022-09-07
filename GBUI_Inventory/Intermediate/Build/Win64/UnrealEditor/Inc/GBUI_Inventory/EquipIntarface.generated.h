// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GBUI_INVENTORY_EquipIntarface_generated_h
#error "EquipIntarface.generated.h already included, missing '#pragma once' in EquipIntarface.h"
#endif
#define GBUI_INVENTORY_EquipIntarface_generated_h

#define FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_SPARSE_DATA
#define FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_RPC_WRAPPERS
#define FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GBUI_INVENTORY_API UEquipIntarface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipIntarface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GBUI_INVENTORY_API, UEquipIntarface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipIntarface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GBUI_INVENTORY_API UEquipIntarface(UEquipIntarface&&); \
	GBUI_INVENTORY_API UEquipIntarface(const UEquipIntarface&); \
public:


#define FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GBUI_INVENTORY_API UEquipIntarface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GBUI_INVENTORY_API UEquipIntarface(UEquipIntarface&&); \
	GBUI_INVENTORY_API UEquipIntarface(const UEquipIntarface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GBUI_INVENTORY_API, UEquipIntarface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipIntarface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipIntarface)


#define FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEquipIntarface(); \
	friend struct Z_Construct_UClass_UEquipIntarface_Statics; \
public: \
	DECLARE_CLASS(UEquipIntarface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GBUI_Inventory"), GBUI_INVENTORY_API) \
	DECLARE_SERIALIZER(UEquipIntarface)


#define FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEquipIntarface() {} \
public: \
	typedef UEquipIntarface UClassType; \
	typedef IEquipIntarface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IEquipIntarface() {} \
public: \
	typedef UEquipIntarface UClassType; \
	typedef IEquipIntarface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_11_PROLOG
#define FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_SPARSE_DATA \
	FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_RPC_WRAPPERS \
	FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_SPARSE_DATA \
	FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GBUI_INVENTORY_API UClass* StaticClass<class UEquipIntarface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
