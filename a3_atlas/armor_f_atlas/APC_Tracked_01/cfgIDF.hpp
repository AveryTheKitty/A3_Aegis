class I_I_APC_Tracked_01_AA_F: B_APC_Tracked_01_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_APC_Tracked_01_AA_F.jpg";
	scope = public;
	scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_I_I_APC_Tracked_01_AA_F0;
	side = TGuerrila;
	faction = IND_I_F;
	crew = I_I_crew_F;
	typicalCargo[] = {I_I_soldier_F};
	class TransportWeapons
	{
		weap_xx(arifle_TRG21_black_F,2);
		weap_xx(LMG_Zafir_black_F,1);
		weap_xx(launch_MRAWS_olive_rail_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,24);
		mag_xx(150Rnd_762x51_Box_Yellow,8);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellYellow,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(MRAWS_HEAT55_F,3);
		mag_xx(MRAWS_HE_F,3);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_AA_body_IDF_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\MBT_01_body_IDF_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_AA_tower_IDF_CO.paa",
		"\A3\Armor_F\Data\camonet_greenbeige_CO.paa"
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics{};
			};
			magazines[] =
			{
				500Rnd_35mm_AA_shells_Tracer_Yellow,
				mag_2(4Rnd_Titan_long_missiles)
			};
		};
	};
	class TextureSources
	{
		class IDF
		{
			displayName = $STR_A3_A_TEXTURESOURCES_IDF0;
			author = $STR_A3_A_AveryTheKitty;
			textures[] =
			{
				"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_AA_body_IDF_CO.paa",
				"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\MBT_01_body_IDF_CO.paa",
				"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_AA_tower_IDF_CO.paa",
				"\A3\Armor_F\Data\camonet_greenbeige_CO.paa"
			};
			factions[] = {IND_I_F};
		};
	};
};
/*
class I_I_APC_Tracked_01_cannon_F: B_APC_Tracked_01_cannon_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {damagehide,0},
            {wheel_koll1,0},
            {wheel_kolol1,0},
            {wheel_podkolol1,0},
            {wheel_kolp1,0},
            {wheel_kolop1,0},
            {wheel_podkolop1,0},
            {wheel_koll2,0},
            {wheel_kolp2,0},
            {wheel_kolol2,0},
            {wheel_kolol3,0},
            {wheel_kolol4,0},
            {wheel_kolol5,0},
            {wheel_kolol6,0},
            {wheel_kolop2,0},
            {wheel_kolop3,0},
            {wheel_kolop4,0},
            {wheel_kolop5,0},
            {wheel_kolop6,0},
            {wheel_podkolol2,0},
            {wheel_podkolol3,0},
            {wheel_podkolol4,0},
            {wheel_podkolol5,0},
            {wheel_podkolol6,0},
            {wheel_podkolop2,0},
            {wheel_podkolop3,0},
            {wheel_podkolop4,0},
            {wheel_podkolop5,0},
            {wheel_podkolop6,0},
            {podkolol1_hide_damage,0},
            {podkolol2_hide_damage,0},
            {podkolol3_hide_damage,0},
            {podkolol4_hide_damage,0},
            {podkolol5_hide_damage,0},
            {podkolol6_hide_damage,0},
            {podkolol7_hide_damage,0},
            {podkolol8_hide_damage,0},
            {podkolop1_hide_damage,0},
            {podkolop2_hide_damage,0},
            {podkolop3_hide_damage,0},
            {podkolop4_hide_damage,0},
            {podkolop5_hide_damage,0},
            {podkolop6_hide_damage,0},
            {podkolop7_hide_damage,0},
            {podkolop8_hide_damage,0},
            {damagevez,0},
            {mainturret,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {reverse_light,1},
            {plates_1_y,0},
            {plates_2_y,0},
            {plates_1_x,0},
            {plates_2_x,0},
            {plates_1_bank,0},
            {plates_2_bank,0},
            {drivingwheel,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {cannon_ready_light,0},
            {engine_damage_indicator,0},
            {main_gun_damage_indicator,0},
            {pedal_thrust,0},
            {pedal_brake,0},
            {driver_reverse_cam,1},
            {driver_reverse_pip_off,1},
            {driver_hide_mfd,1},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_hull_direction_mfd_com,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_smoke_1,1},
            {indicator_com_smoke_2,1},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_track,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_tracks,0},
            {indicator_turret_damage_turret,0},
            {indicator_turret_damage_com_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {hatchcommander,0},
            {zasleh_rot,464},
            {zasleh2_rot,519.61},
            {zasleh_hide,0},
            {maingunoptics,0},
            {turret_control_x,0},
            {turret_control_y,0},
            {com_turret_control_x,0},
            {com_turret_control_y,0}
		};
		hide[] =
		{
            clan,
            zasleh2,
            zasleh_1,
            light_l,
            light_r,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 2.448;
		verticalOffsetWorld = -0.185;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_APC_Tracked_01_cannon_F.jpg";
	scope = protected;
	scopeCurator = private;
    //displayName = $STR_A3_A_CfgVehicles_I_I_APC_Tracked_01_cannon_F0;
	side = TGuerrila;
	faction = IND_I_F;
	crew = I_I_crew_F;
	typicalCargo[] = {I_I_soldier_F};
	class TransportWeapons
	{
		weap_xx(arifle_TRG21_black_F,2);
		weap_xx(LMG_Zafir_black_F,1);
		weap_xx(launch_MRAWS_olive_rail_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,24);
		mag_xx(150Rnd_762x51_Box_Yellow,8);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellYellow,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(MRAWS_HEAT55_F,3);
		mag_xx(MRAWS_HE_F,3);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_body_IDF_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\MBT_01_body_IDF_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\RCWS30_IDF_CO.paa",
		"\A3\Armor_F\Data\camonet_greenbeige_CO.paa"
	};
	class TextureSources
	{
		class IDF
		{
			displayName = $STR_A3_A_TEXTURESOURCES_IDF0;
			author = $STR_A3_A_AveryTheKitty;
			textures[] =
			{
				"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_body_IDF_CO.paa",
				"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\MBT_01_body_IDF_CO.paa",
				"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\RCWS30_IDF_CO.paa",
				"\A3\Armor_F\Data\camonet_greenbeige_CO.paa"
			};
			factions[] = {IND_I_F};
		};
	};
};
*/
class I_I_APC_Tracked_01_CRV_F: B_APC_Tracked_01_CRV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_APC_Tracked_01_CRV_F.jpg";
	scope = public;
	scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_I_I_APC_Tracked_01_CRV_F0;
	side = TGuerrila;
	faction = IND_I_F;
	crew = I_I_crew_F;
	typicalCargo[] = {I_I_soldier_F};
	class TransportWeapons
	{
		weap_xx(arifle_TRG21_black_F,2);
		weap_xx(LMG_Zafir_black_F,1);
		weap_xx(launch_MRAWS_olive_rail_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,24);
		mag_xx(150Rnd_762x51_Box_Yellow,8);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellYellow,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(MRAWS_HEAT55_F,3);
		mag_xx(MRAWS_HE_F,3);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_body_CRV_IDF_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\MBT_01_body_IDF_CO.paa",
		"\A3_Atlas\Data_F_Atlas\Vehicles\Turret_IDF_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_CRV_IDF_CO.paa",
		"\A3\Armor_F\Data\camonet_greenbeige_CO.paa"
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {mag_2(200Rnd_127x99_mag_Tracer_Yellow)};
		};
		class CommanderOptics: CommanderOptics{};
	};
	class TextureSources
	{
		class IDF
		{
			displayName = $STR_A3_A_TEXTURESOURCES_IDF0;
			author = $STR_A3_A_AveryTheKitty;
			textures[] =
			{
				"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_body_CRV_IDF_CO.paa",
				"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\MBT_01_body_IDF_CO.paa",
				"\A3_Atlas\Data_F_Atlas\Vehicles\Turret_IDF_CO.paa",
				"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_CRV_IDF_CO.paa",
				"\A3\Armor_F\Data\camonet_greenbeige_CO.paa"
			};
			factions[] = {IND_I_F};
		};
	};
};
class I_I_APC_Tracked_01_rcws_F: B_APC_Tracked_01_rcws_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {damagehide,0},
            {wheel_koll1,0},
            {wheel_kolol1,0},
            {wheel_podkolol1,0},
            {wheel_kolp1,0},
            {wheel_kolop1,0},
            {wheel_podkolop1,0},
            {wheel_koll2,0},
            {wheel_kolp2,0},
            {wheel_kolol2,0},
            {wheel_kolol3,0},
            {wheel_kolol4,0},
            {wheel_kolol5,0},
            {wheel_kolol6,0},
            {wheel_kolop2,0},
            {wheel_kolop3,0},
            {wheel_kolop4,0},
            {wheel_kolop5,0},
            {wheel_kolop6,0},
            {wheel_podkolol2,0},
            {wheel_podkolol3,0},
            {wheel_podkolol4,0},
            {wheel_podkolol5,0},
            {wheel_podkolol6,0},
            {wheel_podkolop2,0},
            {wheel_podkolop3,0},
            {wheel_podkolop4,0},
            {wheel_podkolop5,0},
            {wheel_podkolop6,0},
            {podkolol1_hide_damage,0},
            {podkolol2_hide_damage,0},
            {podkolol3_hide_damage,0},
            {podkolol4_hide_damage,0},
            {podkolol5_hide_damage,0},
            {podkolol6_hide_damage,0},
            {podkolol7_hide_damage,0},
            {podkolol8_hide_damage,0},
            {podkolop1_hide_damage,0},
            {podkolop2_hide_damage,0},
            {podkolop3_hide_damage,0},
            {podkolop4_hide_damage,0},
            {podkolop5_hide_damage,0},
            {podkolop6_hide_damage,0},
            {podkolop7_hide_damage,0},
            {podkolop8_hide_damage,0},
            {damagevez,0},
            {mainturret,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {reverse_light,1},
            {plates_1_y,0},
            {plates_2_y,0},
            {plates_1_x,0},
            {plates_2_x,0},
            {plates_1_bank,0},
            {plates_2_bank,0},
            {drivingwheel,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {cannon_ready_light,0},
            {engine_damage_indicator,0},
            {main_gun_damage_indicator,0},
            {pedal_thrust,0},
            {pedal_brake,0},
            {driver_reverse_cam,1},
            {driver_reverse_pip_off,1},
            {driver_hide_mfd,1},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_hull_direction_mfd_com,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_smoke_1,1},
            {indicator_com_smoke_2,1},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_track,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_tracks,0},
            {indicator_turret_damage_turret,0},
            {indicator_turret_damage_com_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {hatchcommander,0},
            {zasleh_rot,464},
            {zasleh2_rot,519.61},
            {zasleh_hide,0},
            {maingunoptics,0},
            {turret_control_x,0},
            {turret_control_y,0},
            {com_turret_control_x,0},
            {com_turret_control_y,0}
		};
		hide[] =
		{
            clan,
            zasleh2,
            zasleh_1,
            light_l,
            light_r,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 2.448;
		verticalOffsetWorld = -0.185;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_APC_Tracked_01_rcws_F.jpg";
	scope = public;
	scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_I_I_APC_Tracked_01_rcws_F0;
	side = TGuerrila;
	faction = IND_I_F;
	crew = I_I_crew_F;
	typicalCargo[] = {I_I_soldier_F};
	class TransportWeapons
	{
		weap_xx(arifle_TRG21_black_F,2);
		weap_xx(LMG_Zafir_black_F,1);
		weap_xx(launch_MRAWS_olive_rail_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,24);
		mag_xx(150Rnd_762x51_Box_Yellow,8);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellYellow,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(MRAWS_HEAT55_F,3);
		mag_xx(MRAWS_HE_F,3);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	hiddenSelectionsTextures[]=
	{
		"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_body_IDF_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\MBT_01_body_IDF_CO.paa",
		"\A3_Atlas\Data_F_Atlas\Vehicles\Turret_IDF_CO.paa",
		"\A3\Armor_F\Data\camonet_greenbeige_CO.paa"
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
			{
				mag_2(64Rnd_40mm_G_belt),
				mag_4(200Rnd_127x99_mag_Tracer_Yellow)
			};
		};
		class CommanderOptics: CommanderOptics{};
	};
	class TextureSources
	{
		class IDF
		{
			displayName = $STR_A3_A_TEXTURESOURCES_IDF0;
			author = $STR_A3_A_AveryTheKitty;
			textures[] =
			{
				"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\APC_Tracked_01_body_IDF_CO.paa",
				"\A3_Atlas\Armor_F_Atlas\APC_Tracked_01\Data\MBT_01_body_IDF_CO.paa",
				"\A3_Atlas\Data_F_Atlas\Vehicles\Turret_IDF_CO.paa",
				"\A3\Armor_F\Data\camonet_greenbeige_CO.paa"
			};
			factions[] = {IND_I_F};
		};
	};
};