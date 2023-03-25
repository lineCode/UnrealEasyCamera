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
#include "Utils/PCMGNeuralNetwork.h"
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
		TArray<float> Input;
		TArray<float> Output;
		UPCMGNeuralNetwork* Network = nullptr;

		UActorSequence* InMovieSequence = InActorSequenceComponent->GetSequence();

		if (InMovieSequence)
		{
			TArrayView<FMovieSceneDoubleChannel*> Channels = GetTransformChannels(InMovieSequence);

			if (Channels.Num() < 9)
			{
				return;
			}

			Network = NewObject<UPCMGNeuralNetwork>((UObject*)GetTransientPackage(), UPCMGNeuralNetwork::StaticClass());

			if (Network != nullptr)
			{
				if (!bModified)
				{
					DuplicateRawData(Channels);
					bModified = true;
				}

				ConstructInput(Input, Channels);
				Network->RunModel(PCMGParams.Model, Input, Output);
				ApplyOutput(Output, Channels, InMovieSequence);
			}
		}
	}
}

void UKeyframeExtension::ConstructInput(TArray<float>& Input, const TArrayView<FMovieSceneDoubleChannel*>& Channels)
{
	//Input.Add(PCMGParams.PosTurbulence);
	//Input.Add(PCMGParams.RotTurbulence);

	//Input.Add(PCMGParams.PosSymmetry);
	//Input.Add(PCMGParams.RotSymmetry);

	//Input.Add(PCMGParams.PosIncreaseMonotonicity[0]);
	//Input.Add(PCMGParams.PosIncreaseMonotonicity[1]);
	//Input.Add(PCMGParams.PosIncreaseMonotonicity[2]);
	//Input.Add(PCMGParams.PosDecreaseMonotonicity[0]);
	//Input.Add(PCMGParams.PosDecreaseMonotonicity[1]);
	//Input.Add(PCMGParams.PosDecreaseMonotonicity[2]);
	//Input.Add(PCMGParams.RotIncreaseMonotonicity[0]);
	//Input.Add(PCMGParams.RotIncreaseMonotonicity[1]);
	//Input.Add(PCMGParams.RotIncreaseMonotonicity[2]);
	//Input.Add(PCMGParams.RotDecreaseMonotonicity[0]);
	//Input.Add(PCMGParams.RotDecreaseMonotonicity[1]);
	//Input.Add(PCMGParams.RotDecreaseMonotonicity[2]);

	Input.Add(PCMGParams.Ranges.XVelocityRange[0]);
	Input.Add(PCMGParams.Ranges.XVelocityRange[1]);
	Input.Add(PCMGParams.Ranges.YVelocityRange[0]);
	Input.Add(PCMGParams.Ranges.YVelocityRange[1]);
	Input.Add(PCMGParams.Ranges.ZVelocityRange[0]);
	Input.Add(PCMGParams.Ranges.ZVelocityRange[1]);

	Input.Add(PCMGParams.Ranges.RollVelocityRange[0]);
	Input.Add(PCMGParams.Ranges.RollVelocityRange[1]);
	Input.Add(PCMGParams.Ranges.PitchVelocityRange[0]);
	Input.Add(PCMGParams.Ranges.PitchVelocityRange[1]);
	Input.Add(PCMGParams.Ranges.YawVelocityRange[0]);
	Input.Add(PCMGParams.Ranges.YawVelocityRange[1]);

	float XAccelerationMinimum     = FMath::Max<float>(PCMGParams.Ranges.XAccelerationRange[0],     2.5 * (PCMGParams.Ranges.XVelocityRange[0] - PCMGParams.Ranges.XVelocityRange[1]));
	float XAccelerationMaximum     = FMath::Min<float>(PCMGParams.Ranges.XAccelerationRange[1],		2.5 * (PCMGParams.Ranges.XVelocityRange[1] - PCMGParams.Ranges.XVelocityRange[0]));
	float YAccelerationMinimum     = FMath::Max<float>(PCMGParams.Ranges.YAccelerationRange[0],		2.5 * (PCMGParams.Ranges.YVelocityRange[0] - PCMGParams.Ranges.YVelocityRange[1]));
	float YAccelerationMaximum     = FMath::Min<float>(PCMGParams.Ranges.YAccelerationRange[1],		2.5 * (PCMGParams.Ranges.YVelocityRange[1] - PCMGParams.Ranges.YVelocityRange[0]));
	float ZAccelerationMinimum     = FMath::Max<float>(PCMGParams.Ranges.ZAccelerationRange[0],		2.5 * (PCMGParams.Ranges.ZVelocityRange[0] - PCMGParams.Ranges.ZVelocityRange[1]));
	float ZAccelerationMaximum     = FMath::Min<float>(PCMGParams.Ranges.ZAccelerationRange[1],		2.5 * (PCMGParams.Ranges.ZVelocityRange[1] - PCMGParams.Ranges.ZVelocityRange[0]));
	float RollAccelerationMinimum  = FMath::Max<float>(PCMGParams.Ranges.RollAccelerationRange[0],  2.5 * (PCMGParams.Ranges.RollVelocityRange[0] - PCMGParams.Ranges.RollVelocityRange[1]));
	float RollAccelerationMaximum  = FMath::Min<float>(PCMGParams.Ranges.RollAccelerationRange[1],  2.5 * (PCMGParams.Ranges.RollVelocityRange[1] - PCMGParams.Ranges.RollVelocityRange[0]));
	float PitchAccelerationMinimum = FMath::Max<float>(PCMGParams.Ranges.PitchAccelerationRange[0], 2.5 * (PCMGParams.Ranges.PitchVelocityRange[0] - PCMGParams.Ranges.PitchVelocityRange[1]));
	float PitchAccelerationMaximum = FMath::Min<float>(PCMGParams.Ranges.PitchAccelerationRange[1], 2.5 * (PCMGParams.Ranges.PitchVelocityRange[1] - PCMGParams.Ranges.PitchVelocityRange[0]));
	float YawAccelerationMinimum   = FMath::Max<float>(PCMGParams.Ranges.YawAccelerationRange[0],   2.5 * (PCMGParams.Ranges.YawVelocityRange[0] - PCMGParams.Ranges.YawVelocityRange[1]));
	float YawAccelerationMaximum   = FMath::Min<float>(PCMGParams.Ranges.YawAccelerationRange[1],   2.5 * (PCMGParams.Ranges.YawVelocityRange[1] - PCMGParams.Ranges.YawVelocityRange[0]));

	Input.Add(XAccelerationMinimum);
	Input.Add(XAccelerationMaximum);
	Input.Add(YAccelerationMinimum);
	Input.Add(YAccelerationMaximum);
	Input.Add(ZAccelerationMinimum);
	Input.Add(ZAccelerationMaximum);
	Input.Add(RollAccelerationMinimum);
	Input.Add(RollAccelerationMaximum);
	Input.Add(PitchAccelerationMinimum);
	Input.Add(PitchAccelerationMaximum);
	Input.Add(YawAccelerationMinimum);
	Input.Add(YawAccelerationMaximum);

	for (int i = 0; i < 54; ++i)
		Input.Add(0);

	for (int i = 0; i < 6; ++i)
	{
		FMovieSceneDoubleChannel* Channel = Channels[i];
		TArrayView<FMovieSceneDoubleValue> Values = Channel->GetData().GetValues();
		if (Values.Num() > 0)
		{
			Input.Add(Values[0].Value);
		}
		else
		{
			Input.Add(0);
		}
	}

	check(Input.Num() == 84);
}

