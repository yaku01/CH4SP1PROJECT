// Fill out your copyright notice in the Description page of Project Settings.

#include "SP1GameModeBase.h"
#include "SP1PlayerState.h"
#include "SP1PlayerController.h"
#include "GameFramework/GameState.h"

void ASP1GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	GenerateSecretNumbers();
}

void ASP1GameModeBase::GenerateSecretNumbers()
{
	SecretNumbers.Empty();

	TArray<int32> Pool;
	for (int32 i = 1; i <= 9; i++)
	{
		Pool.Add(i);
	}

	while (SecretNumbers.Num() < 3)
	{
		int32 Index = FMath::RandRange(0, Pool.Num() - 1);
		SecretNumbers.Add(Pool[Index]);
		Pool.RemoveAt(Index);
	}

	UE_LOG(LogTemp, Log, TEXT("[SP1] GenerateSecretNumbers: %d, %d, %d"),
		SecretNumbers[0], SecretNumbers[1], SecretNumbers[2]);
}

bool ASP1GameModeBase::IsValidInput(const FString& Input, FString& OutError) const
{
	if (Input.Len() != 3)
	{
		OutError = TEXT("숫자 3자리를 입력하세요.");
		return false;
	}

	TArray<int32> Digits;
	for (TCHAR Ch : Input)
	{
		if (!FChar::IsDigit(Ch))
		{
			OutError = TEXT("숫자만 입력 가능합니다.");
			return false;
		}

		int32 Digit = Ch - '0';

		if (Digit == 0)
		{
			OutError = TEXT("0은 입력할 수 없습니다.");
			return false;
		}

		if (Digits.Contains(Digit))
		{
			OutError = TEXT("중복된 숫자는 입력할 수 없습니다.");
			return false;
		}

		Digits.Add(Digit);
	}

	return true;
}

FString ASP1GameModeBase::CheckAnswer(const FString& Input)
{
	FString ValidationError;
	if (!IsValidInput(Input, ValidationError))
	{
		UE_LOG(LogTemp, Warning, TEXT("[SP1] CheckAnswer 유효성 오류: %s"), *ValidationError);
		return ValidationError;
	}

	int32 Strike = 0;
	int32 Ball = 0;

	for (int32 i = 0; i < 3; i++)
	{
		int32 InputDigit = Input[i] - '0';

		if (InputDigit == SecretNumbers[i])
		{
			Strike++;
		}
		else if (SecretNumbers.Contains(InputDigit))
		{
			Ball++;
		}
	}

	FString Result;
	if (Strike == 3)
	{
		Result = TEXT("3 Strike! 정답입니다!");
	}
	else if (Strike == 0 && Ball == 0)
	{
		Result = TEXT("OUT");
	}
	else
	{
		Result = FString::Printf(TEXT("%d Strike %d Ball"), Strike, Ball);
	}

	UE_LOG(LogTemp, Log, TEXT("[SP1] CheckAnswer - 입력: %s | 정답: %d%d%d | 결과: %s"),
		*Input,
		SecretNumbers[0], SecretNumbers[1], SecretNumbers[2],
		*Result);

	return Result;
}

void ASP1GameModeBase::CheckGameEnd(ASP1PlayerState* PS, const FString& Result)
{
	if (!PS || !GameState)
	{
		return;
	}

	if (Result.StartsWith(TEXT("3 Strike")))
	{
		FString WinMsg = FString::Printf(TEXT("[게임 종료] %s 승리!"), *PS->GetPlayerName());
		UE_LOG(LogTemp, Log, TEXT("[SP1] %s"), *WinMsg);
		BroadcastGameMessage(WinMsg);
		return;
	}

	for (APlayerState* PlayerState : GameState->PlayerArray)
	{
		ASP1PlayerState* SP1PS = Cast<ASP1PlayerState>(PlayerState);
		if (SP1PS && !SP1PS->IsFinished())
		{
			return;
		}
	}

	FString DrawMsg = TEXT("[게임 종료] 무승부! 아무도 정답을 맞추지 못했습니다.");
	UE_LOG(LogTemp, Log, TEXT("[SP1] %s"), *DrawMsg);
	BroadcastGameMessage(DrawMsg);
}

void ASP1GameModeBase::ResetGame()
{
	if (!GameState)
	{
		return;
	}

	for (APlayerState* PlayerState : GameState->PlayerArray)
	{
		ASP1PlayerState* SP1PS = Cast<ASP1PlayerState>(PlayerState);
		if (SP1PS)
		{
			SP1PS->ResetState();
		}
	}

	GenerateSecretNumbers();

	UE_LOG(LogTemp, Log, TEXT("[SP1] 게임 리셋 완료"));
}

void ASP1GameModeBase::BroadcastGameMessage(const FString& Message)
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		ASP1PlayerController* PC = Cast<ASP1PlayerController>(It->Get());
		if (PC)
		{
			PC->Multicast_ReceiveChat(Message);
			PC->Multicast_ShowResult(Message);
		}
	}
}
