// Copyright Epic Games, Inc. All Rights Reserved.

#include "HW061GameMode.h"
#include "HW061Character.h"
#include "UObject/ConstructorHelpers.h"

AHW061GameMode::AHW061GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
