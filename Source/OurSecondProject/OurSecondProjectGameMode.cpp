// Copyright Epic Games, Inc. All Rights Reserved.

#include "OurSecondProjectGameMode.h"
#include "OurSecondProjectBall.h"

AOurSecondProjectGameMode::AOurSecondProjectGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = AOurSecondProjectBall::StaticClass();
}
