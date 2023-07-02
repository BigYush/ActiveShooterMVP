// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerEnemyBase.h"
#include "Camera/CameraComponent.h"
#include "PlayerBase.generated.h"

/**
 * 
 */
UCLASS()
class ACTIVESHOOTER_API APlayerBase : public APlayerEnemyBase
{
	GENERATED_BODY()

public:

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void BeginPlay() override;

	void Tick(float DeltaTime);

	UFUNCTION(BlueprintCallable)
	bool GetIsPlayerActingDead() const;

	bool GetIsPlayerCrawling() const;

	UFUNCTION(BlueprintCallable)
	bool GetIsPlayerDead() const;

	UFUNCTION(BlueprintCallable)
	void SetIsPlayerDead(bool isDead);

	UFUNCTION(BlueprintCallable)
	AActor* GetPlayerKiller() const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool PlayerHasKeycard = false;
	
protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float MaxWalkSpeed;

private:

	void MoveForwardBack (float AxisValue);
	void MoveRightLeft(float AxisValue);

	void Crouch();

	void Jump();
	
	void ActDead();

	void Crawl();
	bool bIsCrawl = false;

	void ActivateSwitchCamera();
	void DisableSwitchCamera();

	void Sprint();
	void StopSprinting();

	void SetCameraPositionTemporary(bool FPS_Mode);

	void PermanentlySwitchCamera();

	bool FPS_Default = false;

	UFUNCTION()
	void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);	
	
};
