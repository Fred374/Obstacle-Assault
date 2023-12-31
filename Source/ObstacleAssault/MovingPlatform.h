// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Moves the platform based on DeltaTime
	virtual void MovePlatform(float DeltaTime);
	virtual void RotatePlatform(float DeltaTime);

	UPROPERTY(EditAnywhere, Category="Moving Platform")
	FVector PlatformVelocity = FVector(0, 0, 0);
	UPROPERTY(EditAnywhere, Category="Moving Platform")
	FRotator PlatformRadialVelocity = FRotator(0, 0, 0);
	UPROPERTY(EditAnywhere, Category="Moving Platform")
	float MoveDistance = 0;
	float Distance = 0.0;
	FVector StartLocation;
	
};
