// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryData.h"
#include "UObject/Interface.h"
#include "EquipIntarface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI,Blueprintable)
class UEquipIntarface : public UInterface
{
	GENERATED_BODY()
};

class GBUI_INVENTORY_API IEquipIntarface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void EquipItem(EEquipSlot Slot, FName ItemId){};
	virtual void UnequipItem(EEquipSlot Slot, FName ItemId){};
};
