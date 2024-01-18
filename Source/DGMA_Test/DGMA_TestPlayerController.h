// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DGMA_TestPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

/**
 *
 */
UCLASS()
class DGMA_TEST_API ADGMA_TestPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:




protected:

	virtual void BeginPlay() override;

	// End Actor interface
};