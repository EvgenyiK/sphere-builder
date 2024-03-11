// Fill out your copyright notice in the Description page of Project Settings.


#include "MySpectatorPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/WidgetComponent.h"
#include "DGMA_Test/UI/BuildTowerWidget.h"


AMySpectatorPawn::AMySpectatorPawn()
{
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(GetRootComponent());
	FollowCamera->bUsePawnControlRotation = true;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(FollowCamera);

	BuildWidget = CreateDefaultSubobject<UBuildTowerWidget>(TEXT("OverHeadWidget"));
}

void AMySpectatorPawn::BeginPlay()
{
	Super::BeginPlay();
}

void AMySpectatorPawn::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AMySpectatorPawn::SetupPlayerInputComponent(UInputComponent* UInputComponent)
{
	Super::SetupPlayerInputComponent(UInputComponent);

	InputComponent->BindAction("LineTrace", IE_Pressed, this, &AMySpectatorPawn::CheckCameraOverlap);
}

void AMySpectatorPawn::CheckCameraOverlap()
{
	auto Start = GetFollowCamera()->GetComponentLocation();
	auto End = Start + GetFollowCamera()->GetForwardVector() * 500.f;
	FHitResult HitResult;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);


	if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, Params,
	                                         FCollisionResponseParams()))
	{
		auto HitActor = HitResult.GetActor()->GetName();
		if (HitActor == FString("Floor"))
		{
			if (BuildWidget != nullptr)
			{
				BuildWidget->ShowWidget();
			}
		}
		UE_LOG(LogTemp, Warning, TEXT("Hit Actor: %s"), *HitResult.GetActor()->GetName())
	}

	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 5.f, 0, 5.f);
}
