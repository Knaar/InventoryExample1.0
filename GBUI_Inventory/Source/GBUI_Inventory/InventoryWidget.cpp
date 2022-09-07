// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryWidget.h"
#include "InventoryCellWidget.h"
#include "Components/UniformGridPanel.h"


void UInventoryWidget::NativeConstruct()
{

	Super::NativeConstruct();//Вызывает блюпринтовый экземпляр функции
	for (auto* Cell :MassiveOfCellWidgets)
	{
		InitCell(Cell);
	}
}

void UInventoryWidget::Init(int32 ItemsCount)
{
	if (CellsPanel)
	{
		CellsPanel->ClearChildren();
		for (int32 i=0; i<ItemsCount; i++)
		{
			if (auto* Cell=CreateCellWidget())
			{
				Cell->IndexInInventory=i;
				CellsPanel->AddChildToUniformGrid(Cell, i/ItemsInRow, i%ItemsInRow);
			}
		}
	}
}

bool UInventoryWidget::AddItem(const FInventorySlotInfo& InSlot, const FInventoryItemInfo& Info, int32 SlotIndex)
{
	if (Info.Type==EItemType::It_Currency)
	{
		if(GoldCell)
		{
			return GoldCell->AddItem(InSlot,Info);
		}
	}
	if (CellsPanel)
	{
		UInventoryCellWidget* Found=nullptr;
		UInventoryCellWidget** FoundPtr = MassiveOfCellWidgets.FindByPredicate([&SlotIndex](UInventoryCellWidget* Cell)
			{
				return Cell && Cell->IndexInInventory==SlotIndex;
			});

		if (FoundPtr)
		{
			Found=*FoundPtr;
		}
		else
		{
			for (const auto& Cell:MassiveOfCellWidgets)
			{
				if (!Cell->HasItem())
				{
					Found=Cell;
					break;
				}
			}
		}

		if (Found)
		{
			return Found->AddItem(InSlot,Info);
		}
	}
	return false;
}

UInventoryCellWidget* UInventoryWidget::CreateCellWidget()
{
	if (CellWidgetClass)
	{
		auto* Cell=CreateWidget<UInventoryCellWidget>(this,CellWidgetClass);
		MassiveOfCellWidgets.Add(Cell);
		
		InitCell(Cell);
		
		return Cell;
	}
	return nullptr;
}

void UInventoryWidget::InitCell(UInventoryCellWidget* NewCell)
{
	if (NewCell)
	{
		NewCell->OnItemDrop.AddUObject(this, &ThisClass::OnItemDropFunc);
		NewCell->ParentInventoryWidget = this;
	}
}

void UInventoryWidget::OnItemDropFunc(UInventoryCellWidget* From, UInventoryCellWidget* To)
{
	OnItemDrop.Broadcast(From,To);
}
