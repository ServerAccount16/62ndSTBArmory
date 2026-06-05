disableSerialization;

diag_log "STB_arsenal_map_patch: main menu monitor started";

while {true} do
{
   uiSleep 0.25;

   private _display = findDisplay 0;

   if (!isNull _display) then
   {
      private _aceArsenalButton = _display displayCtrl 2502;

      if (!isNull _aceArsenalButton && {!(_aceArsenalButton getVariable ["STB_arsenalMapPatch_hooked", false])}) then
      {
         _aceArsenalButton setVariable ["STB_arsenalMapPatch_hooked", true];
         _aceArsenalButton ctrlSetEventHandler ["ButtonClick", "call STB_fnc_openSelectedArsenalMission;"];

         diag_log format [
            "STB_arsenal_map_patch: main menu monitor hooked IDC 2502 display=%1 control=%2 class=%3",
            _display,
            _aceArsenalButton,
            ctrlClassName _aceArsenalButton
         ];
      };
   };
};
