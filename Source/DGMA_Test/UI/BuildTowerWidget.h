// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BuildTowerWidget.generated.h"


/**
 * 
 */
UCLASS()
class DGMA_TEST_API UBuildTowerWidget : public UUserWidget
{
	GENERATED_BODY()

	
public:
	
	void ShowWidget();
	UFUNCTION(BlueprintCallable)
	void MenuSetup(int32 NumberOfPublicConnections = 4, FString TypeOfMatch = FString(TEXT("FreeForAll")));

private:

	UPROPERTY(meta = (BindWidget))
	class UButton* HostButton;

	UPROPERTY(meta = (BindWidget))
	UButton* JoinButton;

	UFUNCTION()
	void HostButtonClicked();

	UFUNCTION()
	void JoinButtonClicked();

	void MenuTearDown();

	//The subsystem designed to handle all online session functionality
	class UMultiplayerSessionsSubsystem* MultiplayerSessionsSubsystem;

	int32 NumPublicConnections{4};
	FString MatchType{TEXT("FreeForAll")};
	
protected:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> BuildWidget;

	virtual bool Initialize() override;
	
	//void OnLevelRemovedFromWorld(ULevel* InLevel,UWorld* InWorld)?;
	virtual void NativeDestruct() override;
};
