// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Sandbox.h"
#include "SandboxGameMode.h"
#include "SandboxCharacter.h"

ASandboxGameMode::ASandboxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
