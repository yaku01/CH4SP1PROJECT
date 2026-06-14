// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "Net/UnrealNetwork.h"
#include "SP1PlayerState.generated.h"

UCLASS()
class CH4SP1PROJECT_API ASP1PlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	ASP1PlayerState();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Category = "Game")
	void IncrementAttempts();

	UFUNCTION(BlueprintCallable, Category = "Game")
	void ResetState();

	UFUNCTION(BlueprintPure, Category = "Game")
	int32 GetCurrentAttempts() const { return CurrentAttempts; }

	UFUNCTION(BlueprintPure, Category = "Game")
	int32 GetMaxAttempts() const { return MaxAttempts; }

	UFUNCTION(BlueprintPure, Category = "Game")
	bool IsFinished() const { return bIsFinished; }

protected:
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game")
	int32 CurrentAttempts;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game")
	int32 MaxAttempts;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game")
	bool bIsFinished;
};
