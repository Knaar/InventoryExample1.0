// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBUI_Inventory/EquipIntarface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipIntarface() {}
// Cross Module References
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UEquipIntarface_NoRegister();
	GBUI_INVENTORY_API UClass* Z_Construct_UClass_UEquipIntarface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GBUI_Inventory();
// End Cross Module References
	void UEquipIntarface::StaticRegisterNativesUEquipIntarface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipIntarface);
	UClass* Z_Construct_UClass_UEquipIntarface_NoRegister()
	{
		return UEquipIntarface::StaticClass();
	}
	struct Z_Construct_UClass_UEquipIntarface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipIntarface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GBUI_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipIntarface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "EquipIntarface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipIntarface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEquipIntarface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipIntarface_Statics::ClassParams = {
		&UEquipIntarface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipIntarface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipIntarface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipIntarface()
	{
		if (!Z_Registration_Info_UClass_UEquipIntarface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipIntarface.OuterSingleton, Z_Construct_UClass_UEquipIntarface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipIntarface.OuterSingleton;
	}
	template<> GBUI_INVENTORY_API UClass* StaticClass<UEquipIntarface>()
	{
		return UEquipIntarface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipIntarface);
	struct Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipIntarface, UEquipIntarface::StaticClass, TEXT("UEquipIntarface"), &Z_Registration_Info_UClass_UEquipIntarface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipIntarface), 426137823U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_13594673(TEXT("/Script/GBUI_Inventory"),
		Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GBUI_Inventory_Source_GBUI_Inventory_EquipIntarface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
