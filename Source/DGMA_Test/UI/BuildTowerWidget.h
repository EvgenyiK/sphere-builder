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
	void MenuSetup();
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> BuildWidget;
	
};
