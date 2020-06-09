// Arma 3 Tac-Ops
class O_A_soldier_base_F: O_officer_F
{
    editorSubcategory = EdSubcat_Personnel;
    identityTypes[] =
    {
        LanguageFRE_F,
        Head_African,
        G_IRAN_african
    };
    hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noinsignia_hex_CO.paa"};
	magazines[] = {};
	respawnMagazines[] = {};
    class Wounds
    {
        mat[] =
        {
            "A3\Characters_F\OPFOR\Data\Officer_noInsignia.rvmat",
            "A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_injury_noInsignia.rvmat",
            "A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_injury_noInsignia.rvmat"
        };
        tex[] = {};
    };
    faction = OPF_A_F;
    genericNames = AfroMen;
};
class O_A_soldier_A_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_A_F.jpg";
	scope = public;
	linkedItems[] =
    {
        H_MilCap_ocamo,
        V_BandollierB_khk,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        H_MilCap_ocamo,
        V_BandollierB_khk,
        DefaultManLinkedItems
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class O_A_soldier_AR_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_AR_F.jpg";
    scope = public;
    linkedItems[] =
    {
        H_HelmetAggressor_sand_F,
        V_ChestrigF_khk,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_HelmetAggressor_sand_F,
        V_ChestrigF_khk,
		DefaultManLinkedItems
    };
    magazines[] =
    {
        mag_8(100Rnd_580x42_Mag_F),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(100Rnd_580x42_Mag_F),
        HandGrenade,
        mag_2(SmokeShell)
    };
};
class O_A_medic_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_medic_F.jpg";
	scope = public;
	linkedItems[] =
    {
        H_MilCap_ocamo,
        V_BandollierB_khk,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        H_MilCap_ocamo,
        V_BandollierB_khk,
        DefaultManLinkedItems
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
};
class O_A_soldier_GL_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_GL_F.jpg";
	scope = public;
    linkedItems[] =
    {
        H_HelmetAggressor_sand_F,
        V_ChestrigF_khk,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_HelmetAggressor_sand_F,
        V_ChestrigF_khk,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_CTAR_GL_blk_aco_flash_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_GL_blk_aco_flash_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
};
class O_A_soldier_M_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_M_F.jpg";
	scope = public;
    linkedItems[] =
    {
        H_HelmetAggressor_sand_F,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_HelmetAggressor_sand_F,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        srifle_DMR_07_blk_F_arco_flash_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        srifle_DMR_07_blk_F_arco_flash_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(20Rnd_650x39_Cased_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(20Rnd_650x39_Cased_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class O_A_officer_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_officer_F.jpg";
	scope = public;
    linkedItems[] =
    {
        H_Beret_CSAT_01_F,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Beret_CSAT_01_F,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        SMG_02_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        SMG_02_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        mag_3(17Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        mag_3(17Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
};
class O_A_soldier_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_F.jpg";
	scope = public;
    linkedItems[] =
    {
        H_HelmetAggressor_sand_F,
        V_ChestrigF_khk,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_HelmetAggressor_sand_F,
        V_ChestrigF_khk,
		DefaultManLinkedItems
    };
    magazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class O_A_soldier_LAT_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_LAT_F.jpg";
	scope = public;
    linkedItems[] =
    {
        H_HelmetAggressor_sand_F,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_HelmetAggressor_sand_F,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class O_A_soldier_SL_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_SL_F.jpg";
	scope = public;
	role = Grenadier;
    linkedItems[] =
    {
        H_HelmetAggressor_sand_F,
        V_Chestrig_khk,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_HelmetAggressor_sand_F,
        V_Chestrig_khk,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_CTAR_GL_blk_arco_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_CTAR_GL_blk_arco_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
};
class O_A_soldier_TL_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_TL_F.jpg";
	scope = public;
    linkedItems[] =
    {
        H_HelmetAggressor_sand_F,
        V_Chestrig_khk,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_HelmetAggressor_sand_F,
        V_Chestrig_khk,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_CTAR_GL_blk_arco_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_CTAR_GL_blk_arco_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
};
class O_A_soldier_AA_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_AA_F.jpg";
	scope = public;
    linkedItems[] =
    {
        H_Cap_brn_SPECOPS,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Cap_brn_SPECOPS,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class O_A_soldier_AT_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_AT_F.jpg";
	scope = public;
    linkedItems[] =
    {
        H_MilCap_ocamo,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_MilCap_ocamo,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
// Arma 3 Aegis
class O_A_crew_F: O_A_soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_crew_F.jpg";
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_s};
            speechPlural[] = {veh_infantry_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_s;
    textPlural = $STR_A3_nameSound_veh_infantry_p;
    nameSound = veh_infantry_s;
    scope = public;
    displayName = $STR_B_crew_F0;
    role = Crewman;
    cost = 90000;
    engineer = true;
    weapons[] =
    {
        SMG_02_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        SMG_02_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
    linkedItems[] =
    {
        H_Tank_black_F,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Tank_black_F,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
};
class O_A_engineer_F: O_A_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_engineer_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_engineer_F0;
    role = Sapper;
    icon = iconManEngineer;
    picture = pictureRepair;
	cost = 220000;
	canDeactivateMines = true;
	engineer = true;
	detectSkill = 31;
	threat[] = {1,0.5,0.1};
	camouflage = 1.6;
	backpack = B_AssaultPack_ocamo_Eng_F;
    weapons[] =
    {
        arifle_CTAR_blk_flash_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_flash_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    linkedItems[] =
    {
        H_Cap_brn_SPECOPS,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Cap_brn_SPECOPS,
        V_BandollierB_khk,
		DefaultManLinkedItems
    };
};
class O_A_helipilot_F: O_helipilot_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_helipilot_F.jpg";
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
    scope = public;
    scopeCurator = public;
    genericNames = AfroMen;
	identityTypes[] =
	{
		LanguageFRE_F,
		Head_African,
		G_IRAN_default
	};
    faction = OPF_A_F;
	displayName = $STR_B_Helipilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
	uniformClass = U_O_officer_noInsignia_hex_F;
    weapons[] =
    {
        SMG_02_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        SMG_02_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    linkedItems[] =
    {
        H_PilotHelmetHeli_O,
        V_TacVest_brn,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O,
        V_TacVest_brn,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_A_helicrew_F: O_A_helipilot_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_helicrew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	role = Crewman;
	cost = 80000;
    weapons[] =
    {
        arifle_CTAR_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    linkedItems[] =
    {
        H_CrewHelmetHeli_O,
        V_TacVest_brn,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_O,
        V_TacVest_brn,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_A_Fighter_Pilot_F: O_A_helipilot_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_Fighter_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_Fighter_Pilot_name;
    role = Crewman;
    cost = 165000;
	camouflage = 2;
	uniformClass = U_O_PilotCoveralls;
    weapons[] =
    {
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_2(17Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_2(17Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    linkedItems[] =
    {
        H_PilotHelmetFighter_O,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_O,
		DefaultManLinkedItems
    };
};
class O_A_soldier_universal_F: O_A_soldier_F
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
class O_A_RadioOperator_F: O_A_soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	linkedItems[] =
	{
		H_MilCap_ocamo,
		V_ChestrigF_khk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_MilCap_ocamo,
		V_ChestrigF_khk,
		DefaultManLinkedItems
	};
	backpack = B_RadioBag_01_hex_F;
	weapons[] =
    {
        arifle_CTAR_blk_flash_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_flash_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class O_LightFatigues_01_urb_F: O_A_officer_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = U_O_officer_noInsignia_urb_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noinsignia_urb_CO.paa"};
};
class O_LightFatigues_01_ghex_F: O_A_officer_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = U_O_T_officer_noInsignia_ghex_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noinsignia_tna_CO.paa"};
};