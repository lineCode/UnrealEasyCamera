// Copyright 2023 by Sulley. All Rights Reserved.

#include "Utils/PCMGNeuralNetwork.h"
#include "NeuralNetwork.h"
#include "HAL/FileManagerGeneric.h"

UPCMGNeuralNetwork::UPCMGNeuralNetwork()
{
	Network = NewObject<UNeuralNetwork>((UObject*)GetTransientPackage(), UNeuralNetwork::StaticClass());
}
void UPCMGNeuralNetwork::Run(EPCMGModel ModelType, TArray<float>& Input, TArray<float>& Output)
{
	if (Network == nullptr)
	{
		Network = NewObject<UNeuralNetwork>((UObject*)GetTransientPackage(), UNeuralNetwork::StaticClass());
	}

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

	/*
	if (FPaths::FileExists(ModelPath))
	{
		UE_LOG(LogTemp, Warning, TEXT("File exists."));

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("File does not exist.")); 
		UE_LOG(LogTemp, Warning, TEXT("Plugin path is %s."), *FPaths::ProjectPluginsDir());
	}*/

	if (FPaths::FileExists(ModelPathProject))
	{
		ModelPath = ModelPathProject;
	}
	else
	{
		ModelPath = ModelPathEngine;
	}
	
	if (Network->Load(ModelPath))
	{
		if (Network->IsGPUSupported())
			Network->SetDeviceType(ENeuralDeviceType::GPU);
		else
			Network->SetDeviceType(ENeuralDeviceType::CPU);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("NeuralNetwork could not be loaded from %s."), *ModelPath);
	}

	if (Network == nullptr || !Network->IsLoaded())
	{
		return;
	}

	Network->SetInputFromArrayCopy(Input);
	UE_LOG(LogTemp, Log, TEXT("Input tensor: %s."), *Network->GetInputTensor().ToString());

	Network->Run();
	UE_LOG(LogTemp, Log, TEXT("Neural Network inference complete."));

	const FNeuralTensor& OutputTensor = Network->GetOutputTensor();
	Output = OutputTensor.GetArrayCopy<float>();
	UE_LOG(LogTemp, Log, TEXT("Output tensor: %s."), *OutputTensor.ToString());
}