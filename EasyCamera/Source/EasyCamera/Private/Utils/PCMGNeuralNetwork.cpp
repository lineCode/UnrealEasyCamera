// Copyright 2023 by Sulley. All Rights Reserved.

#include "Utils/PCMGNeuralNetwork.h"
#include "NeuralNetwork.h"
#include "HAL/FileManagerGeneric.h"

UPCMGNeuralNetwork::UPCMGNeuralNetwork()
{
	
}

void UPCMGNeuralNetwork::RunModel(EPCMGModel ModelType, TArray<float>& Input, TArray<float>& Output)
{
	FString ModelPathProject;
	FString ModelPathEngine;
	FString ModelPath;
	switch (ModelType)
	{
		case EPCMGModel::PPO_MLP:
		{
			ModelPathProject = FPaths::ProjectPluginsDir() + "UnrealEasyCamera/EasyCamera/Resources/Models/PPO_MLP.onnx";
			ModelPathEngine = FPaths::EnginePluginsDir() + "UnrealEasyCamera/EasyCamera/Resources/Models/PPO_MLP.onnx";
		}
		break;
		case EPCMGModel::PPO_LSTM:
		{
			ModelPathProject = FPaths::ProjectPluginsDir() + "UnrealEasyCamera/EasyCamera/Resources/Models/PPO_LSTM.onnx";
			ModelPathEngine = FPaths::EnginePluginsDir() + "UnrealEasyCamera/EasyCamera/Resources/Models/PPO_LSTM.onnx";
		}
		break;
		default: { }
	}

	if (FPaths::FileExists(ModelPathProject))
	{
		ModelPath = ModelPathProject;
	}
	else
	{
		ModelPath = ModelPathEngine;
	}

	if (this->Load(ModelPath))
	{
		if (this->IsGPUSupported())
			this->SetDeviceType(ENeuralDeviceType::GPU);
		else
			this->SetDeviceType(ENeuralDeviceType::CPU);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("NeuralNetwork could not be loaded from %s."), *ModelPath);
	}

	if (!this->IsLoaded())
	{
		return;
	}

	this->SetInputFromArrayCopy(Input);
	UE_LOG(LogTemp, Log, TEXT("Input tensor: %s."), *this->GetInputTensor().ToString());

	this->Run();
	UE_LOG(LogTemp, Log, TEXT("Neural Network inference complete."));

	const FNeuralTensor& OutputTensor = this->GetOutputTensor();
	Output = OutputTensor.GetArrayCopy<float>();
	UE_LOG(LogTemp, Log, TEXT("Output tensor: %s."), *OutputTensor.ToString());
}