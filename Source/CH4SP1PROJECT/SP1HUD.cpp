// Fill out your copyright notice in the Description page of Project Settings.

#include "SP1HUD.h"
#include "Blueprint/UserWidget.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"

void ASP1HUD::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("[SP1] SP1HUD BeginPlay Called"));

	if (ChatWidgetClass)
	{
		UE_LOG(LogTemp, Log, TEXT("[SP1] ChatWidgetClass is VALID"));
		ChatWidget = CreateWidget<UUserWidget>(GetWorld(), ChatWidgetClass);
		if (ChatWidget)
		{
			ChatWidget->AddToViewport();
			UE_LOG(LogTemp, Log, TEXT("[SP1] ChatWidget 생성 완료"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[SP1] ChatWidgetClass is NULL"));
	}
}

void ASP1HUD::AddChatMessage(const FString& Message)
{
	if (!ChatWidget)
	{
		return;
	}

	UScrollBox* ScrollBox = Cast<UScrollBox>(ChatWidget->GetWidgetFromName(TEXT("ChatScrollBox")));
	if (!ScrollBox)
	{
		UE_LOG(LogTemp, Warning, TEXT("[SP1] ChatScrollBox를 찾을 수 없습니다. WBP_Chat에서 이름 확인하세요."));
		return;
	}

	UTextBlock* TextBlock = NewObject<UTextBlock>(ChatWidget);
	TextBlock->SetText(FText::FromString(Message));
	ScrollBox->AddChild(TextBlock);
	ScrollBox->ScrollToEnd();
}

void ASP1HUD::ShowNoticeWidget(const FString& ResultText)
{
	NoticeResultText = ResultText;

	if (!NoticeWidget && NoticeWidgetClass)
	{
		NoticeWidget = CreateWidget<UUserWidget>(GetWorld(), NoticeWidgetClass);
	}

	if (NoticeWidget)
	{
		if (!NoticeWidget->IsInViewport())
		{
			NoticeWidget->AddToViewport(10);
		}
		NoticeWidget->SetVisibility(ESlateVisibility::Visible);
		UE_LOG(LogTemp, Log, TEXT("[SP1] NoticeWidget 표시: %s"), *ResultText);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[SP1] NoticeWidgetClass가 설정되지 않았습니다."));
	}
}
