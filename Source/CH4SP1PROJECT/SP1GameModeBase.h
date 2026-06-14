// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SP1GameModeBase.generated.h"

class ASP1PlayerState;
class ASP1PlayerController;

UCLASS()
class CH4SP1PROJECT_API ASP1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Game")
	void GenerateSecretNumbers();

	UFUNCTION(BlueprintCallable, Category = "Game")
	FString CheckAnswer(const FString& Input);

	UFUNCTION(BlueprintCallable, Category = "Game")
	void CheckGameEnd(ASP1PlayerState* PS, const FString& Result);

	UFUNCTION(BlueprintCallable, Category = "Game")
	void ResetGame();

	UPROPERTY(BlueprintReadOnly, Category = "Game")
	TArray<int32> SecretNumbers;

private:
	bool IsValidInput(const FString& Input, FString& OutError) const;
	void BroadcastGameMessage(const FString& Message);
};