void UKeyframeExtension::ApplyOutput(TArray<float>& Output, TArrayView<FMovieSceneDoubleChannel*>& Channels, UActorSequence* InMovieSequence)
{
	check(Output.Num() == 156);
	
	UMovieScene* MovieScene = InMovieSequence->GetMovieScene();

	/* See https://forums.unrealengine.com/t/changing-sequencer-section-end-range-in-c/472819/4. */
	int TickResolution = MovieScene->GetTickResolution().AsDecimal();
	int DisplayRate = MovieScene->GetDisplayRate().AsDecimal();
	int Ratio = TickResolution / DisplayRate;
	
	TArray<FFrameNumber> NewTransformTimes[6];
	TArray<FMovieSceneDoubleValue> NewTransformValues[6];

	const int NumberOfSeconds = 5;
	const int FramesPerSecond = 5;

	for (int Second = 0; Second <= NumberOfSeconds; ++Second)
		for (int Frame = 0; Frame < FramesPerSecond; ++Frame)
		{
			if (Second == NumberOfSeconds && Frame != 0)
				break;

			int Index = (FramesPerSecond * Second + Frame) * 6;
			float X            = Output[Index];
			float Y            = Output[Index + 1];
			float Z            = Output[Index + 2];
			float Roll	       = Output[Index + 3];
			float Pitch        = Output[Index + 4];
			float Yaw          = Output[Index + 5];

			FMovieSceneDoubleValue XValue(X);
			FMovieSceneDoubleValue YValue(Y);
			FMovieSceneDoubleValue ZValue(Z);
			FMovieSceneDoubleValue RollValue (Roll);
			FMovieSceneDoubleValue PitchValue(Pitch);
			FMovieSceneDoubleValue YawValue  (Yaw);

			XValue.InterpMode     = RCIM_Cubic;
			YValue.InterpMode	  = RCIM_Cubic;
			ZValue.InterpMode	  = RCIM_Cubic;
			RollValue.InterpMode  = RCIM_Cubic;
			PitchValue.InterpMode = RCIM_Cubic;
			YawValue.InterpMode   = RCIM_Cubic;

			XValue.TangentMode    = RCTM_Auto;
			YValue.TangentMode    = RCTM_Auto;
			ZValue.TangentMode    = RCTM_Auto;
			RollValue.TangentMode = RCTM_Auto;
			XValue.TangentMode    = RCTM_Auto;
			YawValue.TangentMode  = RCTM_Auto;

			NewTransformValues[0].Add(XValue);
			NewTransformValues[1].Add(YValue);
			NewTransformValues[2].Add(ZValue);
			NewTransformValues[3].Add(RollValue);
			NewTransformValues[4].Add(PitchValue);
			NewTransformValues[5].Add(YawValue);

			int32 CurrentFrame = Ratio * (30 * Second + 30 / FramesPerSecond * Frame);

			NewTransformTimes[0].Add(FFrameNumber(CurrentFrame));
			NewTransformTimes[1].Add(FFrameNumber(CurrentFrame));
			NewTransformTimes[2].Add(FFrameNumber(CurrentFrame));
			NewTransformTimes[3].Add(FFrameNumber(CurrentFrame));
			NewTransformTimes[4].Add(FFrameNumber(CurrentFrame));
			NewTransformTimes[5].Add(FFrameNumber(CurrentFrame));
		}

	for (int i = 0; i < 6; ++i)
	{
		Channels[i]->Set(NewTransformTimes[i], NewTransformValues[i]);
		Channels[i]->AutoSetTangents();
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