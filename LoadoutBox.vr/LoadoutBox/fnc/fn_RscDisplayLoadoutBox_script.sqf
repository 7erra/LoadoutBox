#include "..\hpp\resincl.inc"
#define SELF TER_fnc_RscDisplayLoadoutBox_script
params["_mode", "_params"];
switch _mode do {
	case "onLoad":{
		_params params ["_display"];
		_cfgLoadouts = missionConfigFile >> "CfgLoadoutBox" >> "Loadouts";
		_ctrlLoadouts = _display displayCtrl IDC_RSCDISPLAYLOADOUTBOX_LOADOUTS;
		_loadoutArray = "true" configClasses _cfgLoadouts;
		_loadoutArray apply {
			private _ind = _ctrlLoadouts lbAdd getText(_x>>"displayName");
			_ctrlLoadouts lbSetPicture [_ind, getText(_x>>"icon")];
			_ctrlLoadouts lbSetData [_ind, configName _x];
		};
		_ctrlLoadouts ctrlAddEventHandler ["LBDblClick",{
			["doubleclick", _this] call SELF;
		}];
	};
	case "doubleclick":{
		_params params ["_ctrlLoadouts"];
		(ctrlParent _ctrlLoadouts) closeDisplay 1;
	};
	case "onUnload":{
		_params params ["_display", "_exitCode"];
		if (_exitCode == 1) then {
			_ctrlLoadouts = _display displayCtrl IDC_RSCDISPLAYLOADOUTBOX_LOADOUTS;
			_loadout = _ctrlLoadouts lbData (lbCurSel _ctrlLoadouts);
			_cfgLoadout = missionConfigFile >> "CfgLoadoutBox" >> "Loadouts" >> _loadout;
			player setUnitLoadout _cfgLoadout;
			//--- Apply unit traits
			["engineer", "explosiveSpecialist", "medic", "UAVHacker"] apply {
				player setUnitTrait [_x, getNumber(_cfgLoadout>>_x) == 1];
			};
		};
	};
};