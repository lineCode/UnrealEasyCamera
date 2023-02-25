// Copyright 2023 by Sulley. All Rights Reserved.

#include "Extensions/AnimatedCameraExtension.h"
#include "Animation/AnimTypes.h"
#include "Animation/AnimationAsset.h"
#include "Animation/AnimCurveTypes.h"
#include "Animation/AttributeCurve.h"
#include "Animation/AnimSequence.h"
#include "Animation/AnimSequenceBase.h"
#include "Animation/AnimData/AnimDataModel.h"
#include "Animation/BuiltInAttributeTypes.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Core/ECameraManager.h"
#include "Core/ECameraSettingsComponent.h"

UAnimatedCameraExtension::UAnimatedCameraExtension()
{

}

void UAnimatedCameraExtension::UpdateComponent_Implementation(float DeltaTime)
{
	if (AnimToPlay)
	{
		/** Evaluate bone transform at current time, and apply offset. */
		FTransform OutTransform;
		AnimToPlay->GetBoneTransform(OutTransform, 0, ElapsedTime, true);
		OutTransform.SetLocation(OutTransform.GetLocation() + PositionOffset);

		/** Get ref frame. */
		FTransform RefFrame = RefCoordinateActor == nullptr ? RefCoordinate : RefCoordinateActor->GetActorTransform();

		/** Get transform in world space relative to the ref frame. */
		FTransform NewTransform;
		NewTransform.SetLocation(UKismetMathLibrary::TransformLocation(RefFrame, OutTransform.GetLocation()));
		NewTransform.SetRotation(UKismetMathLibrary::TransformRotation(RefFrame, OutTransform.GetRotation().Rotator()).Quaternion());

		/** Set transform. */
		GetOwningActor()->SetActorTransform(NewTransform);

		/** Set FOV. */
		TArrayView<const FAnimatedBoneAttribute> Attributes = AnimToPlay->GetDataModel()->GetAttributes();
		if (Attributes.Num() > 0)
		{
			for (const FAnimatedBoneAttribute& Attribute : Attributes)
			{
				if (Attribute.Identifier.GetName().ToString().Contains("FOV"))
				{
					float FOV = Attribute.Curve.Evaluate<FFloatAnimationAttribute>(ElapsedTime).Value;
					GetOwningCamera()->GetCameraComponent()->FieldOfView = FOV;
					break;
				}
			}
		}

		ElapsedTime += DeltaTime;
		if (ElapsedTime >= AnimToPlay->GetDataModel()->GetPlayLength())
		{
			/** Terminate this camera. */
			OwningSettingComponent->GetECameraManager()->TerminateActiveCamera();
		}
	}
}

void UAnimatedCameraExtension::ResetOnBecomeViewTarget(APlayerController* PC, bool bPreserveState)
{
	RefCoordinate = FTransform();
	PositionOffset = FVector(0, 0, 0);
	ElapsedTime = 0.f;
	//I don't know if this line is needed. Need experiments.
	//GetOwningCamera()->GetCameraComponent()->FieldOfView = GetOwningCamera()->DefaultFOV;
}