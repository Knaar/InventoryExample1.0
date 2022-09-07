// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "InventoryData.h"


void UInventoryComponent::SetItem(int32 SlotIndex, const FInventorySlotInfo& Item)
{
	ClearItem(SlotIndex);
	Items.Add(SlotIndex,Item);
	
}

void UInventoryComponent::ClearItem(int32 SlotIndex)
{
	Items.Remove(SlotIndex);
}

int32 UInventoryComponent::GetMaxItemAmount(int32 SlotIndex, const FInventoryItemInfo& InItem)
{
	
	FInventorySlotInfo* SlotPtr=Items.Find(SlotIndex);//ищет предмет по индексу
	if (SlotPtr==nullptr||SlotPtr->SlotId==InItem.Id)//если не находит или нашли, но Id лежащего предмета и искомого совпадают
	{
		return 0;
	}
	
	return -1;//без ограничений
}


