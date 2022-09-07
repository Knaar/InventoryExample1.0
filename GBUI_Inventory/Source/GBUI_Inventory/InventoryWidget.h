// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "InventoryData.h"
#include "Blueprint/UserWidget.h"
#include "InventoryWidget.generated.h"

class UUniformGridPanel;
class UInventoryCellWidget;
class UInventoryComponent;

UCLASS(Abstract)
class GBUI_INVENTORY_API UInventoryWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;
	
	//Очищает ячейки, Узнаёт, сколько нужно, и создаёт через циклж
	void Init(int32 ItemsCount);

	bool AddItem(const FInventorySlotInfo& InSlot, const FInventoryItemInfo& Info, int32 SlotIndex);

	FOnItemDrop OnItemDrop;

	UPROPERTY()
	UInventoryComponent* ParentInventory;

protected:

	//Это количество предметов в строке
	UPROPERTY(EditDefaultsOnly)
	int32 ItemsInRow=5;

	//Указываем CellWidgetClass для процедурной отрисовки ячеек. CellWidgetClass мы и будем спавнить
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInventoryCellWidget>CellWidgetClass;

	//Панель для ячеек
	UPROPERTY(BlueprintReadOnly,meta=(BindWidgetOptional))
	UUniformGridPanel* CellsPanel;

	//Отдельная ячейка для золота
	UPROPERTY(BlueprintReadOnly,meta=(BindWidgetOptional))
	UInventoryCellWidget* GoldCell;

	//Массив всех ячеек, которые мы создали
	UPROPERTY(BlueprintReadWrite)
	TArray<UInventoryCellWidget*>MassiveOfCellWidgets;

	//Создаёт ячейку UInventoryCellWidget, возващает её и вызывает InitCell для добавления
	UInventoryCellWidget* CreateCellWidget();

	//Добавляет статичную ячейку
	void InitCell(UInventoryCellWidget* NewCell);

	/*Вызывает делегат в UInventoryWidget. Т.е. UInvCellWidget вызывает делегат в UInvWidget ч.з эту ф-ю
	У нас срабатывает делегат в ячейке, после этого срабатывает делегат в виджете и мы этот делегат ловим в менеджере*/
	void OnItemDropFunc(UInventoryCellWidget*From, UInventoryCellWidget*To);
};
