// Fill out your copyright notice in the Description page of Project Settings.


#include "PatrickRock.h"

// Sets default values
APatrickRock::APatrickRock()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APatrickRock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APatrickRock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APatrickRock::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

