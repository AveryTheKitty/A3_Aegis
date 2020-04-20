#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Jets
	class StaticMGWeapon;
	class Radar_System_02_base_F: StaticMGWeapon
	{
		class TextureSources
		{
			class AridHex
			{
				factions[] = {OPF_F};
			};
			class JungleHex: AridHex
			{
				factions[] = {OPF_T_F};
			};
			class Green: AridHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				factions[] = {OPF_R_F};
				textures[] =
				{
					"\A3_Aegis\Static_F_Aegis\Radar_System_02\Data\Radar_System_02_mat_01_RUS_CO.paa",
					"\A3_Aegis\Static_F_Aegis\Radar_System_02\Data\Radar_System_02_mat_02_RUS_CO.paa"
				};
			};
		};
		textureList[] =
		{
			AridHex,1,
			JungleHex,0,
			Green,0
		};
	};
	// Arma 3 Aegis
	#include "cfgOpfor_Exp.hpp"
	#include "cfgSpetsnaz.hpp"
};