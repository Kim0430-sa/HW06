// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HW061 : ModuleRules
{
	public HW061(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
