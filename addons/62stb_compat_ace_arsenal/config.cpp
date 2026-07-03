class CfgPatches
{
   class STB_compat_ace_arsenal
   {
      units[] = {};
      weapons[] = {};
      requiredVersion = 2.18;
      requiredAddons[] =
      {
         "STB_main",
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
      class compat_ace_arsenal
      {
         file = "\z\62stb\addons\62stb_compat_ace_arsenal\functions";
         class hookTcpArsenalButton {};
         class monitorMainMenu {};
         class openSelectedArsenalMission {};
      };
   };
};

class Extended_PreInit_EventHandlers
{
   class STB_compat_ace_arsenal
   {
      init = "call compile preprocessFileLineNumbers '\z\62stb\addons\62stb_compat_ace_arsenal\functions\XEH_preInit.sqf'";
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
