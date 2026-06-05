class CfgPatches
{
   class STB_ace_arsenal_map_patch
   {
      units[] = {};
      weapons[] = {};
      requiredVersion = 2.18;
      requiredAddons[] =
      {
         "ace_arsenal",
         "cba_main",
         "cba_settings",
         "cba_xeh"
      };
      author = "62nd STB";
   };
};

class CfgFunctions
{
   class STB
   {
      class ace_arsenal_map_patch
      {
         file = "\z\62stb\addons\ace_arsenal_map_patch\functions";
         class hookTcpArsenalButton {};
         class monitorMainMenu {};
         class openSelectedArsenalMission {};
      };
   };
};

class Extended_PreInit_EventHandlers
{
   class STB_ace_arsenal_map_patch
   {
      init = "call compile preprocessFileLineNumbers '\z\62stb\addons\ace_arsenal_map_patch\functions\XEH_preInit.sqf'";
   };
};

class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay
{
   class controls
   {
      class GroupTutorials
      {
         class Controls
         {
            class ace_arsenal_mission
            {
               onbuttonclick = "call STB_fnc_openSelectedArsenalMission;";
            };
         };
      };
   };
};
