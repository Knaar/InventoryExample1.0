// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryCharecter.h"

#include "InventoryComponent.h"
#include "InventoryManagerComponent.h"


AInventoryCharecter::AInventoryCharecter()
{
	LocalInventory=CreateDefaultSubobject<UInventoryComponent>("LocalInventory");
	InventoryManager=CreateDefaultSubobject<UInventoryManagerComponent>("InventoryManager");
}

void AInventoryCharecter::BeginPlay()
{
	Super::BeginPlay();

	InventoryManager->Init(LocalInventory);
	
}


