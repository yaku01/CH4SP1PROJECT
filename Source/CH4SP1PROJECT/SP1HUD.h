// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SP1HUD.generated.h"

class UUserWidget;

UCLASS()
class CH4SP1PROJECT_API ASP1HUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	void ShowNoticeWidget(const FString& ResultText);
	void AddChatMessage(const FString& Message);

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget> ChatWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget> NoticeWidgetClass;

	UPROPERTY(BlueprintReadOnly, Category = "UI")
	FString NoticeResultText;

protected:
	UPROPERTY()
	UUserWidget* ChatWidget;

	UPROPERTY()
	UUserWidget* NoticeWidget;
};
