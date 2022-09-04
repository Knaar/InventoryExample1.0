// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GBUI_Inventory : ModuleRules
{
	public GBUI_Inventory(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		CppStandard = CppStandardVersion.Cpp17;
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
		PublicDependencyModuleNames.AddRange(new string[] { "UMG","Slate","SlateCore" });
	}
}
