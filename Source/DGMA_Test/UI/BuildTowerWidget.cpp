// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildTowerWidget.h"



void UBuildTowerWidget::ShowWidget()
{
	SetDisplayLabel("Create");
}

void UBuildTowerWidget::NativeDestruct()
{
	RemoveFromParent();
	Super::NativeDestruct();
}


