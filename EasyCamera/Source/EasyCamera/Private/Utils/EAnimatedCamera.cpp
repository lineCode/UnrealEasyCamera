// Copyright 2023 by Sulley. All Rights Reserved.

#include "Utils/EAnimatedCamera.h"
#include "Core/ECameraBase.h"

AEAnimatedCamera::AEAnimatedCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	AnimatedCameraExtension = NewObject<UAnimatedCameraExtension>();
	CameraSettingsComponent->Extensions.Add(Cast<UECameraExtensionBase>(AnimatedCameraExtension));
}