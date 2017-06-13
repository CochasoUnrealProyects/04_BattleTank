// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	ATank* MyTank = GetPlayerTank();
	if (!MyTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController cant find player tank."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController PlayerTank is: %s"), *MyTank->GetName());
	}
}

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn) { return nullptr; };
	return Cast<ATank>(PlayerPawn);
}

