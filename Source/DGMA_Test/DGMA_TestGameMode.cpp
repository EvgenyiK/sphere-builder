// Copyright Epic Games, Inc. All Rights Reserved.

#include "DGMA_TestGameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "UI/BuildTowerWidget.h"


ADGMA_TestGameMode::ADGMA_TestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(
		TEXT("/Game/FirstPerson/Blueprints/BP_PlayerPawn"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
}

void ADGMA_TestGameMode::BeginPlay()
{
	Super::BeginPlay();
	auto BuildWidget = CreateWidget<UUserWidget>(GetWorld(), BuildTowerWidgetClass);
	if (BuildWidget)
	{
		BuildWidget->AddToViewport();
	}
}
