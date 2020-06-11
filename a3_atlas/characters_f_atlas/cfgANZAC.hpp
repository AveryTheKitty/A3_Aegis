// Arma 3
class B_Pilot_F;
class B_diver_F;
// Arma 3 Atlas
class B_ANZAC_Man_Base_F: B_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = BLU_ANZAC_F;
	genericNames = AustralianMen;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_Tanoan,
		G_NATO_tropic
	};
};
class B_CombatFatigues_01_aus_F: B_Soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_CombatUniform_aucamo_f;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_aucamo_CO.paa"};
};
class B_CombatFatigues_01_Tshirt_aus_F: B_Soldier_AR_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_CombatUniform_aucamo_tshirt_f;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_aucamo_CO.paa",
		"\A3\Characters_F\Common\Data\basicbody_brown_CO.paa"
	};
};
class B_ReconFatigues_01_aus_F: B_Soldier_SL_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_CombatUniform_aucamo_vest_f;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_aucamo_CO.paa"};
};
class B_ANZAC_PilotCoveralls_01_ANZAC: B_Pilot_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_B_PilotCoveralls_ANZAC;
	hiddenSelections[] =
	{
		camo,
		insignia
	};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\pilot_suit_aucamo_CO.paa"};
};
class B_ANZAC_Wetsuit_01_ANZAC: B_diver_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_B_Wetsuit_ANZAC;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_suit_aucamo_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa"
	};
	hiddenSelectionsMaterials[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit.rvmat",
        "\A3\Characters_F\Common\Data\diver_equip.rvmat"
    };
	hiddenUnderwaterSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa",
		"\A3\Characters_F\Data\visors_CA.paa"
	};
};
class B_ANZAC_CBRN_Man_Oversuit_01_Aucamo_F: B_CBRN_Man_Oversuit_01_MTP_F
{
	author = $STR_A3_A_AveryTheKitty;
	uniformClass = U_B_ANZAC_CBRN_Suit_01_Aucamo_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\CBRN_Suit_01_Aucamo_CO.paa"};
};
class B_ANZAC_Soldier_base_F: B_ANZAC_Man_Base_F
{
	uniformClass = U_B_CombatUniform_aucamo_f;
};
class B_ANZAC_Soldier_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	uniformClass = U_B_CombatUniform_aucamo_f;
	linkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	weapons[] =
	{
		arifle_AUG_blk_arco_LP_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_blk_arco_LP_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	role = Rifleman;
};
class B_ANZAC_Soldier_unarmed_F: B_ANZAC_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
class B_ANZAC_Soldier_A_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
    uniformClass = U_B_CombatUniform_aucamo_f;
	linkedItems[] =
	{
		H_HelmetHBK_olive_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_olive_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	backpack = B_Carryall_khk_ANZACAmmo_F;
	weapons[] =
	{
		arifle_AUG_blk_aco_LP_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_blk_aco_LP_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
};
class B_ANZAC_Soldier_AR_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_MG_s};
			speechPlural[] = {veh_infantry_MG_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_MG_s;
	textPlural = $STR_A3_nameSound_veh_infantry_MG_p;
	nameSound = veh_infantry_MG_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Soldier_AR_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
    uniformClass = U_B_CombatUniform_aucamo_tshirt_f;
	linkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	weapons[] =
	{
		LMG_03_ARCO_LP_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_03_ARCO_LP_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
	threat[] = {1,0.1,0.3};
};
class B_ANZAC_Soldier_GL_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	uniformClass = U_B_CombatUniform_aucamo_f;
	linkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_heavy_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_heavy_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	weapons[] =
	{
		arifle_AUG_GL_blk_aco_LP_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_GL_blk_aco_LP_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	cost = 130000;
	role = Grenadier;
	threat[] = {1,0.3,0.1};
};
class B_ANZAC_soldier_M_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	uniformClass = U_B_CombatUniform_aucamo_f;
	linkedItems[] =
	{
		H_HelmetHBK_olive_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_olive_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	weapons[] =
	{
		srifle_DMR_03_AMS_LP_BI_F,
		hgun_G17_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_DMR_03_AMS_LP_BI_F,
		hgun_G17_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(20Rnd_762x51_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(20Rnd_762x51_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 250000;
	role = Marksman;
};
class B_ANZAC_Officer_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_officer_s};
			speechPlural[] = {veh_infantry_officer_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_officer_s;
	textPlural = $STR_A3_nameSound_veh_infantry_officer_p;
	nameSound = veh_infantry_officer_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
	uniformClass = U_B_CombatUniform_aucamo_f;
	weapons[] =
	{
		SMG_05_F,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		SMG_05_F,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
		mag_2(17Rnd_9x21_Mag),
        SmokeShellBlue,
        SmokeShellOrange,
        SmokeShellPurple
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
		mag_2(17Rnd_9x21_Mag),
        SmokeShellBlue,
        SmokeShellOrange,
        SmokeShellPurple
	};
	linkedItems[] =
	{
		H_Beret_red,
		V_BandollierB_rgr,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_Beret_red,
		V_BandollierB_rgr,
		ItemGPS,
		DefaultManLinkedItems
	};
    cost = 600000;
	camouflage = 1.6;
	icon = iconManOfficer;
	role = Rifleman;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_Tanoan,
		G_NATO_casual
	};
};
class B_ANZAC_Soldier_SL_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	uniformClass = U_B_CombatUniform_aucamo_vest_f;
	linkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_heavy_aucamo_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_heavy_aucamo_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	weapons[] =
	{
		arifle_AUG_GL_blk_arco_LP_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AUG_GL_blk_arco_LP_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(B_A_IR_Grenade),
        SmokeShell,
        SmokeShellBlue,
        SmokeShellOrange,
        SmokeShellPurple,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokePurple_Grenade_shell,
		1Rnd_SmokeBlue_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(B_A_IR_Grenade),
        SmokeShell,
        SmokeShellBlue,
        SmokeShellOrange,
        SmokeShellPurple,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokePurple_Grenade_shell,
		1Rnd_SmokeBlue_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell
	};
	cost = 250000;
	camouflage = 1.4;
	icon = iconManLeader;
	role = Rifleman;
};
class B_ANZAC_Soldier_TL_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	uniformClass = U_B_CombatUniform_aucamo_vest_f;
	linkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_heavy_aucamo_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_heavy_aucamo_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	weapons[] =
	{
		arifle_AUG_GL_blk_arco_LP_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AUG_GL_blk_arco_LP_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellBlue,
        SmokeShellOrange,
        SmokeShellPurple,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokePurple_Grenade_shell,
		1Rnd_SmokeBlue_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellBlue,
        SmokeShellOrange,
        SmokeShellPurple,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokePurple_Grenade_shell,
		1Rnd_SmokeBlue_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell
	};
	cost = 250000;
	camouflage = 1.4;
	icon = iconManLeader;
	role = Grenadier;
};
class B_ANZAC_Soldier_CBRN_F: B_ANZAC_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Soldier_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = U_B_ANZAC_CBRN_Suit_01_Aus_F;
	linkedItems[] =
	{
		H_HelmetHBK_olive_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_aus_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_olive_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_aus_F
	};
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_AUG_C_blk_holo_LP_f,
        hgun_G17_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_blk_holo_LP_f,
        hgun_G17_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    cost = 93000;
	camouflage = 1.6;
    icon = iconManEngineer;
    picture = pictureRepair;
    role = Sapper;
	class EventHandlers: EventHandlers
	{
		class BIN_CBRN_INIT
		{
			init = "_this call bin_fnc_CBRNHoseInit;";
		};
	};
};
class B_ANZAC_RadioOperator_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_CombatUniform_aucamo_vest_f;
	linkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	backpack = B_RadioBag_01_green_F;
	weapons[] =
    {
        arifle_AUG_blk_aco_LP_f,
        hgun_G17_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AUG_blk_aco_LP_f,
        hgun_G17_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	role = RadioOperator;
};
class B_ANZAC_Soldier_AA_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_AT_s};
			speechPlural[] = {veh_infantry_AT_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_AT_s;
	textPlural = $STR_A3_nameSound_veh_infantry_AT_p;
	nameSound = veh_infantry_AT_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Soldier_AA_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	uniformClass = U_B_CombatUniform_aucamo_f;
	linkedItems[] =
	{
		H_HelmetHBK_olive_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_olive_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	backpack = B_AssaultPack_khk_ANZACAA_F;
	weapons[] =
	{
		arifle_AUG_C_blk_holo_LP_f,
		launch_B_Titan_olive_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_blk_holo_LP_f,
		launch_B_Titan_olive_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	threat[] = {0.8,0.1,1.0};
	camouflage = 1.5;
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class B_ANZAC_Soldier_AT_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_AT_s};
			speechPlural[] = {veh_infantry_AT_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_AT_s;
	textPlural = $STR_A3_nameSound_veh_infantry_AT_p;
	nameSound = veh_infantry_AT_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Soldier_AT_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_soldier_AT_F0;
	uniformClass = U_B_CombatUniform_aucamo_f;
	linkedItems[] =
	{
		H_HelmetHBK_olive_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_olive_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	backpack = B_AssaultPack_khk_ANZACAT_F;
	weapons[] =
	{
		arifle_AUG_C_blk_holo_LP_f,
		launch_I_Titan_short_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_blk_holo_LP_f,
		launch_I_Titan_short_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	camouflage = 1.5;
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class B_ANZAC_Soldier_LAT_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_AT_s};
			speechPlural[] = {veh_infantry_AT_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_AT_s;
	textPlural = $STR_A3_nameSound_veh_infantry_AT_p;
	nameSound = veh_infantry_AT_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = U_B_CombatUniform_aucamo_f;
	linkedItems[] =
	{
		H_HelmetHBK_olive_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_olive_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	backpack = B_AssaultPack_khk_ANZACLAT_F;
	weapons[] =
	{
		arifle_AUG_blk_aco_LP_f,
		launch_MRAWS_green_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_blk_aco_LP_f,
		launch_MRAWS_green_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class B_ANZAC_Engineer_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Engineer_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_engineer_F0;
	uniformClass = U_B_CombatUniform_aucamo_vest_f;
	linkedItems[] =
	{
		H_HelmetHBK_olive_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_olive_F,
		V_CarrierRigKBT_01_light_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	backpack = B_Kitbag_khk_ANZACEng_F;
	weapons[] =
	{
		arifle_AUG_C_blk_holo_LP_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_blk_holo_LP_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellBlue,
        SmokeShellOrange,
        SmokeShellPurple
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellBlue,
        SmokeShellOrange,
        SmokeShellPurple
	};
	engineer = true;
	canDeactivateMines = true;
	detectSkill = 31;
	camouflage = 1.6;
	icon = iconManEngineer;
	picture = pictureRepair;
	role = Sapper;
};
class B_ANZAC_Medic_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_medic_s};
			speechPlural[] = {veh_infantry_medic_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_medic_s;
	textPlural = $STR_A3_nameSound_veh_infantry_medic_p;
	nameSound = veh_infantry_medic_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
    uniformClass = U_B_CombatUniform_aucamo_f;
	linkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_heavy_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_olive_headset_F,
		V_CarrierRigKBT_01_heavy_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	backpack = B_AssaultPack_khk_ANZACMedic_F;
	weapons[] =
	{
		arifle_AUG_blk_aco_LP_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_blk_aco_LP_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	attendant = true;
	camouflage = 1.6;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
};
class B_ANZAC_Crew_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = U_B_CombatUniform_aucamo_vest_f;
	linkedItems[] =
	{
		H_HelmetCrew_B_ANZAC,
		V_CarrierRigKBT_01_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetCrew_B_ANZAC,
		V_CarrierRigKBT_01_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles_aus_F
	};
	weapons[] =
	{
		arifle_AUG_C_blk_holo_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_blk_holo_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	camouflage = 1.6;
	cost = 93000;
	role = Crewman;
    engineer = true;
};
class B_ANZAC_Helipilot_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_pilot_s};
			speechPlural[] = {veh_infantry_pilot_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_pilot_s;
	textPlural = $STR_A3_nameSound_veh_infantry_pilot_p;
	nameSound = veh_infantry_pilot_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	uniformClass = U_B_CombatUniform_aucamo_f;
    linkedItems[] =
    {
        H_PilotHelmetHeli_B_ANZAC,
		V_CarrierRigKBT_01_aucamo_F,
        DefaultManLinkedItems,
        NVGoggles_aus_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_B_ANZAC,
		V_CarrierRigKBT_01_aucamo_F,
        DefaultManLinkedItems,
        NVGoggles_aus_F
    };
	weapons[] =
	{
		SMG_05_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_05_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02),
        SmokeShellBlue,
        SmokeShellOrange,
        SmokeShellPurple
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02),
        SmokeShellBlue,
        SmokeShellOrange,
        SmokeShellPurple
	};
	cost = 93000;
	role = Crewman;
	camouflage = 2.0;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_Tanoan,
		G_NATO_pilot
	};
};
class B_ANZAC_Helicrew_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_pilot_s};
			speechPlural[] = {veh_infantry_pilot_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_pilot_s;
	textPlural = $STR_A3_nameSound_veh_infantry_pilot_p;
	nameSound = veh_infantry_pilot_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Helicrew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	uniformClass = U_B_CombatUniform_aucamo_f;
    linkedItems[] =
    {
        H_CrewHelmetHeli_B_ANZAC,
		V_CarrierRigKBT_01_aucamo_F,
        DefaultManLinkedItems,
        NVGoggles_aus_F
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_B_ANZAC,
		V_CarrierRigKBT_01_aucamo_F,
        DefaultManLinkedItems,
        NVGoggles_aus_F
    };
	weapons[] =
	{
		arifle_AUG_C_blk_holo_f,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_blk_holo_f,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        SmokeShellBlue,
        SmokeShellOrange,
        SmokeShellPurple
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        SmokeShellBlue,
        SmokeShellOrange,
        SmokeShellPurple
	};
	role = Crewman;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_Tanoan,
		G_NATO_pilot
	};
};
class B_ANZAC_Fighter_Pilot_F: B_ANZAC_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_pilot_s};
			speechPlural[] = {veh_infantry_pilot_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_pilot_s;
	textPlural = $STR_A3_nameSound_veh_infantry_pilot_p;
	nameSound = veh_infantry_pilot_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_ANZAC_Fighter_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_Fighter_Pilot_name;
	uniformClass = U_B_PilotCoveralls_ANZAC;
    linkedItems[] =
    {
        H_PilotHelmetFighter_B_ANZAC,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_B_ANZAC,
        DefaultManLinkedItems
    };
	weapons[] =
	{
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(17Rnd_9x21_Mag),
        SmokeShellBlue,
        SmokeShellOrange,
        SmokeShellPurple
	};
	respawnMagazines[] =
	{
		mag_2(17Rnd_9x21_Mag),
        SmokeShellBlue,
        SmokeShellOrange,
        SmokeShellPurple
	};
    cost = 165000;
    role = Crewman;
	camouflage = 2;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_Tanoan,
		G_NATO_pilot
	};
};
class B_ANZAC_Soldier_universal_F: B_ANZAC_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_medic_s};
			speechPlural[] = {veh_infantry_medic_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_medic_s;
	textPlural = $STR_A3_nameSound_veh_infantry_medic_p;
	nameSound = veh_infantry_medic_s;
	scope = protected;
	displayName = $STR_A3_CfgVehicles_b_soldier_universal_f_displayName;
	attendant = true;
	engineer = true;
	canDeactivateMines = true;
	role = Rifleman;
};