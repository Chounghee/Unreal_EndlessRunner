// Fill out your copyright notice in the Description page of Project Settings.


#include "PickableActor_Collectable.h"

void APickableActor_Collectable::BeginPlay()
{
	Super::BeginPlay();
}

void APickableActor_Collectable::PlayerPickedUp(class ARunGame00_Player* Player)
{
	Super::PlayerPickedUp(Player);
}