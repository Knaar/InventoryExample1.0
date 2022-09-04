// Copyright Epic Games, Inc. All Rights Reserved.

#include "GBUI_InventoryGameMode.h"
#include "GBUI_InventoryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGBUI_InventoryGameMode::AGBUI_InventoryGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
