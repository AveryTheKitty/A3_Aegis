#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgVehicles
{
	// Arma 3
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class HitPoints;
	};
	class MBT_02_base_F: Tank_F
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitFuel;
			class HitLTrack;
			class HitRTrack;
			class HitERA_Front
			{
				class DestructionEffects
				{
					class Explo;
					class Smoke;
					class Sound;
				};
			};
			class HitERA_Left_1: HitERA_Front
			{
				class DestructionEffects
				{
					class Explo;
					class Smoke;
					class Sound;
				};
			};
			class HitERA_Left_2: HitERA_Front
			{
				class DestructionEffects
				{
					class Explo;
					class Smoke;
					class Sound;
				};
			};
			class HitERA_Right_1: HitERA_Front
			{
				class DestructionEffects
				{
					class Explo;
					class Smoke;
					class Sound;
				};
			};
			class HitERA_Right_2: HitERA_Front
			{
				class DestructionEffects
				{
					class Explo;
					class Smoke;
					class Sound;
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[] =
						{
							mag_2(150Rnd_127x108_Ball),
							SmokeLauncherMag
						};
                        class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
							{
								class Components: components
								{
									class SensorDisplay
									{
										componentType = SensorsDisplayComponent;
										range[] =
                                        {
                                            4000,
                                            2000,
                                            1000,
                                            8000
                                        };
										resource = RscCustomInfoSensors;
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
							{
								defaultDisplay = SensorDisplay;
								class Components: components
								{
									class SensorDisplay
									{
										componentType = SensorsDisplayComponent;
										range[] =
                                        {
                                            4000,
                                            2000,
                                            1000,
                                            8000
                                        };
										resource = RscCustomInfoSensors;
									};
								};
							};
                        };
					};
				};
				weapons[] =
				{
					cannon_125mm,
					LMG_coax
				};
				magazines[] =
				{
					16Rnd_125mm_APFSDS_T_Green,
					12Rnd_125mm_HEAT_T_Green,
					12Rnd_125mm_HE_T_Green,
					mag_20(200Rnd_762x51_Belt_Green),
					4Rnd_125mm_cannon_missiles
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
					{
						class Components: components
						{
							class SensorDisplay
							{
								componentType = SensorsDisplayComponent;
								range[] =
                                {
                                    4000,
                                    2000,
                                    1000,
                                    8000
                                };
								resource = RscCustomInfoSensors;
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
					{
						defaultDisplay = SensorDisplay;
						class Components: components
						{
							class SensorDisplay
							{
								componentType = SensorsDisplayComponent;
								range[] =
                                {
                                    4000,
                                    2000,
                                    1000,
                                    8000
                                };
								resource = RscCustomInfoSensors;
							};
						};
					};
				};
			};
		};
		animationList[] =
		{
			showCamonetHull,0,
			showCamonetCannon,0,
			showCamonetTurret,0,
			showLog,1
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ocamo,2);
		};
	};
	class MBT_02_arty_base_F: MBT_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[] =
						{
							64Rnd_40mm_G_belt,
							mag_2(200Rnd_127x99_mag_Tracer_Green),
							SmokeLauncherMag
						};
					};
				};
			};
		};
	};
	class O_MBT_02_base_F: MBT_02_base_F
	{
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUkhk_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_turret_RUkhk_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUkhk_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class O_MBT_02_arty_base_F: MBT_02_arty_base_F
	{
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUkhk_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_scorcher_RUkhk_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUkhk_CO.paa",
					"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUkhk_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class O_MBT_02_cannon_F;
	class O_MBT_02_arty_F;
	// Arma 3 Apex
	class O_T_MBT_02_cannon_ghex_F: O_MBT_02_cannon_F
	{
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ghex_F,2);
		};
	};
	class O_T_MBT_02_arty_ghex_F: O_MBT_02_arty_F
	{
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ghex_F,2);
		};
	};
	// Arma 3 Aegis
	#include "cfgOpfor_Tacops.hpp"		// CSAT (African)
	#include "cfgSpetsnaz.hpp"			// Russia
};