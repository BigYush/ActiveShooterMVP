// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"

void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();

	UBoxComponent* SpringArmCollisonComponent = nullptr;
	TArray<USceneComponent*> AllBoxComponents;
	GetComponents(AllBoxComponents);

	for (USceneComponent* Value : AllBoxComponents)
	{
		if(Value->GetName() == "SpringArmCollison")
		{
			SpringArmCollisonComponent = Cast<UBoxComponent>(Value);
		}
	}

	if(IsValid(SpringArmCollisonComponent))
	{
		SpringArmCollisonComponent-> OnComponentBeginOverlap.AddDynamic(this, &AEnemyBase::OnBoxBeginOverlap);
		UE_LOG(LogTemp, Warning, TEXT("Spring Arm Collision is valid"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Spring Arm Collision is null"));
	}
}

void AEnemyBase::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Spring Arm Collision Works"));

	UActorComponent* SpringArmComponentActor = GetComponentByClass(USpringArmComponent::StaticClass()); //UActorComponent Parent Type of SpringArmComponent
	USpringArmComponent* SpringArmComponent = Cast<USpringArmComponent>(SpringArmComponentActor);

	if(IsValid(SpringArmComponent))
	{
		SpringArmComponent->AddLocalRotation(FRotator(0.f, 90.f, 0.f));
	}
	UE_LOG(LogTemp, Warning, TEXT("Spring Arm Rotation %s"), *SpringArmComponent->GetComponentRotation().ToString());
}
