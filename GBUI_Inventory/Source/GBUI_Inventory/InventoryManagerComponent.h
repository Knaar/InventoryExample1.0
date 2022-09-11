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
class UInventoryWidget;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GBUI_INVENTORY_API UInventoryManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UInventoryManagerComponent();

	//Он как раз создаёт экземпляр Инвентори компонент
	void Init(UInventoryComponent* InInventoryComponent);

	UFUNCTION(BlueprintCallable)
	void Init2(UInventoryComponent* InInventoryComponent);

	UFUNCTION(BlueprintCallable)
	void Clear(UInventoryComponent* InInventoryComponent);

	/*Тоже инициализация перемещения но для ячеек персонажа.
	 *Создаёт виджет, подписывается на делегат дропа и добавляет во вьюпорт*/
	void InitEquip(UInventoryComponent* InInventoryComponent);

	//Ищет в таблице по ID предмет, и возвращает его (имя?)
	const FInventoryItemInfo* GetItemData(const FName& InId)const;
protected:

	UPROPERTY()
	UInventoryComponent* LocalInventoryComponent;

	UPROPERTY()
	UInventoryComponent* LocalInventoryComponent2;
	
	UPROPERTY(EditAnywhere)
	UDataTable* ItemsData;

	UPROPERTY(EditAnywhere)
	int32 MinInventorySize=20;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UInventoryWidget> InventoryWidgetClass;

	UPROPERTY()
	UInventoryWidget* InventoryWidget;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UInventoryWidget> InventoryWidgetClass2;

	UPROPERTY()
	UInventoryWidget* InventoryWidget2;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UInventoryWidget> EquipWidgetClass;

	UPROPERTY()
	UInventoryWidget* EquipWidget;

	
	void OnItemDropFunc(UInventoryCellWidget*From, UInventoryCellWidget*To);
};
