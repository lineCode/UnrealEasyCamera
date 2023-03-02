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
	/** How do you want to preserve keyframes in the actor sequence component. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EKeyframePreservationType KeyframePreservationType;

private:
	UActorSequenceComponent* ActorSequenceComponent;
	TObjectPtr<UActorSequence> MovieSequence;
	TObjectPtr<UActorSequencePlayer> SequencePlayer;
	
	bool bModified = false;
	TArray<FFrameNumber> RawTransformTimes[9];
	TArray<FMovieSceneDoubleValue> RawTransformValues[9];

	float ElapsedTime = 0.0f;

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
};
