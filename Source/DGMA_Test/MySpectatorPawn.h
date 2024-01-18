// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "MySpectatorPawn.generated.h"

/**
 * 
 */
UCLASS()
class DGMA_TEST_API AMySpectatorPawn : public ASpectatorPawn
{
	GENERATED_BODY()

public:
	AMySpectatorPawn();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	USceneComponent* VisibleComponent;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "TowerMenu")
	bool OpenMenu = false;
	
	void CheckCameraOverlap();

public:
	virtual void Tick( float DeltaSeconds ) override;

	virtual void SetupPlayerInputComponent(UInputComponent* UInputComponent) override;

	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	
};
