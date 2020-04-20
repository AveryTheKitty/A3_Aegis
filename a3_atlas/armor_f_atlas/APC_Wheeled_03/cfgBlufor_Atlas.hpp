class B_E_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 10.25;
	side = TWest;
	faction = BLU_E_F;
	crew = B_E_Crew_F;
	typicalCargo[] = {B_E_Soldier_F};
};
class B_E_APC_Wheeled_03_cannon_F: B_E_APC_Wheeled_03_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{damagehide,0},
			{damagehidevez,0},
			{damagehidehlaven,0},
			{wheel_1_1_destruct,0},
			{wheel_1_2_destruct,0},
			{wheel_1_3_destruct,0},
			{wheel_1_4_destruct,0},
			{wheel_2_1_destruct,0},
			{wheel_2_2_destruct,0},
			{wheel_2_3_destruct,0},
			{wheel_2_4_destruct,0},
			{wheel_1_1_destruct_unhide,0},
			{wheel_1_2_destruct_unhide,0},
			{wheel_1_3_destruct_unhide,0},
			{wheel_1_4_destruct_unhide,0},
			{wheel_2_1_destruct_unhide,0},
			{wheel_2_2_destruct_unhide,0},
			{wheel_2_3_destruct_unhide,0},
			{wheel_2_4_destruct_unhide,0},
			{fuel,1},
			{indicatorspeed,0},
			{wheel_1_1,0},
			{wheel_2_1,0},
			{wheel_1_2,0},
			{wheel_1_3,0},
			{wheel_2_2,0},
			{wheel_2_3,0},
			{wheel_1_4,0},
			{wheel_2_4,0},
			{daylights,0},
			{wheel_1_1_damage,0},
			{wheel_1_2_damage,0},
			{wheel_1_3_damage,0},
			{wheel_1_4_damage,0},
			{wheel_2_1_damage,0},
			{wheel_2_2_damage,0},
			{wheel_2_3_damage,0},
			{wheel_2_4_damage,0},
			{wheel_1_1_damper_damage_backanim,0},
			{wheel_1_2_damper_damage_backanim,0},
			{wheel_1_3_damper_damage_backanim,0},
			{wheel_1_4_damper_damage_backanim,0},
			{wheel_2_1_damper_damage_backanim,0},
			{wheel_2_2_damper_damage_backanim,0},
			{wheel_2_3_damper_damage_backanim,0},
			{wheel_2_4_damper_damage_backanim,0},
			{wheel_1_1_damper,0.43},
			{wheel_2_1_damper,0.45},
			{wheel_1_2_damper,0.43},
			{wheel_1_3_damper,0.44},
			{wheel_2_2_damper,0.44},
			{wheel_2_3_damper,0.46},
			{wheel_1_4_damper,0.43},
			{wheel_2_4_damper,0.44},
			{steering_1_1,0},
			{steering_2_1,0},
			{steering_1_2,0},
			{steering_2_2,0},
			{hatchdriver,0},
			{mainturret,0},
			{maingun,0},
			{obsturret,0},
			{obsgun,0},
			{damagehlaven,0},
			{damagecamonet,0},
			{vrtulea,0},
			{vrtuleb,0},
			{poklop_commander,0},
			{zasleh_rot,215},
			{zasleh2_rot,49.53},
			{zasleh_hide,0},
			{reverse_light,0},
			{hidetitan_1,1},
			{hidetitan_2,1},
			{reloadtitan_1,0},
			{reloadtitan_2,0},
			{missile_move_1,1},
			{missile_move_2,0},
			{launcher_hatch_1_rot,0},
			{launcher_hatch_1_translate_1,0},
			{launcher_hatch_1_translate_2,0},
			{launcher_hatch_2_rot,0},
			{launcher_hatch_2_translate_1,0},
			{launcher_hatch_2_translate_2,0},
			{drivingwheel,0},
			{indicatortempoil,0},
			{indicatortempwater,0},
			{indicatorammeter,0},
			{indicatorspeed_mfd_driver,0},
			{indicatorrpm,0},
			{indicatorrpm_mfd_driver,0},
			{lights_driver,0},
			{lights_driver_off,0},
			{lights_turret,0},
			{cannon_ready_light,1},
			{engine_damage_indicator,0},
			{main_gun_damage_indicator,0},
			{pedal_thrust,0},
			{pedal_brake,1},
			{turret_control_x,0},
			{turret_control_y,0},
			{com_turret_control_x,0},
			{com_turret_control_y,0},
			{driver_reverse_cam,0},
			{driver_hide_mfd,0},
			{indicatortempwater_mfd_driver,0},
			{indicatorfuel_mfd_driver,1},
			{indicator_hull_direction_mfd_driver,0},
			{indicator_main_turret_mfd_driver,0},
			{indicator_com_turret_mfd_driver,0},
			{indicator_com_turret_counter_mfd_driver,0},
			{indicator_hull_direction_mfd_com,0},
			{indicator_main_turret_mfd_com,0},
			{indicator_main_turret_onscreen_com,0},
			{indicator_com_turret_mfd_com,0},
			{indicator_com_turret_onscreen_com,0},
			{indicator_com_turret_counter_mfd_com,0},
			{indicator_hull_direction_mfd_gunner,0},
			{indicator_main_turret_mfd_gunner,0},
			{indicator_com_turret_mfd_gunner,0},
			{indicator_com_turret_counter_mfd_gunner,0},
			{indicator_com_smoke_1,0},
			{indicator_com_smoke_2,0},
			{indicator_damage_engine,0},
			{indicator_damage_fuel,0},
			{indicator_damage_wheels,0},
			{indicator_turret_damage_hull,0},
			{indicator_turret_damage_engine,0},
			{indicator_turret_damage_fuel,0},
			{indicator_turret_damage_main_gun,0},
			{indicator_turret_damage_wheels,0},
			{indicator_turret_damage_turret,0},
			{indicator_turret_damage_com_turret,0},
			{unhide_pip_error_screen,1},
			{hide_mfd_elements,1},
			{slat_front_normal_hide,0},
			{slat_front_damage_unhide,0},
			{slat_front_damage_hide,0},
			{slat_front_destroyed_unhide,0},
			{slat_front_firegeo_hide,0},
			{slat_back_normal_hide,0},
			{slat_back_damage_unhide,0},
			{slat_back_damage_hide,0},
			{slat_back_destroyed_unhide,0},
			{slat_back_firegeo_hide,0},
			{slat_left_1_normal_hide,0},
			{slat_left_1_damage_unhide,0},
			{slat_left_1_damage_hide,0},
			{slat_left_1_destroyed_unhide,0},
			{slat_left_1_firegeo_hide,0},
			{slat_left_2_normal_hide,0},
			{slat_left_2_damage_unhide,0},
			{slat_left_2_damage_hide,0},
			{slat_left_2_destroyed_unhide,0},
			{slat_left_2_firegeo_hide,0},
			{slat_left_3_normal_hide,0},
			{slat_left_3_damage_unhide,0},
			{slat_left_3_damage_hide,0},
			{slat_left_3_destroyed_unhide,0},
			{slat_left_3_firegeo_hide,0},
			{slat_right_1_normal_hide,0},
			{slat_right_1_damage_unhide,0},
			{slat_right_1_damage_hide,0},
			{slat_right_1_destroyed_unhide,0},
			{slat_right_1_firegeo_hide,0},
			{slat_right_2_normal_hide,0},
			{slat_right_2_damage_unhide,0},
			{slat_right_2_damage_hide,0},
			{slat_right_2_destroyed_unhide,0},
			{slat_right_2_firegeo_hide,0},
			{slat_right_3_normal_hide,0},
			{slat_right_3_damage_unhide,0},
			{slat_right_3_damage_hide,0},
			{slat_right_3_destroyed_unhide,0},
			{slat_right_3_firegeo_hide,0}
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
		verticalOffset = 2.527;
		verticalOffsetWorld = -0.087;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_APC_Wheeled_03_cannon_F.jpg";
	scope = public;
	accuracy = 0.3;
	displayName = $STR_A3_CFGVEHICLES_APC_WHEELED_03_WAPC0;
	class Library
	{
		libTextDesc = $STR_A3_CfgVehicles_APC_Wheeled_03_WAPC_Library0;
	};
	model = "\A3\Armor_F_Gamma\APC_Wheeled_03\APC_Wheeled_03_cannon_F.p3d";
	picture = "\A3\Armor_F_Gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
	Icon = "\A3\Armor_F_Gamma\APC_Wheeled_03\Data\UI\Map_APC_Wheeled_03_CA.paa";
	memoryPointTaskMarker = TaskMarker_1_pos;
	unitInfoType = RscUnitInfoTank;
	driverCanSee = CanSeeOptics+CanSeeEar+CanSeeEye+CanSeePeripheral+CanSeeCompass;
	gunnerCanSee = CanSeeOptics+CanSeeEye+CanSeeEar+CanSeePeripheral+CanSeeCompass;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[] =
			{
				autocannon_30mm_CTWS,
				LMG_coax,
				missiles_titan
			};
			magazines[] =
			{
				mag_2(140Rnd_30mm_MP_shells_Tracer_Red),
				mag_2(60Rnd_30mm_APFSDS_shells_Tracer_Red),
				mag_10(200Rnd_762x51_Belt_Red),
				mag_2(2Rnd_GAT_missiles)
			};
			soundServo[] = {"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.39810717,1,30};
			soundServoVertical[] = {"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.39810717,1,30};
		};
	};
	threat[] = {1,1,0.3};
	class AnimationSources: AnimationSources
	{
		class Missiles_revolving
		{
			source = revolving;
			weapon = missiles_titan;
		};
		class muzzle_rot
		{
			source = ammorandom;
			weapon = autocannon_30mm_CTWS;
		};
		class muzzle_hide
		{
			source = reload;
			weapon = autocannon_30mm_CTWS;
		};
	};
	hiddenSelections[] =
	{
		camo1,
		camo2,
		camo3,
		camo4,
		camoNet,
		camoSlat
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_olive_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_olive_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_03\Data\RCWS30_olive_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
	textureList[] =
	{
		Olive_01,1,
		Sand_01,0
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,12);
		mag_xx(200Rnd_65x39_cased_box_Red,3);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(MRAWS_HEAT_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
	};
};