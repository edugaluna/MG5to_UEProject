// Copyright Epic Games, Inc. All Rights Reserved.

#include "MG5_EGLGameMode.h"
#include "MG5_EGLCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMG5_EGLGameMode::AMG5_EGLGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
