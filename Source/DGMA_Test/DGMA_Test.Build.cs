// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DGMA_Test : ModuleRules
{
	public DGMA_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "OnlineSubsystem","MultiplayerSessions" });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
