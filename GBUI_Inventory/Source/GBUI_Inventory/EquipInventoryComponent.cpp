// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipInventoryComponent.h"

#include "EquipIntarface.h"

UEquipInventoryComponent::UEquipInventoryComponent()
{
	EquipSlotsMap.Add(0,EEquipSlot::Es_Head);
	EquipSlotsMap.Add(1,EEquipSlot::Es_LeftArm);
	EquipSlotsMap.Add(2,EEquipSlot::Es_RightArm);
	EquipSlotsMap.Add(3,EEquipSlot::Es_Body);
	EquipSlotsMap.Add(4,EEquipSlot::Es_LeftLeg);
	EquipSlotsMap.Add(5,EEquipSlot::Es_RightLeg);
}

int32 UEquipInventoryComponent::GetMaxItemAmount(int32 SlotIndex, const FInventoryItemInfo& InItem)//Сюда передаётся статическая информация о предмете
{
	EEquipSlot* EquipSlotPtr=EquipSlotsMap.Find(SlotIndex);
	/*Смотрим,чтобы слот для предмета нашелся, чтобы тип предмета был Equip
	 *И слот предмета совпал с тем, в который он должен быть помещён*/
	if (EquipSlotPtr && InItem.Type==EItemType::It_Equip&& *EquipSlotPtr==InItem.EquipSlot)
	{
		return 1;
	}
	return 0;
}

void UEquipInventoryComponent::SetItem(int32 SlotIndex, const FInventorySlotInfo& Item)
{
	
	auto* InventoryOwner=GetOwner();
	//if(!InventoryOwner->GetClass()->ImplementsInterface(UEquipIntarface::StaticClass()))
	if (!InventoryOwner->Implements<UEquipIntarface>())
	{
		Super::SetItem(SlotIndex, Item);
		return;
	}
	if (IEquipIntarface* EquipInterface= Cast<IEquipIntarface>(InventoryOwner))
	{
		EEquipSlot EquipSlot=EquipSlotsMap.FindChecked(SlotIndex);
		if(auto* ItemInfo=GetItem(SlotIndex))
		{
			EquipInterface->UnequipItem(EquipSlot,ItemInfo->SlotId);
		}

		Super::SetItem(SlotIndex, Item);

		EquipInterface->EquipItem(EquipSlot,Item.SlotId);
	}
	
}

void UEquipInventoryComponent::ClearItem(int32 SlotIndex)
{
	auto* InventoryOwner=GetOwner();
	if(!InventoryOwner->GetClass()->ImplementsInterface(UEquipIntarface::StaticClass()))
	{
		Super::ClearItem(SlotIndex);
		return;
	}
	if (IEquipIntarface* EquipInterface= Cast<IEquipIntarface>(InventoryOwner))
	{
		EEquipSlot EquipSlot=EquipSlotsMap.FindChecked(SlotIndex);
		if (auto*ItemInfo = GetItem(SlotIndex))
		{
			EquipInterface->UnequipItem(EquipSlot,ItemInfo->SlotId);
		}
		Super::ClearItem(SlotIndex);
	}
}




