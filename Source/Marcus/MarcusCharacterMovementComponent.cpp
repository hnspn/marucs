// Fill out your copyright notice in the Description page of Project Settings.


#include "MarcusCharacterMovementComponent.h"

FVector UMarcusCharacterMovementComponent::NewFallVelocity(const FVector& InitialVelocity, const FVector& Gravity, float DeltaTime) const
{
	return UCharacterMovementComponent::NewFallVelocity(InitialVelocity, GravityDirection, DeltaTime);
}