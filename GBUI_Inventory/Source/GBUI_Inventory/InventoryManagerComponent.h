// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryCellWidget.h"
#include "InventoryData.h"
#include "InventoryWidget.h"
#include "Components/ActorComponent.h"
#include "Materials/MaterialExpressionInverseLinearInterpolate.h"
#include "InventoryManagerComponent.generated.h"

class UInventoryComponent;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GBUI_INVENTORY_API UInventoryManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UInventoryManagerComponent();

	//Он как раз создаёт экземпляр Инвентори компонент
	void Init(UInventoryComponent* InInventoryComponent);

	//Ищет в таблице по ID предмет, и возвращает его (имя?)
	const FInventoryItemInfo* GetItemData(const FName& InId)const;
protected:

	UPROPERTY()
	UInventoryComponent* LocalInventoryComponent;
	
	UPROPERTY(EditAnywhere)
	UDataTable* ItemsData;

	UPROPERTY(EditAnywhere)
	int32 MinInventorySize=20;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UInventoryWidget> InventoryWidgetClass;

	UPROPERTY()
	UInventoryWidget* InventoryWidget;

	void OnItemDropFunc(UInventoryCellWidget*From, UInventoryCellWidget*To);
};
