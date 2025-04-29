// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterPlayerController.h"
#include "TimerManager.h"
#include "Blueprint/UserWidget.h"

void AShooterPlayerController::BeginPlay(){
    Super::BeginPlay();
    HUD = CreateWidget(this, HUDClass);
    if(HUD != nullptr){
        HUD->AddToViewport();
    }
}


void AShooterPlayerController::GameHasEnded(class AActor* EndGameFocus, bool bIsWinner) {
    Super::GameHasEnded(EndGameFocus,bIsWinner);
    
    HUD->RemoveFromViewport();

    if(bIsWinner){
        UUserWidget* WinScreen = CreateWidget(this, WinscreenClass);
        if(WinScreen != nullptr){
            WinScreen->AddToViewport();
        }
    }else{
        UUserWidget* LoseScreen = CreateWidget(this, LosescreenClass);
        if(LoseScreen != nullptr){
            LoseScreen->AddToViewport();
        }
    }
    
    GetWorldTimerManager().SetTimer(RestartHandle, this, &APlayerController::RestartLevel, RestartDelay);
}