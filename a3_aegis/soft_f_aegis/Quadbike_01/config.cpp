#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Quadbike_01_base_F: Car_F
	{
		class Reflectors
		{
			class Left
			{
				useFlare = true;
			};
		};
		class TextureSources
		{
			class Blufor
			{
				factions[] =
				{
					BLU_F,
					BLU_A_F
				};
			};
			class Olive
			{
				factions[] =
				{
					BLU_T_F,
					BLU_W_F,
					BLU_A_F
				};
			};
			class LDF
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_eaf_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_wheel_eaf_CO.paa"
				};
			};
			class Guerrilla_03
			{
				displayName = "FIA 3";
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Gamma\Quadbike_01\Data\Quadbike_01_IG_CO.paa",
					"\A3\Soft_F_Gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"
				};
				factions[] =
				{
					BLU_G_F,
					IND_G_F,
					OPF_G_F
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_RUS_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_wheel_RUS_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
	};
	class I_G_Quadbike_01_F: Quadbike_01_base_F
	{
		textureList[] += {Guerrilla_03,1};
	};
	// Arma 3 Contact
	class I_E_Quadbike_01_F: Quadbike_01_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_eaf_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_wheel_eaf_CO.paa"
		};
	};
	// Arma 3 Aegis
	#include "cfgSyndikat.hpp"
	#include "cfgOpfor_Tacops.hpp"
	#include "cfgBlufor_Enoch.hpp"
	#include "cfgSpetsnaz.hpp"
	#include "cfgBlufor_Aegis.hpp"
	#include "cfgOpfor_Aegis.hpp"
};