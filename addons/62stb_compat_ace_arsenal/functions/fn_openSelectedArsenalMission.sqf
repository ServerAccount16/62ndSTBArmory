private _selection = missionNamespace getVariable [
   "STB_arsenalMapPatch_mission",
   profileNamespace getVariable ["STB_arsenalMapPatch_mission_profile", "snow"]
];

diag_log format [
   "STB_arsenal_map_patch: selector called raw missionNamespace=%1 raw profileNamespace=%2 initial=%3",
   missionNamespace getVariable ["STB_arsenalMapPatch_mission", "<nil>"],
   profileNamespace getVariable ["STB_arsenalMapPatch_mission_profile", "<nil>"],
   _selection
];

if (_selection isEqualType []) then
{
   _selection = _selection param [0, "snow"];
};

private _missionPath = switch (true) do
{
   case (_selection in ["snow", "Snow", 0]): { "\z\62stb\addons\62stb_compat_ace_arsenal\missions\SnowArsenal.Drifts" };
   case (_selection in ["vr", "VR", 1]): { "\z\ace\addons\arsenal\missions\Arsenal.VR" };
   default { "\z\ace\addons\arsenal\missions\Arsenal.VR" };
};

diag_log format [
   "STB_arsenal_map_patch: selector final selection=%1 missionPath=%2",
   _selection,
   _missionPath
];

playMission ["", _missionPath];
