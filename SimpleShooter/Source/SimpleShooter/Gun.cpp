// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Engine/DamageEvents.h"
// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GunRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Gun"));
	SetRootComponent(GunRoot);
	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun Mesh"));
	GunMesh->SetupAttachment(GunRoot);

}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGun::PullTrigger(){
	UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, GunMesh, TEXT("MuzzleFlashSocket"));
	
	APawn* GunOwner = Cast<APawn>(GetOwner());
	if(GunOwner == nullptr) return; 
	AController* OwnerController = GunOwner->GetController();
	if(OwnerController){
		FVector loc(0.f);
		FRotator rot = FRotator::ZeroRotator;
		OwnerController->GetPlayerViewPoint(loc,rot);
		FVector End = loc + rot.Vector() * MaxRange;
		FHitResult OutHitResult;
		FCollisionQueryParams Params;
		Params.AddIgnoredActor(this);
		Params.AddIgnoredActor(GetOwner());
		bool bHit = GetWorld()->LineTraceSingleByChannel(OutHitResult, loc, End, ECollisionChannel::ECC_GameTraceChannel1, Params);
		if(bHit){
			DrawDebugPoint(GetWorld(), OutHitResult.Location, 20.f, FColor::Red, true);
			FVector ShotDirection = -rot.Vector();
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),ImpactEffect,OutHitResult.Location, ShotDirection.Rotation());

			if(OutHitResult.GetActor()){
				FPointDamageEvent DamageEvent(Damage, OutHitResult, ShotDirection, nullptr);
				OutHitResult.GetActor()->TakeDamage(Damage,DamageEvent, OwnerController, this );
			}
		}
	}
	

}
