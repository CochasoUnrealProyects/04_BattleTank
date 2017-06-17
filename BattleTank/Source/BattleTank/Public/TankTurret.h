// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent)) //, HideCategories = ("Collision")
class BATTLETANK_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	//-1 is max downward movement and +1 is max up movement.
	void Rotate(float RelativeSpeed);

private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxDegreesPerSecond = 25;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxRotationDegrees = 140;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MinRotationDegrees = -140;

};
