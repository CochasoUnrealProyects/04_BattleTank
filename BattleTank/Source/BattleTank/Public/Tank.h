// Copyright Cochanet S.A.

#pragma once

#include "GameFramework/Pawn.h"
#include "Tank.generated.h"	//Paste new includes above

class UTankBarrel;
class AProjectile;

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

private:
	// Sets default values for this pawn's properties
	ATank();

	virtual void BeginPlay() override;

	//Local barrel reference for spawning projectile.
	UTankBarrel* Barrel = nullptr; // TODO Remove.

	double LastFireTime = 0;

public:	
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	TSubclassOf<AProjectile> ProjectileBlueprint;
	//UClass* ProjectileBlueprint;

	//TODO Remove later
	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float LaunchSpeed = 4000;

	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float ReloadTimeInSeconds = 3;

	UFUNCTION(BlueprintCallable, Category = "Firing")
	void Fire();
};
