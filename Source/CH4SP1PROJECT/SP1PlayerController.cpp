// Fill out your copyright notice in the Description page of Project Settings.

#include "SP1PlayerController.h"
#include "SP1GameModeBase.h"
#include "SP1PlayerState.h"
#include "SP1HUD.h"
#include "GameFramework/GameModeBase.h"

void ASP1PlayerController::BeginPlay()
{
	Super::BeginPlay();

	bShowMouseCursor = true;

	FInputModeGameAndUI InputMode;
	InputMode.SetHideCursorDuringCapture(false);
	SetInputMode(InputMode);
}

void ASP1PlayerController::Server_SendChat_Implementation(const FString& Message)
{
	ASP1PlayerState* PS = GetPlayerState<ASP1PlayerState>();
	if (!PS)
	{
		return;
	}

	if (PS->GetCurrentAttempts() >= PS->GetMaxAttempts())
	{
		UE_LOG(LogTemp, Warning, TEXT("[SP1] %s - 기회 소진으로 입력 차단"), *PS->GetPlayerName());
		return;
	}

	ASP1GameModeBase* GM = GetWorld()->GetAuthGameMode<ASP1GameModeBase>();
	if (!GM)
	{
		return;
	}

	FString Result = GM->CheckAnswer(Message);

	PS->IncrementAttempts();

	FString ChatMessage = FString::Printf(TEXT("[%s] %s → %s [%d/%d]"),
		*PS->GetPlayerName(),
		*Message,
		*Result,
		PS->GetCurrentAttempts(),
		PS->GetMaxAttempts());

	UE_LOG(LogTemp, Log, TEXT("[SP1] Server_SendChat: %s"), *ChatMessage);

	Multicast_ReceiveChat(ChatMessage);

	GM->CheckGameEnd(PS, Result);
}

void ASP1PlayerController::Multicast_ReceiveChat_Implementation(const FString& ChatMessage)
{
	UE_LOG(LogTemp, Log, TEXT("[SP1] Multicast_ReceiveChat: %s"), *ChatMessage);

	ASP1HUD* HUD = GetHUD<ASP1HUD>();
	if (HUD)
	{
		HUD->AddChatMessage(ChatMessage);
	}
}

void ASP1PlayerController::Multicast_ShowResult_Implementation(const FString& ResultText)
{
	UE_LOG(LogTemp, Log, TEXT("[SP1] Multicast_ShowResult: %s"), *ResultText);

	ASP1HUD* HUD = GetHUD<ASP1HUD>();
	if (HUD)
	{
		HUD->ShowNoticeWidget(ResultText);
	}
}
