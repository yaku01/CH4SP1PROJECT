// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SP1PlayerController.generated.h"

UCLASS()
class CH4SP1PROJECT_API ASP1PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "Game")
	void Server_SendChat(const FString& Message);

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, Category = "Game")
	void Multicast_ReceiveChat(const FString& ChatMessage);

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, Category = "Game")
	void Multicast_ShowResult(const FString& ResultText);
};
