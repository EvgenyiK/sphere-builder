// Copyright Epic Games, Inc. All Rights Reserved.


#include "DGMA_TestPlayerController.h"
#include "DGMA_Test\UI\BuildTowerWidget.h"



void ADGMA_TestPlayerController::BeginPlay()
{
	Super::BeginPlay();
	MyBuildTowerInterface = CreateWidget<UBuildTowerWidget>(this, UBuildTowerWidget::StaticClass());
	MyBuildTowerInterface->AddToViewport(9999);
}
