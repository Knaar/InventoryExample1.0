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
		InventoryWidget->ParentInventory=InInventoryComponent;

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

void UInventoryManagerComponent::InitEquip(UInventoryComponent* InInventoryComponent)
{
	if (InInventoryComponent&&EquipWidgetClass)
	{
		EquipWidget=CreateWidget<UInventoryWidget>(GetWorld(),EquipWidgetClass);
		EquipWidget->ParentInventory=InInventoryComponent;
		EquipWidget->OnItemDrop.AddUObject(this,&ThisClass::OnItemDropFunc);
		EquipWidget->AddToViewport();
	}
}

const FInventoryItemInfo* UInventoryManagerComponent::GetItemData(const FName& InId) const
{
	return ItemsData?ItemsData->FindRow<FInventoryItemInfo>(InId,""):nullptr;
}

void UInventoryManagerComponent::OnItemDropFunc(UInventoryCellWidget* From, UInventoryCellWidget* To)
{
	/*
	FInventorySlotInfo FromItem = From->GetItem();
	FInventorySlotInfo ToItem=To->GetItem();

	From->Clear();
	To->Clear();

	To->AddItem(FromItem,*GetItemData(FromItem.SlotId));
	if(!ToItem.SlotId.IsNone())
	{
		From->AddItem(ToItem,*GetItemData(ToItem.SlotId));
	}
	*/
	if (From == nullptr || To == nullptr)
	{
		return;
	}
	//Позволяет выяснить из какого и в какой инвентарь что летит
	auto* FromInventory = From->GetParentInventory();
	auto* ToInventory = To->GetParentInventory();

	if (FromInventory == nullptr || ToInventory == nullptr)
	{
		return;
	}

	//Ищем в начальной ячейке предмет
	const FInventorySlotInfo FromItem = From->GetItem();
	if (FromItem.Count == 0)//если предмета нет
	{
		return;
	}
	
	const FInventorySlotInfo ToItem=To->GetItem();//кешируем предмет из конечной ячейки
	const FInventoryItemInfo* FromInfo = GetItemData (FromItem.SlotId);//Берём статическую информацию о предмете из начальной ячейки

	//В инвентаре, в который мы пытаемся поместить, мы спрашиваем, можем ли мы его поместить
	const int32 ToItemAmount = ToInventory->GetMaxItemAmount(To->IndexInInventory, *FromInfo);
	if (ToItemAmount==0)//если ноль-значит, не можем
	{
		return;
	}
	//Кешируем начальную и конечную ячейки и меняем их местами
	FInventorySlotInfo NewFromItem=ToItem;
	FInventorySlotInfo NewToItem=FromItem;

	//Если вместимость по предметам ограничена
	if (ToItemAmount > 0)
	{
		NewToItem.Count = FMath::Max(ToItemAmount,FromItem.Count);
		if (FromItem.Count <= NewToItem.Count)
		{
			NewFromItem.SlotId = NewToItem.SlotId;
			NewFromItem.Count = FromItem.Count - NewToItem.Count;
		}
	}
	//Получаем Статическую информацию о предмете, который положим в начальную ячейку
	const FInventoryItemInfo* NewFromInfo=NewFromItem.Count>0? GetItemData(NewFromItem.SlotId) : nullptr;
	const FInventoryItemInfo* NewToInfo=GetItemData(NewToItem.SlotId);

	//Чистим начальную ячейку
	From->Clear();
	if(NewFromInfo)
	{
		From->AddItem(NewFromItem,*NewFromInfo);
	}
	//Чистим кончную ячейку и добавляем в неё
	To->Clear();
	To->AddItem(NewToItem, *NewToInfo);

	FromInventory->SetItem(From->IndexInInventory, NewFromItem);
	ToInventory->SetItem(To->IndexInInventory,NewToItem);
	
	
}


