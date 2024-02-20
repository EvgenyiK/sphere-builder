// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildTowerWidget.h"



void UBuildTowerWidget::ShowWidget()
{
	auto const PlayerBuildWidget = CreateWidget<UUserWidget>(GetWorld(), BuildWidget);
	if (PlayerBuildWidget)
	{
		PlayerBuildWidget->AddToViewport();
	}else
	{
		UE_LOG(LogTemp, Warning, TEXT("No create"))
	}
	
}

void UBuildTowerWidget::MenuSetup()
{
	AddToViewport();
	SetVisibility(ESlateVisibility::Visible);
	bIsFocusable = true;

	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();
		if (PlayerController)
		{
			FInputModeUIOnly InputModeData;
			InputModeData.SetWidgetToFocus(TakeWidget());
			InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(true);
		}
	}
}


