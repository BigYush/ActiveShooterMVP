// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameFramework/Character.h"
#include "AnimInstance_Player.generated.h"

/**
 * 
 */
UCLASS()
class ACTIVESHOOTER_API UAnimInstance_Player : public UAnimInstance
{
	GENERATED_BODY()

public:

protected:

	UFUNCTION(BlueprintCallable)
		void UpdateAnimationProperties();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		bool IsAirborn = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		bool IsCrouching = false;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		bool IsActingDead = false;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		bool IsCrawling = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		bool IsDead = false;
private:
	
};
