// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerEnemyBase.h"

// Sets default values
APlayerEnemyBase::APlayerEnemyBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerEnemyBase::PullTrigger()
{
}

// Called every frame
void APlayerEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


