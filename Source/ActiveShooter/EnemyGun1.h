// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gun.h"
#include "EnemyGun1.generated.h"

/**
 * 
 */
UCLASS()
class ACTIVESHOOTER_API AEnemyGun1 : public AGun
{
	GENERATED_BODY()

public:
	AEnemyGun1();

private:
	virtual void PullTrigger() override;

	UPROPERTY(EditAnywhere)
		UParticleSystem* MuzzleFlash;

	UPROPERTY(EditAnywhere)
		USoundBase* MuzzleSound;

	UPROPERTY(EditAnywhere)
		UParticleSystem* ImpactEffect;

	UPROPERTY(EditAnywhere)
		USoundBase* ImpactSound;

	UPROPERTY(EditAnywhere)
		float MaxRange = 1000;

	//UPROPERTY(VisibleAnywhere)
	//	UStaticMeshComponent* Mesh;

	//UPROPERTY(VisibleAnywhere)
	//	UStaticMeshComponent* ShootPoint;
};