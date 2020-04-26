#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Helicopter_Base_F;
	class UAV_01_base_F: Helicopter_Base_F
	{
		class TextureSources
		{
			class IDF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_IDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Atlas\Air_F_Atlas\UAV_01\Data\UAV_01_IDF_CO.paa"};
				factions[] = {IND_IDF_F};
			};
		};
	};
	class B_UAV_01_F;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	// Arma 3 Atlas
	#include "cfgBlufor_Atlas.hpp"
	#include "cfgIDF.hpp"
};