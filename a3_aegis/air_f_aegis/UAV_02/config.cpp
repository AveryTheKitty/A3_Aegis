#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class UAV;
	class UAV_02_base_F: UAV
	{
		class Components;
		class TextureSources
		{
			class Blufor
			{
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F,
					BLU_A_F,
					BLU_A_tna_F,
					BLU_A_wdl_F
				};
			};
			class Rus
			{
				displayName = $STR_A3_A_TEXTURESOURCES_RUS0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_02\Data\UAV_02_RUgrey_CO.paa"};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class UAV_02_dynamicLoadout_base_F: UAV_02_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class pylons
				{
					class pylons1;
					class pylons2;
				};
				class presets
				{
					class empty;
					class default;
					class CAS;
				};
			};
		};
	};
	class B_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F{};
	class O_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F{};
	// Arma 3 Aegis
	#include "cfgBlufor_Exp.hpp"        // US (Pacific)
	#include "cfgBlufor_Enoch.hpp"		// US (Woodland)
	#include "cfgSpetsnaz.hpp"          // Russia
	#include "cfgBlufor_Aegis.hpp"		// BAF
};