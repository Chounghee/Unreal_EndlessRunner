// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickableActor_Base.generated.h"

UCLASS()
class RUNGAME00_API APickableActor_Base : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickableActor_Base();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class USoundBase* PickupSound;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, Category = PickableItem)
		class USphereComponent* CollisionComp;

	UPROPERTY(VisibleDefaultsOnly, Category = PickableItem)
		class UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleDefaultsOnly, Category = PickableItem)
		class URotatingMovementComponent* RotationComp;

	UFUNCTION()
		void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	virtual void PlayerPickedUp(class ARunGame00_Player* Player);
public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

};
