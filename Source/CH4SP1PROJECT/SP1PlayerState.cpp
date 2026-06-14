// Fill out your copyright notice in the Description page of Project Settings.

#include "SP1PlayerState.h"
#include "Net/UnrealNetwork.h"

ASP1PlayerState::ASP1PlayerState()
{
	CurrentAttempts = 0;
	MaxAttempts = 3;
	bIsFinished = false;
}

void ASP1PlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASP1PlayerState, CurrentAttempts);
	DOREPLIFETIME(ASP1PlayerState, MaxAttempts);
	DOREPLIFETIME(ASP1PlayerState, bIsFinished);
}

void ASP1PlayerState::IncrementAttempts()
{
	CurrentAttempts++;

	if (CurrentAttempts >= MaxAttempts)
	{
		bIsFinished = true;
	}

	UE_LOG(LogTemp, Log, TEXT("[SP1] IncrementAttempts: %d / %d (Finished: %s)"),
		CurrentAttempts, MaxAttempts, bIsFinished ? TEXT("true") : TEXT("false"));
}

void ASP1PlayerState::ResetState()
{
	CurrentAttempts = 0;
	bIsFinished = false;

	UE_LOG(LogTemp, Log, TEXT("[SP1] %s PlayerState Reset"), *GetPlayerName());
}
