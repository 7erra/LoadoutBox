params ["_box"];
if !(isNil {_box getVariable "TER_fnc_addLoadoutBox_addID"}) exitWith {};
_addID = _box addAction ["Loadout Box",{
	params ["_target", "_caller", "_actionId", "_arguments"];
	createDialog "RscDisplayLoadoutBox";
}];
_box setVariable ["TER_fnc_addLoadoutBox_addID", _addID];