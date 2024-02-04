// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildTowerWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Components/PanelWidget.h"


void UBuildTowerWidget::NativeConstruct()
{
	Super::NativeConstruct();
	//bind delegate
}

bool UBuildTowerWidget::OpenMenu()
{
	const auto Controller = GetOwningPlayer();
	return Controller && Controller->GetStateName() == NAME_Spectating;
}


