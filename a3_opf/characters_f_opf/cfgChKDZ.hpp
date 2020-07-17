// Arma 3
class O_G_Soldier_SL_F;
// Arma 3 Enoch
class O_R_Gorka_base_F;
class O_R_Gorka_F: O_R_Gorka_base_F
{
	modelSides[] =
    {
        TEast,
        TCivilian,
        TGuerrila
    };
};
// Arma 3 Opposing Forces
class O_E_Man_Base_F: O_G_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = OPF_E_F;
	genericNames = RussianMen;
	identityTypes[] = 
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
};
class O_E_Gorka_autumn_F: O_R_Gorka_F
{
	uniformClass = U_O_E_Gorka_01_autumn_F;
	hiddenSelectionsTextures[] = {"\A3_Opf\Characters_F_Opf\Uniforms\Data\Gorka_01_Autumn_CO.paa"};
};
class O_E_Gorka_summer_F: O_R_Gorka_F
{
	uniformClass = U_O_E_Gorka_01_summer_F;
	hiddenSelectionsTextures[] = {"\A3_Opf\Characters_F_Opf\Uniforms\Data\Gorka_01_Summer_CO.paa"};
};
class O_E_Uniform_01_taiga_F: O_G_Soldier_SL_F
{
	scope = protected;
	side = TEast;
	faction = OPF_E_F;
	modelSides[] =
    {
        TEast,
        TGuerrila,
        TCivilian
    };
	uniformClass = U_O_E_Uniform_01_taiga_F;
	hiddenSelections[] =
	{
		camo1,
		camo2
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\Officer_RUtaiga_CO.paa",
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\O_E_Uniform_01_taiga_2_CO.paa"
	};
};
class O_E_Soldier_Base_F: O_E_Man_Base_F
{
	uniformClass = U_O_E_Gorka_01_summer_F;
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class O_E_Soldier_1_F: O_E_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_1_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	linkedItems[] = 
	{
		H_PASGT_basic_olive_F,
		V_SmershVest_01_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_PASGT_basic_olive_F,
		V_SmershVest_01_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKM_F,
        hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKM_F,
        hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_762x39_Mag_Green_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_762x39_Mag_Green_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade)
	};
	role = Rifleman;
    headgearList[] = 
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class O_E_Soldier_2_F: O_E_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_2_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_HighCommand_ModuleDescription_AnyBrain_0;
	uniformClass = U_O_E_Uniform_01_taiga_F;
	linkedItems[] = 
	{
		H_MilCap_grn,
		V_SmershVest_01_radio_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_MilCap_grn,
		V_SmershVest_01_radio_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AK12_545_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] = 
	{
		arifle_AK12_545_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade)
	};
	cost = 250000;
	camouflage = 1.6;
	icon = iconManLeader;
	role = Rifleman;
    headgearList[] = 
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class O_E_Soldier_3_F: O_E_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_3_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_Medic;
	uniformClass = U_O_R_officer_noInsignia_taiga_F;
	backpack = B_FieldPack_green_OEMedic_F;
	linkedItems[] = 
	{
		H_Bandanna_khk,
		V_ChestrigF_rgr,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_Bandanna_khk,
		V_ChestrigF_rgr,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKM_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKM_F,
		DefaultManWeapons
	};
	magazines[] = {mag_6(30Rnd_762x39_Mag_Green_F)};
	respawnMagazines[] = {mag_6(30Rnd_762x39_Mag_Green_F)};
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	camouflage = 1.6;
    headgearList[] = 
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class O_E_Soldier_4_F: O_E_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_4_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_AR_F0;
	uniformClass = U_O_E_Gorka_01_autumn_F;
	linkedItems[] = 
	{
		H_PASGT_basic_olive_F,
		V_SmershVest_01_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_PASGT_basic_olive_F,
		V_SmershVest_01_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_RPK_F,
        hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_RPK_F,
        hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_8(75Rnd_762x39_Mag_F),
        mag_2(10Rnd_9x21_Mag)
	};
	respawnMagazines[] = 
	{
        mag_8(75Rnd_762x39_Mag_F),
        mag_2(10Rnd_9x21_Mag)
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
    headgearList[] = 
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class O_E_Soldier_5_F: O_E_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_5_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = U_O_R_Gorka_01_F;
	backpack = B_FieldPack_green_OERPG_AT_F;
	linkedItems[] = 
	{
		G_Balaclava_blk,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		G_Balaclava_blk,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKS_F,
        launch_RPG32_camo_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKS_F,
        launch_RPG32_camo_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_Mag_Green_F),
        RPG32_F
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_Mag_Green_F),
        RPG32_F
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
    headgearList[] = 
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class O_E_Soldier_6_F: O_E_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_6_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	uniformClass = U_O_E_Uniform_01_taiga_F;
	linkedItems[] = 
	{
		G_Balaclava_blk,
		V_TacChestRig_grn_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		G_Balaclava_blk,
		V_TacChestRig_grn_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AK12_GL_545_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AK12_GL_545_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_5(1Rnd_HE_Grenade_shell)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_5(1Rnd_HE_Grenade_shell)
	};
	cost = 200000;
	role = Grenadier;
    headgearList[] = 
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class O_E_Soldier_7_F: O_E_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_sniper_s};
            speechPlural[] = {veh_infantry_sniper_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
    textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
    nameSound = veh_infantry_sniper_s;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_7_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Sniper_F0;
	uniformClass = U_O_E_Gorka_01_autumn_F;
	linkedItems[] = 
	{
		H_Booniehat_mgrn,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_Booniehat_mgrn,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] =
	{
		srifle_DMR_01_black_KHS_BI_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		srifle_DMR_01_black_KHS_BI_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] = {mag_6(10Rnd_762x54_Mag)};
	respawnMagazines[] = {mag_6(10Rnd_762x54_Mag)};
	cost = 250000;
	role = Marksman;
    headgearList[] = 
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class O_E_Soldier_8_F: O_E_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_8_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgRoles_Sapper0;
	uniformClass = U_C_E_LooterJacket_01_F;
	backpack = B_FieldPack_green_OEExp_F;
	linkedItems[] = 
	{
		H_Watchcap_camo,
		V_ChestrigF_rgr,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_Watchcap_camo,
		V_ChestrigF_rgr,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_AKS_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AKS_F,
		DefaultManWeapons
	};
	magazines[] = {mag_6(30Rnd_545x39_Mag_Green_F)};
	respawnMagazines[] = {mag_6(30Rnd_545x39_Mag_Green_F)};
	canDeactivateMines = true;
	detectSkill = 38;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
	camouflage = 1.6;
    headgearList[] = 
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class O_E_Soldier_9_F: O_E_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_9_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Partisan";
	uniformClass = U_O_R_Gorka_01_F;
	linkedItems[] = 
	{
		H_Watchcap_camo,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_Watchcap_camo,
		V_TacChestRig_oli_F,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		arifle_G36C_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_G36C_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(HandGrenade)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(HandGrenade)
	};
	role = Rifleman;
    headgearList[] = 
    {
        H_Bandanna_gry,1,
        H_Bandanna_khk_hs,1,
        H_Bandanna_khk,1,
        H_Bandanna_camo,1,
        H_Bandanna_camo_hs,1,
        H_Watchcap_blk,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_cbr,1,
        H_Watchcap_cbr_hs,1,
        H_Watchcap_khk,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_mgrn_hs,1,
        H_Booniehat_taiga,1,
        H_Booniehat_taiga_hs,1,
        H_MilCap_grn,2,
        H_MilCap_taiga,2,
        H_Headset_light,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
        H_FakeHeadgear_F,2
    };
};
class O_E_Soldier_universal_F: O_E_Soldier_1_F
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
class O_E_Soldier_Base_unarmed_F: O_E_Soldier_1_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\O_E_Soldier_Base_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = 
	{
		H_PASGT_basic_olive_F,
		V_SmershVest_01_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_PASGT_basic_olive_F,
		V_SmershVest_01_F,
		DefaultManGuerillaLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};