// Copyright 2023 by Sulley. All Rights Reserved.

#include "Extensions/KeyframeExtension.h"
#include "ActorSequenceComponent.h"
#include "ActorSequence.h"
#include "ActorSequencePlayer.h"
#include "MovieScene.h"
#include "MovieSceneTrack.h"
#include "MovieSceneSection.h"
#include "Channels/MovieSceneChannelProxy.h"
#include "Channels/MovieSceneChannel.h"
#include "Channels/MovieSceneDoubleChannel.h"
#include "Channels/MovieSceneChannelData.h"
#include "Kismet/GameplayStatics.h"
#include "Utils/ECameraLibrary.h"
#include "Core/ECameraManager.h"

UKeyframeExtension::UKeyframeExtension()
{
	PCMGParams = FPCMGParams();
	LocationOffset = FVector();
}

void UKeyframeExtension::UpdateComponent_Implementation(float DeltaTime)
{
	if (SequencePlayer)
	{
		/** Use the internal SetPlaybackPosition function to immediately set play back position.  */
		SequencePlayer->SetPlaybackPosition(FMovieSceneSequencePlaybackParams(ElapsedFrames, EUpdatePositionMethod::Play));

		/** Apply location override. */
		if (LocationOverride.Get() != nullptr)
		{
			FVector NewLocation = UECameraLibrary::GetPositionWithLocalOffset(LocationOverride.Get(), GetOwningCamera()->GetCameraComponent()->GetRelativeLocation() + LocationOffset);
			GetOwningCamera()->GetCameraComponent()->SetWorldLocation(NewLocation);
		}

		/** Use rotation override. */
		if (RotationOverride.Get() != nullptr)
		{
			FRotator RawRotation = GetOwningCamera()->GetCameraComponent()->GetRelativeRotation();
			FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(GetOwningCamera()->GetCameraComponent()->GetComponentLocation(), RotationOverride.Get()->GetActorLocation());
			GetOwningCamera()->GetCameraComponent()->SetWorldRotation(FRotator(NewRotation.Pitch, NewRotation.Yaw, RawRotation.Roll));
		}

		ElapsedTime += DeltaTime;
		ElapsedFrames = FFrameTime::FromDecimal(ElapsedTime * SequencePlayer->GetFrameRate().AsDecimal() * SequencePlayer->GetPlayRate());
		if (ElapsedFrames.FrameNumber >= SequencePlayer->GetFrameDuration())
		{
			OwningSettingComponent->GetECameraManager()->TerminateActiveCamera();
		}
	}
}

void UKeyframeExtension::ResetOnBecomeViewTarget(APlayerController* PC, bool bPreserveState)
{
	ElapsedFrames.FrameNumber = 0;
	ElapsedTime = 0.f;

	Initialize();
}

void UKeyframeExtension::Initialize()
{
	if (ActorSequenceComponent == nullptr)
	{
		ActorSequenceComponent = GetOwningActor()->FindComponentByClass<UActorSequenceComponent>();
	}

	if (ActorSequenceComponent != nullptr)
	{
		MovieSequence = ActorSequenceComponent->GetSequence();
		SequencePlayer = ActorSequenceComponent->GetSequencePlayer();
	}
}

void UKeyframeExtension::TossSequence()
{
	if (MovieSequence == nullptr)
	{
		Initialize();
	}

	if (MovieSequence != nullptr)
	{
		TArrayView<FMovieSceneDoubleChannel*> Channels = GetTransformChannels(MovieSequence);

		if (Channels.Num() != 0)
		{
			if (!bModified)
			{
				DuplicateRawData(Channels);
				bModified = true;
			}

			for (FMovieSceneDoubleChannel* Channel : Channels)
			{
				TossChannel(Channel);
			}
		}
	}
}

