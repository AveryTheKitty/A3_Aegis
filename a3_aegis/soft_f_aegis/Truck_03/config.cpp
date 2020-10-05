#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Truck_03_base_F;
	class O_Truck_03_transport_F: Truck_03_base_F
	{
		cargoProxyIndexes[] =
        {
            2,
            3,
            4,
            5,
            7,
            8,
            9,
            10,
            11,
            13,
            1
        };
		getInProxyOrder[] =
        {
            2,
            3,
            4,
            5,
            6,
            7,
            8,
            9,
            10,
            11,
            12,
            13,
            1
        };
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class O_Truck_03_covered_F: Truck_03_base_F
	{
		cargoProxyIndexes[] =
        {
            2,
            3,
            4,
            5,
            7,
            8,
            9,
            10,
            11,
            13,
            1
        };
		getInProxyOrder[] =
        {
            2,
            3,
            4,
            5,
            6,
            7,
            8,
            9,
            10,
            11,
            12,
            13,
            1
        };
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cover_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class O_Truck_03_repair_F: Truck_03_base_F
	{
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ammo_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class O_Truck_03_ammo_F: Truck_03_base_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Truck_03_ammo_F.jpg";
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_CO.paa"
		};
		class TextureSources
		{
			class Hex
			{
				textures[] =
				{
					"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
					"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
					"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_CO.paa"
				};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_ghex_CO.paa"
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class O_Truck_03_fuel_F: Truck_03_base_F
	{
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_fuel_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class O_Truck_03_medical_F: Truck_03_base_F
	{
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUkhk_CO.paa",
        			"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cover_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	// Arma 3 Apex
	class O_T_Truck_03_ammo_ghex_F: O_Truck_03_ammo_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Truck_03_ammo_ghex_F.jpg";
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
			"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
			"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_ghex_CO.paa"
		};
	};
	// Arma 3 Aegis
	#include "cfgSpetsnaz.hpp"
};
