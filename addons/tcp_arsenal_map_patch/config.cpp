class CfgPatches
{
   class STB_tcp_arsenal_map_patch
   {
      units[] = {};
      weapons[] = {};
      requiredVersion = 2.18;
      requiredAddons[] =
      {
         "STB_ace_arsenal_map_patch",
         "TCP_Ui"
      };
      author = "62nd STB";
   };
};

class Extended_DisplayLoad_EventHandlers
{
   class RscDisplayMain
   {
      class STB_tcp_arsenal_map_patch
      {
         onLoad = "(_this # 0) call STB_fnc_hookTcpArsenalButton;";
      };
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
               idc = 2502;
               onbuttonclick = "call STB_fnc_openSelectedArsenalMission;";
            };
         };
      };
   };
};
