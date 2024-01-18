// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DGMA_TestGameMode.generated.h"

UCLASS(minimalapi)
class ADGMA_TestGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADGMA_TestGameMode();


protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BuildMenu")
	TSubclassOf<UUserWidget> BuildTowerWidgetClass;

	virtual void BeginPlay() override;	
};
