// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "EquipInventoryComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent)) 
class GBUI_INVENTORY_API UEquipInventoryComponent : public UInventoryComponent
{
	GENERATED_BODY()

public:
	UEquipInventoryComponent();
	
	/*Связывает индекс слота и тип этого слота.Те 1слот-голова,2й-левая рука и тд
	 *Используем Мар для того, чтобы можно было ограничитьте предметы, которые будет надевать игрок*/
	UPROPERTY(EditAnywhere)
	TMap <int32,EEquipSlot> EquipSlotsMap;

	//Смотрит СлотИндекс, в который хочет быть добавлен предмет и узнаём, можем ли мы положить сюда предмет
	virtual int32 GetMaxItemAmount(int32 SlotIndex, const FInventoryItemInfo& InItem) override;

	virtual void SetItem(int32 SlotIndex, const FInventorySlotInfo& Item) override;

	virtual void ClearItem(int32 SlotIndex) override;
};