void UKeyframeExtension::TossSequence(UActorSequenceComponent* InActorSequenceComponent)
{
	if (InActorSequenceComponent)
	{
		UActorSequence* InMovieSequence = InActorSequenceComponent->GetSequence();
		if (InMovieSequence)
		{
			TArrayView<FMovieSceneDoubleChannel*> Channels = GetTransformChannels(InMovieSequence);

			if (Channels.Num() != 0)
			{
				if (!bModified)
				{
					DuplicateRawData(Channels);
					bModified = true;
				}

				for (FMovieSceneDoubleChannel* Channel : Channels)
				{
					TossChannel(Channel);
				}
			}
		}
	}
}

void UKeyframeExtension::TossChannel(FMovieSceneDoubleChannel* Channel)
{
	TMovieSceneChannelData<FMovieSceneDoubleValue> RawData = Channel->GetData();
	TArrayView<FMovieSceneDoubleValue> Values = RawData.GetValues();
	for (FMovieSceneDoubleValue& Value : Values)
	{
		Value.Value = 10.0f;
	}
}

void UKeyframeExtension::Recover()
{
	if (MovieSequence == nullptr)
	{
		Initialize();
	}

	if (MovieSequence != nullptr && bModified)
	{
		TArrayView<FMovieSceneDoubleChannel*> Channels = GetTransformChannels(MovieSequence);

		if (Channels.Num() != 0)
		{
			bModified = false;

			for (int index = 0; index < Channels.Num(); ++index)
			{
				Channels[index]->Set(RawTransformTimes[index], RawTransformValues[index]);
			}
		}
	}
}

void UKeyframeExtension::Recover(UActorSequenceComponent* InActorSequenceComponent)
{
	if (InActorSequenceComponent && bModified)
	{
		UActorSequence* InMovieSequence = InActorSequenceComponent->GetSequence();

		if (InMovieSequence)
		{
			TArrayView<FMovieSceneDoubleChannel*> Channels = GetTransformChannels(InMovieSequence);

			if (Channels.Num() != 0)
			{
				bModified = false;

				for (int index = 0; index < Channels.Num(); ++index)
				{
					Channels[index]->Set(RawTransformTimes[index], RawTransformValues[index]);
				}
			}
		}
	}
}

void UKeyframeExtension::Save()
{
	bModified = false;
}

void UKeyframeExtension::Save(UActorSequenceComponent* InActorSequenceComponent)
{
	bModified = false;
}

TArrayView<FMovieSceneDoubleChannel*> UKeyframeExtension::GetTransformChannels(UActorSequence* InMovieSceneSequence)
{
	if (InMovieSceneSequence)
	{
		UMovieScene* MovieScene = InMovieSceneSequence->GetMovieScene();

		/** Get all bindings from movie scene. */
		const TArray<FMovieSceneBinding>& Bindings = MovieScene->GetBindings();

		/** Only has two bindings: the actor itself and the camera component. */
		if (Bindings.Num() != 2) return TArrayView<FMovieSceneDoubleChannel*>();

		/** Camera component is the first binding. */
		const FMovieSceneBinding& CameraBinding = Bindings[0];
		const TArray<UMovieSceneTrack*>& Tracks = CameraBinding.GetTracks();

		for (UMovieSceneTrack* Track : Tracks)
		{
			/** We only manipulate the transform track. */
			if (Track->GetName().Contains("Transform"))
			{
				const TArray<UMovieSceneSection*>& Sections = Track->GetAllSections();
				if (Sections.Num() > 0)
				{
					TArrayView<FMovieSceneDoubleChannel*> Channels = Sections[0]->GetChannelProxy().GetChannels<FMovieSceneDoubleChannel>();
					return Channels;
				}
			}
		}
	}
	
	return TArrayView<FMovieSceneDoubleChannel*>();
}

void UKeyframeExtension::DuplicateRawData(TArrayView<FMovieSceneDoubleChannel*> Channels)
{
	for (int index = 0; index < Channels.Num(); ++index)
	{
		RawTransformTimes[index] = Channels[index]->GetTimes();
		RawTransformValues[index] = Channels[index]->GetValues();
	}
}