// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerEnemyBase.h"
#include "EnemyBase.generated.h"

/**
 * 
 */
UCLASS()
class ACTIVESHOOTER_API AEnemyBase : public APlayerEnemyBase
{
	GENERATED_BODY()

	virtual void BeginPlay() override;

	UFUNCTION()
	void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);	
};
