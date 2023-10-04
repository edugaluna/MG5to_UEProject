// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MG5_EGL : ModuleRules
{
	public MG5_EGL(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
