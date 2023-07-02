// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerEnemyBase.generated.h"

UCLASS()
class ACTIVESHOOTER_API APlayerEnemyBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerEnemyBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PullTrigger();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	bool PlayerDead = false;	
	AActor* PlayerKiller = nullptr;

	bool PlayerActingDead = false;
};
