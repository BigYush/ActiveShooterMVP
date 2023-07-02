// Copyright Epic Games, Inc. All Rights Reserved.

#include "ActiveShooterGameMode.h"
#include "ActiveShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AActiveShooterGameMode::AActiveShooterGameMode()
{
	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}*/
}
