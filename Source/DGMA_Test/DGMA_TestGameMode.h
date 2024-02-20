// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "DGMA_TestGameMode.generated.h"


UCLASS(minimalapi)
class ADGMA_TestGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADGMA_TestGameMode();

public:
	void CreateSession(int32 NumPublicConnections, FString MatchType);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BuildMenu")
	TSubclassOf<UUserWidget> BuildTowerWidgetClass;

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void CreateGameSession();

	void OnCreateSessionComplete(FName SessionName, bool bWasSuccessful);

private:

	FOnCreateSessionCompleteDelegate CreateSessionCompleteDelegate;
	FDelegateHandle CreateSessionCompleteDelegateHandle;
};
