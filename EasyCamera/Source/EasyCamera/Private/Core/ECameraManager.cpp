// Copyright 2023 by Sulley. All Rights Reserved.


#include "Core/ECameraManager.h"
#include "Core/ECameraBase.h"
#include "Core/ECameraSettingsComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

AECameraManager::AECameraManager()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AECameraManager::AddCamera(AECameraBase* Camera)
{
	if (Camera != nullptr)
	{
		int32 index = CameraContainer.Find(Camera);
		if (index == INDEX_NONE) CameraContainer.Push(Camera);
		else
		{
			CameraContainer.RemoveAt(index);
			CameraContainer.Push(Camera);
		}
		ActiveCamera = Camera;
	}
}

bool AECameraManager::TerminateActiveCamera()
{
	/** If no outgoing camera exists, do nothing. */
	if (CameraContainer.Num() < 2) return false;

	/** Remove the camera from container, and use the next valid camera as active camera. */
	int ValidCameraIndex = -1;
	for (int index = CameraContainer.Num() - 2; index >= 0; --index)
	{
		if (CameraContainer[index] != nullptr)
		{
			ValidCameraIndex = index;
			break;
		}
	}
	/** Find a valid camera. */
	if (ValidCameraIndex != -1)
	{
		/** Remove all invalid cameras from container. */
		int OriginalNum = CameraContainer.Num();
		for (int i = 0; i < OriginalNum - ValidCameraIndex - 1; ++i)
			CameraContainer.Pop();
		ActiveCamera = CameraContainer.Top();

		/** Set new view target. */
		ActiveCamera->ResetOnBecomeViewTarget(ActiveCamera->bIsTransitory, ActiveCamera->LifeTime, ActiveCamera->bDefaultPreserveState);
		APlayerController* PC = ActiveCamera->GetSettingsComponent()->GetPlayerController();
		PC->SetViewTargetWithBlend(ActiveCamera, ActiveCamera->DefaultBlendTime, ActiveCamera->DefaultBlendFunc, ActiveCamera->DefaultBlendExp, ActiveCamera->bDefaultLockOutgoing);
		return true;
	}
	/** Cannot find a valid camera. */
	else return false;
}