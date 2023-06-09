// Copyright Epic Games, Inc. All Rights Reserved.

#include "MarcusGameMode.h"
#include "MarcusCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMarcusGameMode::AMarcusGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
