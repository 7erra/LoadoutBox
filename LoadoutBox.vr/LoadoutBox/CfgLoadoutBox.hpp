#include "\a3\ui_f\hpp\defineCommon.inc"
#include "\a3\ui_f\hpp\defineResincl.inc"
#include "hpp\resincl.inc"
#include "controls.hpp"
#include "RscDisplayLoadoutBox.hpp"

class CfgLoadoutBox
{
	class Loadouts
	{
		class Test1
		{
			displayName = "Light";									// Name visible in the menu
			icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";	// Icon displayed next to the name
			role = "Assault";										// Optional, see CfgRoles
			// Exported from Arsenal by Terra
			uniformClass = "U_O_SpecopsUniform_ocamo";
			backpack = "";
			weapons[] = {"SMG_03_black","Throw","Put"};
			magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};
			items[] = {"FirstAidKit"};
			linkedItems[] = {"V_Rangemaster_belt","H_Cap_headphones","G_Shades_Red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		};
		class Blufor1
		{
			displayName = "Test Loadout";									// Name visible in the menu
			icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";	// Icon displayed next to the name
			role = "Assault";										// Optional, see CfgRoles

			// Loadout definition, uses same entries as CfgVehicles classes
			weapons[] = {
				"arifle_MXC_F",
				"Binocular"
			};
			magazines[] = {
				"30Rnd_65x39_caseless_mag",
				"30Rnd_65x39_caseless_mag",
				"SmokeShell"
			};
			items[] = {
				"FirstAidKit"
			};
			linkedItems[] = {
				"V_Chestrig_khk",
				"H_Watchcap_blk",
				"optic_Aco",
				"acc_flashlight",
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemRadio"
			};
			uniformClass = "U_B_CombatUniform_mcam_tshirt";
			backpack = "B_AssaultPack_mcamo";
		};
		class Engineer: Test1
		{
			displayName = "Engineer";
			engineer = 1;
		};
		class ExplosiveSpecialist: Test1
		{
			displayName = "Demo man";
			explosiveSpecialist = 1;
		};
		class Medic: Test1
		{
			displayName = "Medic";
			medic = 1;
		};
		class UAVHacker: Test1
		{
			displayName = "Hackerman";
			UAVHacker = 1;
		};

	};
};