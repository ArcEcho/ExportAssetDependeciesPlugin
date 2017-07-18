# ExportAssetDependeciesPlugin


### For what
A litle tool to export asset dependencies of which you specifed in the settings.

### How to use
+ Fill the settings in the "Project Settings"->Game->ExportAssetDependencies page.
Here you can use copied string asset reference. 
+ Click the export button in the editor tool bar.
+ If succeed, the result json file will be saved to file $(YouProejct)/Saved/ExportAssetDependencies/AssetDependecies.json. And the hyper link in the notifaction will 
quickly guide you there.

### Explanation of result
AssetDependecies.json:
```json
{
	"/Game/MyProject/Maps/MyTestMap":
	{
		"DependenciesInGameContentDir": [
			"/Game/MyProject/BP/BP_TestActor",
			"/Game/MyProject/Meshes/SM_Test",
			"/Game/MyProject/Materials/M_Test",
			"/Game/MyProject/Textures/T_Test",
			"/Game/MyProject/Maps/MyTestMap_BuiltData",
			"/Game/MyProject/Materials/M_Test_01"
		],
		"OtherDependencies": [
			"/Script/Engine",
			"/Engine/EngineSky/BP_Sky_Sphere",
			"/Engine/EditorBlueprintResources/StandardMacros",
			"/Script/BlueprintGraph",
			"/Script/CoreUObject",
			"/Script/UnrealEd",
			"/Engine/EngineSky/C_Sky_Cloud_Color",
			"/Engine/EngineSky/C_Sky_Horizon_Color",
			"/Engine/EngineSky/C_Sky_Zenith_Color",
			"/Engine/EngineSky/M_Sky_Panning_Clouds2",
			"/Engine/EngineSky/T_Sky_Blue",
			"/Engine/EngineSky/T_Sky_Clouds_M",
			"/Engine/EngineSky/T_Sky_Stars",
			"/Engine/EngineSky/SM_SkySphere",
			"/Script/Foliage",
			"/Engine/EngineMaterials/WorldGridMaterial",
			"/Engine/Functions/Engine_MaterialFunctions01/Opacity/CameraDepthFade",
			"/Engine/EngineMaterials/T_Default_Material_Grid_M",
			"/Engine/EngineMaterials/T_Default_Material_Grid_N",
			"/Engine/MapTemplates/SM_Template_Map_Floor",
			"/Engine/EngineMaterials/DefaultMaterial",
			"/Script/InputCore"
		]
	}
}
```
The result file will be a 2 layer json.
+ key -> long package name you specified in settin page.
+ value will include two parts DependenciesInGameContentDir and OtherDependencies.The OtherDependencies mean what not exsist in game content dir.

### TODO list

- [ ] Check saving state .
- [ ] Context menu to add to settings.
- [ ] Asynchronous operation.