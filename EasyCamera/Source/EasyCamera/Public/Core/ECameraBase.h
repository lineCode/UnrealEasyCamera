// Copyright 2023 by Sulley. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "GameFramework/Actor.h"
#include "Core/ECameraSettingsComponent.h"
#include "ECameraBase.generated.h"

class USceneComponent;
class UCameraComponent;
class APlayerController;

/**
* All cameras should inherit from this class ECameraBase.
*/
UCLASS(Blueprintable, BlueprintType, classGroup = "ECamera")
class EASYCAMERA_API AECameraBase : public ACameraActor
{
	GENERATED_BODY()

public:
	AECameraBase();

protected:
	/** Default camera settings component. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ECamera|CameraBase")
	UECameraSettingsComponent* CameraSettingsComponent;

public:
	/** Default FOV. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ECamera|CameraBase")
	float DefaultFOV;

	/** Default blend time. Used for automatic call. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ECamera|CameraBase")
	float DefaultBlendTime;

	/** Default blend function. Used for automatic call. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ECamera|CameraBase")
	TEnumAsByte<EViewTargetBlendFunction> DefaultBlendFunc;

	/** Default blend exponential. Used for automatic call. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ECamera|CameraBase")
	float DefaultBlendExp;

	/** Default lock outgoing. Used for automatic call. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ECamera|CameraBase")
	bool bDefaultLockOutgoing;

	/** Default preserve camera state. Used for automatic call (prior camera is expired). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ECamera|CameraBase")
	bool bDefaultPreserveState;
	
	/** Whether this camera is transitory. */
	bool bIsTransitory;
	/** Life time of this camera. */
	float LifeTime;
	/** Whether to preserve camera state when blending. 
	 *  If true, the camera will try to preserve prior camera's location and rotation.
	 */
	bool bPreserveState;

private:
	float ElaspedTimeOnViewTarget;

public:
	/** Get the ECameraSettingsComponent component owned by this camera. */
	UECameraSettingsComponent* GetSettingsComponent() { return CameraSettingsComponent; }

	/** Get FollowComponent owned by this camera. */
	UFUNCTION(BlueprintCallable, Category = "ECamera|CameraBase")
	UECameraComponentFollow* GetFollowComponent() { return CameraSettingsComponent != nullptr ? CameraSettingsComponent->FollowComponent : nullptr; }

	/** Get AimComponent owned by this camera. */
	UFUNCTION(BlueprintCallable, Category = "ECamera|CameraBase")
	UECameraComponentAim* GetAimComponent() { return CameraSettingsComponent != nullptr ? CameraSettingsComponent->AimComponent : nullptr; }

	/** Get the CameraComponent owned by this camera. */
	UFUNCTION(BlueprintCallable, Category = "ECamera|CameraBase")
	UCameraComponent* GetCameraComponent() { return Super::GetCameraComponent(); }

	/** Get default blend time. */
	float GetDefaultBlendTime() { return DefaultBlendTime; }

	/** Get default blend function */
	TEnumAsByte<EViewTargetBlendFunction> GetDefaultBlendFunc() { return DefaultBlendFunc; }

	/** Get default blend exp. */
	float GetDefaultBlendExp() { return DefaultBlendExp; }

	/** Get default lock outgoing. */
	bool GetDefaultLockOutgoing() { return bDefaultLockOutgoing; }

	/** Get default preserve state. */
	bool GetDefaultPreserveState() { return bDefaultPreserveState; }

	/** Set default blend time. */
	void SetDefaultBlendTime(float InDefaultBlendTime) { DefaultBlendTime = InDefaultBlendTime; }

	/** Set default blend function. */
	void SetDefaultBlendFunc(TEnumAsByte<EViewTargetBlendFunction> InBlendFunc) { DefaultBlendFunc = InBlendFunc; }

	/** Set default blend exp. */
	void SetDefaultBlendExp(float InDefaultBlendExp) { DefaultBlendExp = InDefaultBlendExp; }

	/** Set default lock outgoing. */
	void SetDefaultLockOutgoing(bool InDefaultLockOutgoing) { bDefaultLockOutgoing = InDefaultLockOutgoing; }

	/** Set default preserve state. */
	void SetDefaultPreserveState(bool InDefaultPreserveState) { bDefaultPreserveState = InDefaultPreserveState; }

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void BecomeViewTarget(APlayerController* PC) override;
	virtual void EndViewTarget(APlayerController* PC) override;

	/** Reset variables when necessary. Particularly useful for automatically calling cameras. */
	void ResetOnBecomeViewTarget(bool InputbIsTransitory, float InputLifeTime, bool InputbPreserveState);
};
