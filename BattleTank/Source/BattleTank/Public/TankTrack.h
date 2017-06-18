// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * Tanktrack is used to set maximun driving force, and to apply forces to the tank.
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	//Set a throttle between -1 and +1
	UFUNCTION(BlueprintCallable, Category = input)
	void SetThrottle(float Throttle);
	
	//Max force per tracks, in Newtons.
	UPROPERTY(EditDefaultsOnly)
	float  TrackMaxDrivingForce = 400000;	//Asumiendo tanque de 40t y aceleracion de 1g.
};
