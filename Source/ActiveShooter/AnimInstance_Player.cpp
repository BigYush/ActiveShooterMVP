// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance_Player.h"
#include <Kismet/GameplayStatics.h>

#include "PlayerBase.h"
#include "GameFramework/CharacterMovementComponent.h"


void UAnimInstance_Player::UpdateAnimationProperties()
{
	APawn* OwnerPawn = TryGetPawnOwner();

	if (OwnerPawn != nullptr)
	{
		ACharacter* OwnerCharacter = Cast<ACharacter>(OwnerPawn);

		if (IsValid(OwnerCharacter))
		{
			UCharacterMovementComponent* CharacterMovement = OwnerCharacter->GetCharacterMovement();

			if(IsValid(CharacterMovement))
			{
				IsAirborn = CharacterMovement->IsFalling();
				IsCrouching = CharacterMovement->bWantsToCrouch;
			}

			APlayerBase* Player = Cast<APlayerBase>(OwnerCharacter);

			IsActingDead = Player->GetIsPlayerActingDead();
			IsCrawling = Player->GetIsPlayerCrawling();
			IsDead = Player->GetIsPlayerDead();
		}
	}
}
