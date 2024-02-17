// Copyright Epic Games, Inc. All Rights Reserved.

#include "DGMA_TestGameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"



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
	auto const PlayerBuildWidget = CreateWidget<UUserWidget>(GetWorld(), BuildTowerWidgetClass);
	if (PlayerBuildWidget)
	{
		PlayerBuildWidget->AddToViewport();
		UE_LOG(LogTemp, Warning, TEXT("Create"))
	}else
	{
		UE_LOG(LogTemp, Warning, TEXT("No create"))
	}
}

void ADGMA_TestGameMode::CreateGameSession()
{
	//Called when pressed 1 key
	
}



