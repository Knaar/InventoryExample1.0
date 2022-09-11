// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EquipIntarface.h"
//#include "EquipInventoryComponent.h"
#include "InventoryWidget.h"
#include "GameFramework/Character.h"
#include "InventoryCharecter.generated.h"

class UInventoryComponent;
class UInventoryManagerComponent;
class UEquipInventoryComponent;
UCLASS()
class GBUI_INVENTORY_API AInventoryCharecter : public ACharacter, public IEquipIntarface
{
	GENERATED_BODY()

public:
	AInventoryCharecter();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	UInventoryComponent* LocalInventory;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	UInventoryComponent* LocalInventory2;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	UInventoryManagerComponent* InventoryManager;

	UPROPERTY(EditDefaultsOnly)
	UEquipInventoryComponent* EquipInventory;

	virtual void EquipItem(EEquipSlot Slot,FName ItemId) override;

	virtual void UnequipItem(EEquipSlot Slot, FName ItemId) override;

	UStaticMeshComponent* GetEquipComponent(EEquipSlot EquipSlot);

	UPROPERTY(BlueprintReadOnly)
	int32 Damage=0;
};
