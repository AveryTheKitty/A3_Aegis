#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Quadbike_01_base_F: Car_F
	{
		class TextureSources
		{
			class Blufor
			{
				factions[] =
				{
					BLU_F,
					BLU_A_F,
					BLU_E_F
				};
			};
			class Olive
			{
				factions[] =
				{
					BLU_T_F,
					BLU_W_F,
					BLU_A_F,
					BLU_E_F
				};
			};
			class Jungle
			{
				displayName = $STR_A3_TEXTURESOURCES_JUNGLE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
                {
					"\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_jungle_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_wheel_jungle_CO.paa"
                };
				factions[] = {BLU_HIDF_F};
			};
			class IDF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_IDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
                {
					"\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_IDF_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_wheel_IDF_CO.paa"
                };
				factions[] = {IND_I_F};
			};
		};
	};
	// Arma 3 Atlas
	#include "cfgHIDF.hpp"
	#include "cfgBlufor_Atlas.hpp"
	#include "cfgIDF.hpp"
};