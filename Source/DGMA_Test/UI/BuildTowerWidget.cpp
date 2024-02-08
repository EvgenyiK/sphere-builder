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


