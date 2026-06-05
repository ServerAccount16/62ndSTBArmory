[
   "STB_arsenalMapPatch_mission",
   "LIST",
   [
      "ACE Arsenal Button Mission",
      "Selects which mission is launched by the ACE Arsenal main menu button."
   ],
   "62nd STB",
   [
      ["snow", "vr"],
      ["Snow", "VR"],
      0
   ],
   0,
   {
      diag_log format ["STB_arsenal_map_patch: CBA setting changed value=%1", _this];
      missionNamespace setVariable ["STB_arsenalMapPatch_mission", _this];
      profileNamespace setVariable ["STB_arsenalMapPatch_mission_profile", _this];
      saveProfileNamespace;
   }
] call CBA_fnc_addSetting;

diag_log format [
   "STB_arsenal_map_patch: preInit complete missionNamespace=%1 profileNamespace=%2",
   missionNamespace getVariable ["STB_arsenalMapPatch_mission", "<nil>"],
   profileNamespace getVariable ["STB_arsenalMapPatch_mission_profile", "<nil>"]
];

if (hasInterface) then
{
   [] spawn STB_fnc_monitorMainMenu;
};
