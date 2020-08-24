#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
	// Arma 3
	class V_Pocketed_base_F;
	// Arma 3 Opposing Forces
	class V_Pocketed_hunter_F: V_Pocketed_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "Multi-Pocket Vest (Camo)";
		//picture = "\A3_Opf\Characters_F_Opf\Vests\Data\UI\icon_V_Pocketed_hunter_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Opf\Characters_F_Opf\Vests\Data\V_Pocketed_cloth_camo_CO.paa"};
	};
	class V_Pocketed_wdl_F: V_Pocketed_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "Multi-Pocket Vest (Woodland)";
		picture = "\A3_Opf\Characters_F_Opf\Vests\Data\UI\icon_V_Pocketed_wdl_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Opf\Characters_F_Opf\Vests\Data\V_Pocketed_cloth_wdl_CO.paa"};
	};
};