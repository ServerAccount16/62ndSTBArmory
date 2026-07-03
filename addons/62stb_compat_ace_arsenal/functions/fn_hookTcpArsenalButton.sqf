disableSerialization;

params ["_display"];

diag_log format ["STB_arsenal_map_patch: TCP hook start display=%1", _display];

private _applyHook = {
   disableSerialization;

   params ["_display"];

   private _aceArsenalButton = _display displayCtrl 2502;

   diag_log format [
      "STB_arsenal_map_patch: TCP hook apply display=%1 aceButton=%2 isNull=%3 class=%4",
      _display,
      _aceArsenalButton,
      isNull _aceArsenalButton,
      if (isNull _aceArsenalButton) then { "<null>" } else { ctrlClassName _aceArsenalButton }
   ];

   if (!isNull _aceArsenalButton) then
   {
      _aceArsenalButton ctrlSetEventHandler ["ButtonClick", "call STB_fnc_openSelectedArsenalMission;"];
      diag_log "STB_arsenal_map_patch: TCP hook set ButtonClick on IDC 2502";
   }
};

if !(_display getVariable ["STB_tcpArsenalMouseHooked", false]) then
{
   _display setVariable ["STB_tcpArsenalMouseHooked", true];

   _display displayAddEventHandler ["MouseMoving", {
      params ["_display"];

      if !(_display getVariable ["STB_tcpArsenalPostRefreshHooked", false]) then
      {
         _display setVariable ["STB_tcpArsenalPostRefreshHooked", true];

         [_display] spawn {
            params ["_display"];

            uiSleep 0.1;

            if (!isNull _display) then
            {
               diag_log "STB_arsenal_map_patch: TCP hook reapply after mouse refresh";
               [_display] call STB_fnc_hookTcpArsenalButton;
            };
         };
      };
   }];
};

private _parentArsenalButton = _display displayCtrl 2500;

if (!isNull _parentArsenalButton && {!(_display getVariable ["STB_tcpArsenalParentHooked", false])}) then
{
   _display setVariable ["STB_tcpArsenalParentHooked", true];

   _parentArsenalButton ctrlAddEventHandler ["ButtonClick", {
      params ["_control"];

      [ctrlParent _control] spawn {
         params ["_display"];

         uiSleep 0.2;

         if (!isNull _display) then
         {
            diag_log "STB_arsenal_map_patch: TCP hook reapply after parent arsenal click";
            [_display] call STB_fnc_hookTcpArsenalButton;
         };
      };
   }];
};

[_display, _applyHook] spawn {
   params ["_display", "_applyHook"];

   for "_i" from 0 to 20 do
   {
      if (isNull _display) exitWith {};

      [_display] call _applyHook;
      uiSleep 0.1;
   };
};
