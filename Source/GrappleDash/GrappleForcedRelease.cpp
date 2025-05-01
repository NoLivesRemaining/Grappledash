// Fill out your copyright notice in the Description page of Project Settings.


#include "GrappleForcedRelease.h"

// Sets default values for this component's properties
UGrappleForcedRelease::UGrappleForcedRelease()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UGrappleForcedRelease::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UGrappleForcedRelease::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UpdateGrapple();

	// ...
}

void UGrappleForcedRelease::StartGrapple() {
	isHooked = true;
}
void UGrappleForcedRelease::EndGrapple() {
	CurrentHookStrength = MaxHookStrength;
	isHooked = false;
}

void UGrappleForcedRelease::UpdateGrapple() {
	if (isHooked)
	{
		CurrentHookStrength -= StrengthDrain;
		if (CurrentHookStrength <= 0)
		{
			EndGrapple();
		}
	}


}

