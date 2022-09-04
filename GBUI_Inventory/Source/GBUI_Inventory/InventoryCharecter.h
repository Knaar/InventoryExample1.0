// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryWidget.h"
#include "GameFramework/Character.h"
#include "InventoryCharecter.generated.h"

class UInventoryComponent;
class UInventoryManagerComponent;
UCLASS()
class GBUI_INVENTORY_API AInventoryCharecter : public ACharacter
{
	GENERATED_BODY()

public:
	AInventoryCharecter();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	UInventoryComponent* LocalInventory;

	UPROPERTY(EditDefaultsOnly)
	UInventoryManagerComponent* InventoryManager;
};
