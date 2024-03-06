// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DGMA_Test : ModuleRules
{
	public DGMA_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
