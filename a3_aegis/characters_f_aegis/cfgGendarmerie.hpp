// Arma 3 Apex
class B_GEN_Soldier_base_F: B_Soldier_base_F
{
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\Gendarmerie\Data\U_B_GEN_Soldier_F_01_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_GEN_Soldier_F_02_CO.paa"
	};
	weapons[] =
	{
		SMG_05_F,
		hgun_C1911_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_05_F,
		hgun_C1911_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_9x21_Mag_SMG_02),
		mag_2(7Rnd_45ACP_Mag),
		HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_9x21_Mag_SMG_02),
		mag_2(7Rnd_45ACP_Mag),
		HandGrenade,
		SmokeShell
	};
    headgearList[] = 
    {
        H_MilCap_gen_F,3,
		H_Helmet_Skate,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_neckprot_black_F,1
    };
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class B_GEN_Soldier_F: B_GEN_Soldier_base_F
{
	displayName = $STR_A3_A_CfgVehicles_B_GEN_Soldier_F0;
};
class B_GEN_Commander_F: B_GEN_Soldier_base_F
{
	icon = iconManLeader;
	weapons[] =
	{
		SMG_05_F,
		hgun_C1911_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		SMG_05_F,
		hgun_C1911_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_9x21_Mag_SMG_02),
		mag_2(7Rnd_45ACP_Mag),
		HandGrenade,
		SmokeShell,
		SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_9x21_Mag_SMG_02),
		mag_2(7Rnd_45ACP_Mag),
		HandGrenade,
		SmokeShell,
		SmokeShellYellow
	};
    headgearList[] = {H_Beret_gen_F,1};
};
// Arma 3 Oldman
class O_GEN_Soldier_F: B_GEN_Soldier_F
{
	scope = protected;
	scopeCurator = private;
};
class O_GEN_Commander_F: B_GEN_Commander_F
{
	scope = protected;
	scopeCurator = private;
};
// Arma 3 Aegis
class B_GEN_Soldier_AR_F: B_GEN_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_GEN_Soldier_AR_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_GEN_Soldier_AR_F0;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] = {1,0.1,0.3};
	weapons[] =
	{
		LMG_03_F,
		hgun_C1911_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_03_F,
		hgun_C1911_F,
		DefaultManWeapons
	};
	items[] = {FirstAidKit};
	respawnItems[] = {FirstAidKit};
	magazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
		mag_2(7Rnd_45ACP_Mag),
		HandGrenade,
		SmokeShell,
		SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
		mag_2(7Rnd_45ACP_Mag),
		HandGrenade,
		SmokeShell,
		SmokeShellYellow
	};
	linkedItems[] =
	{
		H_MilCap_gen_F,
		V_TacVest_gen_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_MilCap_gen_F,
		V_TacVest_gen_F,
		DefaultManLinkedItems
	};
};
class B_GEN_Soldier_Rifle_F: B_GEN_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_GEN_Soldier_Rifle_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_GEN_Soldier_Rifle_F0;
	cost = 100000;
	weapons[] =
	{
		arifle_AKM_F,
		hgun_C1911_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AKM_F,
		hgun_C1911_F,
		DefaultManWeapons
	};
	items[] = {FirstAidKit};
	respawnItems[] = {FirstAidKit};
	magazines[] =
	{
		mag_6(30Rnd_762x39_Mag_F),
		mag_2(7Rnd_45ACP_Mag),
		HandGrenade,
		SmokeShell,
		SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_762x39_Mag_F),
		mag_2(7Rnd_45ACP_Mag),
		HandGrenade,
		SmokeShell,
		SmokeShellYellow
	};
	linkedItems[] =
	{
		H_MilCap_gen_F,
		V_TacVest_gen_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_MilCap_gen_F,
		V_TacVest_gen_F,
		DefaultManLinkedItems
	};
};
class B_GEN_Soldier_SG_F: B_GEN_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_GEN_Soldier_SG_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_GEN_Soldier_SG_F0;
    cost = 130000;
    threat[] = {1,0.3,0.1};
	uniformClass = U_B_GEN_Commander_F;
	weapons[] =
	{
		sgun_M4_F,
		hgun_C1911_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_M4_F,
		hgun_C1911_F,
		DefaultManWeapons
	};
	items[] = {FirstAidKit};
	respawnItems[] = {FirstAidKit};
	magazines[] =
	{
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
		mag_2(7Rnd_45ACP_Mag),
		HandGrenade,
		SmokeShell,
		SmokeShellYellow
	};
	respawnMagazines[] =
	{
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
		mag_2(7Rnd_45ACP_Mag),
		HandGrenade,
		SmokeShell,
		SmokeShellYellow
	};
	linkedItems[] =
	{
		H_MilCap_gen_F,
		V_TacVest_gen_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_MilCap_gen_F,
		V_TacVest_gen_F,
		DefaultManLinkedItems
	};
};
class B_GEN_Soldier_LAT_F: B_GEN_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_GEN_Soldier_LAT_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_GEN_Soldier_LAT_F0;
	role = MissileSpecialist;
	icon = iconManAT;
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	secondaryAmmoCoef = 0.5;
	backpack = B_AssaultPack_blk_GENLAT_F;
	weapons[] =
	{
		arifle_AKS_F,
		launch_RPG7_F,
		hgun_C1911_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AKS_F,
		launch_RPG7_F,
		hgun_C1911_F,
		DefaultManWeapons
	};
	items[] = {FirstAidKit};
	respawnItems[] = {FirstAidKit};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Mag_F),
		RPG7_F,
		mag_2(7Rnd_45ACP_Mag),
		HandGrenade,
		SmokeShell,
		SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Mag_F),
		RPG7_F,
		mag_2(7Rnd_45ACP_Mag),
		HandGrenade,
		SmokeShell,
		SmokeShellYellow
	};
	linkedItems[] =
	{
		H_MilCap_gen_F,
		V_TacVest_gen_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_MilCap_gen_F,
		V_TacVest_gen_F,
		DefaultManLinkedItems
	};
};