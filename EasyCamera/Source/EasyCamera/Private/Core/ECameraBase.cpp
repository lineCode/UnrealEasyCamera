// Copyright 2023 by Sulley. All Rights Reserved.


#include "Core/ECameraBase.h"
#include "Core/ECameraSettingsComponent.h"
#include "Core/ECameraManager.h"
#include "Utils/ECameraLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"

AECameraBase::AECameraBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickGroup = TG_PostUpdateWork;

	/** Default camera component settings. */
	GetCameraComponent()->bConstrainAspectRatio = false;

	/** Create a default UECameraSettingsComponent component. */
	CameraSettingsComponent = CreateDefaultSubobject<UECameraSettingsComponent>(TEXT("ECameraSettingsComponent"));
	CameraSettingsComponent->SetupAttachment(RootComponent);

	DefaultFOV = 90.f;
	DefaultBlendTime = 1.0f;
	DefaultBlendFunc = EViewTargetBlendFunction::VTBlend_EaseOut;
	DefaultBlendExp = 1.5f;
	bDefaultLockOutgoing = true;
	bDefaultPreserveState = true;

	bIsTransitory = false;
	LifeTime = 0.0f;
	ElaspedTimeOnViewTarget = 0.0f;
}

void AECameraBase::BeginPlay()
{
	Super::BeginPlay();
}

void AECameraBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetSettingsComponent()->IsActive())
	{
		if (bIsTransitory)
		{
			ElaspedTimeOnViewTarget += DeltaTime;
			if (ElaspedTimeOnViewTarget >= LifeTime) 
				GetSettingsComponent()->ECameraManager->TerminateActiveCamera();
		}
	}
}

void AECameraBase::BecomeViewTarget(APlayerController* PC)
{
	CameraSettingsComponent->BecomeViewTarget(PC, bPreserveState);
	GetSettingsComponent()->ECameraManager->AddCamera(this);
}

void AECameraBase::EndViewTarget(APlayerController* PC)
{
	CameraSettingsComponent->EndViewTarget(PC);
	ElaspedTimeOnViewTarget = 0.0f;
}

void AECameraBase::ResetOnBecomeViewTarget(bool InputbIsTransitory, float InputLifeTime, bool InputbPreserveState)
{
	bIsTransitory = InputbIsTransitory;
	LifeTime = InputLifeTime;
	bPreserveState = InputbPreserveState;
}