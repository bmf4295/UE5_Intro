// Fill out your copyright notice in the Description page of Project Settings.

#include "Grabber.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UPhysicsHandleComponent *PhysHandle = GetPhysicsHandle();

	if (PhysHandle && PhysHandle->GetGrabbedComponent())
	{
		FVector TargetLocation = GetComponentLocation() + GetForwardVector() * HoldDistance;
		PhysHandle->SetTargetLocationAndRotation(TargetLocation, GetComponentRotation());
	}
}

void UGrabber::Release()
{
	UPhysicsHandleComponent *PhysHandle = GetPhysicsHandle();
	if (PhysHandle && PhysHandle->GetGrabbedComponent())
	{
		PhysHandle->GetGrabbedComponent()->GetOwner()->Tags.Remove("Grabbed");
		PhysHandle->GetGrabbedComponent()->WakeAllRigidBodies();
		PhysHandle->ReleaseComponent();
	}
}

void UGrabber::Grab()
{

	UPhysicsHandleComponent *PhysHandle = GetPhysicsHandle();

	if (PhysHandle == nullptr)
		return;
	FHitResult HitResult;
	bool hasHit = GetGrabbableInReach(HitResult);
	if (hasHit)
	{
		UPrimitiveComponent *HitComponent = HitResult.GetComponent();
		HitComponent->WakeAllRigidBodies();
		HitComponent->SetSimulatePhysics(true);
		AActor* HitActor = HitResult.GetActor();
		HitActor->Tags.Add("Grabbed");
		HitActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		PhysHandle->GrabComponentAtLocationWithRotation(
			HitComponent,
			NAME_None,
			HitResult.ImpactPoint,
			GetComponentRotation());
	}
}
UPhysicsHandleComponent *UGrabber::GetPhysicsHandle() const
{
	UPhysicsHandleComponent *result = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();

	if (result == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("No Physics Handeler Found"));
	}
	return result;
}

bool UGrabber::GetGrabbableInReach(FHitResult &OutHitResult) const
{
	FVector start = GetComponentLocation();
	FVector end = start + GetForwardVector() * MaxGrabDistance;

	//DrawDebugLine(GetWorld(), start, end, FColor::Red);
	//DrawDebugSphere(GetWorld(), end, 10, 10, FColor::Blue, false, 5);
	FCollisionShape Sphere = FCollisionShape::MakeSphere(GrabRadius);

	return GetWorld()->SweepSingleByChannel(OutHitResult, start, end,
												   FQuat::Identity,
												   ECC_GameTraceChannel2,
												   Sphere);

}
