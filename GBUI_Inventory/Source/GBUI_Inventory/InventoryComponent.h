// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryData.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=("Component"), meta=(BlueprintSpawnableComponent) )
class GBUI_INVENTORY_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	//Ищет предмет в ТМар по передаваемому индексу и возвращает его
	FORCEINLINE const FInventorySlotInfo* GetItem(int32 SlotIndex){return Items.Find(SlotIndex);}

	//Задаёт предмет
	UFUNCTION()
	virtual void SetItem(int32 SlotIndex,const FInventorySlotInfo& Item);

	//Удаляет предмет
	virtual void ClearItem(int32 SlotIndex);

	//Возвращает наш ТМар
	FORCEINLINE const TMap<int32,FInventorySlotInfo>& GetItems() const {return Items;}
	
	//Возвращает количество слотов с предметами
	FORCEINLINE int32 GetItemsNum() const { return Items.Num(); }

	/*Нужен для того, чтобы вернуть, сколько предметом мы туда можем поместить(0-0,1-1,-1-бесконечно)*/
	virtual int32 GetMaxItemAmount(int32 SlotIndex,const FInventoryItemInfo& InItem);
	

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UDataTable* SlotsDataTable;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FInventorySlotInfo SlotInfo;

private:

	//TMap.В слоте может лежать предмет, а может не лежать. В качестве первого параметра идёт IndexInInventory
public:	
	UPROPERTY(BlueprintReadWrite)
	TMap<int32,FInventorySlotInfo> Items;
};
