// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EasyCameraEditor : ModuleRules
{
	public EasyCameraEditor(ReadOnlyTargetRules Target) : base(Target)
	{
        PublicIncludePaths.AddRange(
			new string[] {
				"EasyCameraEditor/Public"
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"EasyCameraEditor/Private"
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"Slate",
				"SlateCore",
				"UnrealEd",
				"PropertyEditor",
				"GameplayCameras",
				"EasyCamera",
				"ActorSequence"
            }
            );
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				
            }
            );

        DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				
			}
			);
	}
}
