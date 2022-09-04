// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryManagerComponent.h"

#include "InventoryComponent.h"

UInventoryManagerComponent::UInventoryManagerComponent()
{
	
	PrimaryComponentTick.bCanEverTick = true;
	
}

void UInventoryManagerComponent::Init(UInventoryComponent* InInventoryComponent)
{
	if(InInventoryComponent&&ItemsData&&InventoryWidgetClass)
	{
		LocalInventoryComponent=InInventoryComponent;
		
		InventoryWidget=CreateWidget<UInventoryWidget>(GetWorld(),InventoryWidgetClass);
		InventoryWidget->AddToViewport();

		InventoryWidget->Init(FMath::Max(MinInventorySize,LocalInventoryComponent->GetItemsNum()));
		InventoryWidget->OnItemDrop.AddUObject(this, &ThisClass::OnItemDropFunc);
/*
		for (const auto& [SlotIndex,SlotInfo]:LocalInventoryComponent->GetItems())
		{
			if (auto*Data=GetItemData(SlotInfo.SlotId))
			{
				InventoryWidget->AddItem(SlotInfo,*Data,SlotIndex);
			}
		}
*/
		
		for(const auto& Item:LocalInventoryComponent->GetItems())
		{
			if(auto*Data=GetItemData(Item.Value.SlotId))
			{
				InventoryWidget->AddItem(Item.Value,*Data,Item.Key);
			}
		}
		
	}
}

const FInventoryItemInfo* UInventoryManagerComponent::GetItemData(const FName& InId) const
{
	return ItemsData?ItemsData->FindRow<FInventoryItemInfo>(InId,""):nullptr;
}

void UInventoryManagerComponent::OnItemDropFunc(UInventoryCellWidget* From, UInventoryCellWidget* To)
{
	FInventorySlotInfo FromItem = From->GetItem();
	FInventorySlotInfo ToItem=To->GetItem();

	From->Clear();
	To->Clear();

	To->AddItem(FromItem,*GetItemData(FromItem.SlotId));
	if(!ToItem.SlotId.IsNone())
	{
		From->AddItem(ToItem,*GetItemData(ToItem.SlotId));
	}
}


