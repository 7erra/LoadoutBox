class RscDisplayLoadoutBox
{
	idd = IDD_RSCDISPLAYLOADOUTBOX;
	onLoad = ["onLoad", _this] call TER_fnc_RscDisplayLoadoutBox_script;
	onUnload = ["onUnload", _this] call TER_fnc_RscDisplayLoadoutBox_script;
	class controlsBackground
	{
		class Background: RscText
		{
			x = 13.5 * GUI_GRID_CENTER_W + GUI_GRID_CENTER_X;
			y = 3.5 * GUI_GRID_CENTER_H + GUI_GRID_CENTER_Y;
			w = 13.5 * GUI_GRID_CENTER_W;
			h = 19 * GUI_GRID_CENTER_H;
			colorBackground[] = {0,0,0,0.8};
		};
	};
	class controls
	{
		class Title: RscText
		{
			text = "Loadout Box"; //--- ToDo: Localize;
			x = 13.5 * GUI_GRID_CENTER_W + GUI_GRID_CENTER_X;
			y = 2.5 * GUI_GRID_CENTER_H + GUI_GRID_CENTER_Y;
			w = 13.5 * GUI_GRID_CENTER_W;
			h = 1 * GUI_GRID_CENTER_H;
			colorBackground[] = GUI_BCG_COLOR;
		};
		class Loadouts: RscListbox
		{
			idc = IDC_RSCDISPLAYLOADOUTBOX_LOADOUTS;
			x = 14 * GUI_GRID_CENTER_W + GUI_GRID_CENTER_X;
			y = 4 * GUI_GRID_CENTER_H + GUI_GRID_CENTER_Y;
			w = 12.5 * GUI_GRID_CENTER_W;
			h = 15.8 * GUI_GRID_CENTER_H;
			rowHeight = 2 * GUI_GRID_CENTER_H;
		};
		class Ok: RscButtonMenuOK
		{
			x = 14 * GUI_GRID_CENTER_W + GUI_GRID_CENTER_X;
			y = 19.9 * GUI_GRID_CENTER_H + GUI_GRID_CENTER_Y;
			w = 12.5 * GUI_GRID_CENTER_W;
			h = 1 * GUI_GRID_CENTER_H;
		};
		class Cancel: RscButtonMenuCancel
		{
			x = 14 * GUI_GRID_CENTER_W + GUI_GRID_CENTER_X;
			y = 21 * GUI_GRID_CENTER_H + GUI_GRID_CENTER_Y;
			w = 12.5 * GUI_GRID_CENTER_W;
			h = 1 * GUI_GRID_CENTER_H;
		};
	};
};
