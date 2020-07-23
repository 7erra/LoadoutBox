params ["_box"];
_box addAction ["Loadout Box",{
	params ["_target", "_caller", "_actionId", "_arguments"];
	createDialog "RscDisplayLoadoutBox";
}];