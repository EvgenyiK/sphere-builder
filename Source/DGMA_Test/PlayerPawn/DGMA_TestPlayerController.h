// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DGMA_TestPlayerController.generated.h"

class UBuildTowerWidget;

/**
 *
 */
UCLASS()
class DGMA_TEST_API ADGMA_TestPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	UPROPERTY()
	UBuildTowerWidget* MyBuildTowerInterface;
};
