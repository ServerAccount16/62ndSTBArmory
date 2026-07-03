params ["_unit"];

if (!hasInterface) exitWith {};

[_unit, true, false] call ace_arsenal_fnc_initBox;

[{!isNull findDisplay 46}, {
	params ["_unit"];

	[_unit, _unit, true] call ace_arsenal_fnc_openBox;
}, _unit] call CBA_fnc_waitUntilAndExecute;
