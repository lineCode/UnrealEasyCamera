// Copyright 2023 by Sulley. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Extensions/ECameraExtensionBase.h"
#include "Utils/ECameraTypes.h"
#include "Channels/MovieSceneDoubleChannel.h"
#include "KeyframeExtension.generated.h"

class UActorSequenceComponent;
class UMovieSceneSequence;
class UActorSequencePlayer;
class UActorSequence;

/**
 * This extension enables users to keyframe camera motion in editor and 
 * play back the curve generated via these keyframes at runtime.
 * It simply leverages the built-in ActorSequenceComponent component.
 * In addition, this extension provides the funtionality of procedural generation, 
 * i.e., randomly generating curves based the curves stored in the ActorSequence component.
 */
UCLASS(Blueprintable, BlueprintType, classGroup = "ECamera")
class EASYCAMERA_API UKeyframeExtension : public UECameraExtensionBase
{
	GENERATED_BODY()
	
public:
	UKeyframeExtension();

protected:
	/** A set of parameters controlling the generation of camera motions. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPCMGParams PCMGParams;

	/** Override camera motion location to make it always track the specified actor in its local space. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<AActor> LocationOverride;

	/** Location offset applied in target's local space. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector LocationOffset;

	/** Override camera motion rotation to make it always look at the specified actor. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<AActor> RotationOverride;

private:
	UActorSequenceComponent* ActorSequenceComponent;
	TObjectPtr<UActorSequence> MovieSequence;
	TObjectPtr<UActorSequencePlayer> SequencePlayer;

	bool bModified = false;
	TArray<FFrameNumber> RawTransformTimes[9];
	TArray<FMovieSceneDoubleValue> RawTransformValues[9];
	UPROPERTY(Transient)

	FFrameTime ElapsedFrames = 0;
	float ElapsedTime = 0;

public:
	virtual void UpdateComponent_Implementation(float DeltaTime) override;
	virtual void ResetOnBecomeViewTarget(APlayerController* PC, bool bPreserveState) override;

	/** For instantiated objects. */
	void TossSequence();
	/** For CDO in editor. */
	void TossSequence(UActorSequenceComponent* InActorSequenceComponent);
	/** For instantiated objects. */
	void Recover();
	/** For CDO in editor. */
	void Recover(UActorSequenceComponent* InActorSequenceComponent);
	/** For instantiated objects. */
	void Save();
	/** For CDO in editor. */
	void Save(UActorSequenceComponent* InActorSequenceComponent);

private:
	void Initialize();
	void TossChannel(FMovieSceneDoubleChannel* Channel);
	void DuplicateRawData(TArrayView<FMovieSceneDoubleChannel*> Channels);
	TArrayView<FMovieSceneDoubleChannel*> GetTransformChannels(UActorSequence* InMovieSceneSequence);
	void ConstructInput(TArray<float>& Input, const TArrayView<FMovieSceneDoubleChannel*>& Channels);
	void ApplyOutput(TArray<float>& Output, TArrayView<FMovieSceneDoubleChannel*>& Channels, UActorSequence* InMovieSequence);
};
