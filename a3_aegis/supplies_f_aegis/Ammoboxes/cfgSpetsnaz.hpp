class Box_RU_Equip_F: Box_CSAT_Equip_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.382;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_RU_Equip_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_Box_RU_Equip_F0;
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_RUS_CO.paa",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_RUS_CA.paa"
    };
    class TransportMagazines{};
    class TransportWeapons{};
    class TransportItems
    {
        item_xx(V_Rangemaster_belt,2);
        item_xx(V_BandollierB_rgr,2);
        item_xx(V_Chestrig_rgr,1);
        item_xx(V_ChestrigF_rgr,1);
        item_xx(V_TacVest_oli,2);
        item_xx(V_SmershVest_01_F,2);
        item_xx(V_SmershVest_01_radio_F,2);
        item_xx(V_RebreatherRU,4);
        item_xx(H_MilCap_grn,1);
        item_xx(H_MilCap_taiga,1);
        item_xx(H_Booniehat_mgrn,1);
        item_xx(H_Booniehat_mgrn_hs,1);
        item_xx(H_Booniehat_taiga,1);
        item_xx(H_Booniehat_taiga_hs,1);
        item_xx(H_HelmetAggressor_F,2);
        item_xx(H_HelmetAggressor_cover_F,1);
        item_xx(H_HelmetAggressor_cover_taiga_F,1);
        item_xx(H_Tank_black_F,2);
        item_xx(H_PilotHelmetFighter_O_R,4);
        item_xx(H_PilotHelmetHeli_O_R,2);
        item_xx(H_CrewHelmetHeli_O_R,2);
        item_xx(V_TacChestrig_grn_F,2);
        item_xx(G_RU_Diving,4);
        item_xx(G_AirPurifyingRespirator_02_olive_F,4);
    };
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_taiga_F,2);
		bag_xx(B_Bergen_taiga_F,2);
		bag_xx(B_Carryall_green_F,1);
		bag_xx(B_Carryall_taiga_F,1);
		bag_xx(B_FieldPack_green_F,1);
		bag_xx(B_FieldPack_taiga_F,1);
		bag_xx(B_RadioBag_01_taiga_F,2);
		bag_xx(B_TacticalPack_rgr,2);
	};
};
class Box_RU_Uniforms_F: Box_CSAT_Uniforms_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.382;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_RU_Uniforms_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_Box_RU_Uniforms_F0;
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\uniforms_box_RUS_CO.paa",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_RUS_CA.paa"
    };
    class TransportMagazines{};
    class TransportWeapons{};
    class TransportItems
    {
        item_xx(U_O_R_CombatUniform_taiga_F,4);
        item_xx(U_O_R_Gorka_01_F,4);
        item_xx(U_O_R_Gorka_01_camo_F,4);
        item_xx(U_O_R_Gorka_01_black_F,4);
        item_xx(U_O_R_GhillieSuit_F,4);
        item_xx(U_O_R_PilotCoveralls_F,4);
        item_xx(U_O_R_Wetsuit_F,4);
        item_xx(U_O_R_FullGhillie_wdl_F,4);
        item_xx(U_O_R_OfficerUniform_taiga_F,4);
        item_xx(U_O_R_officer_noInsignia_taiga_F,4);
    };
};
class Box_RU_Wps_F: Box_East_Wps_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.189;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_RU_Wps_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_RU_Wps_F0;
    editorCategory = EdCat_Supplies;
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_RUS_CA.paa",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS_CO.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS.rvmat"
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_545x39_black_Mag_F,8);
        mag_xx(75Rnd_762x39_AK12_Mag_F,2);
        mag_xx(10Rnd_93x64_DMR_05_Mag,2);
        mag_xx(30Rnd_762x39_AK12_Lush_Mag_F,4);
        mag_xx(75Rnd_762x39_AK12_Lush_Mag_F,1);
        mag_xx(17Rnd_9x21_Mag,1);
        mag_xx(6Rnd_9x33_Cylinder,1);
        mag_xx(30Rnd_9x21_Mag_SMG_02_Tracer_Green,1);
    };
    class TransportWeapons
    {
        weap_xx(arifle_AK12_545_F,4);
        weap_xx(arifle_AK12_GL_545_F,2);
        weap_xx(arifle_AK12U_545_F,2);
        weap_xx(arifle_RPK12_F,2);
		weap_xx(srifle_DMR_05_blk_F,2);
        weap_xx(arifle_AK12_lush_F,2);
        weap_xx(arifle_AK12_GL_lush_F,1);
        weap_xx(arifle_AK12U_lush_F,1);
		weap_xx(arifle_RPK12_lush_F,1);
        weap_xx(hgun_Rook40_F,1);
        weap_xx(hgun_Pistol_heavy_03_F,1);
        weap_xx(SMG_02_F,1);
    };
    class TransportItems{};
};
class Box_RU_WpsSpecial_F: Box_East_WpsSpecial_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.187;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_RU_WpsSpecial_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_RU_WpsSpecial_F0;
    editorCategory = EdCat_Supplies;
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_RUS_CA.paa",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS_CO.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS.rvmat"
    };
	class TransportMagazines
	{
		mag_xx(5Rnd_127x108_Mag,4);
		mag_xx(5Rnd_127x108_APDS_Mag,4);
		mag_xx(20Rnd_556x45_UW_mag,3);
		mag_xx(20Rnd_556x45_Stanag_green,3);
		mag_xx(10Rnd_127x54_Mag,6);
		mag_xx(4Rnd_12Gauge_Pellets,3);
		mag_xx(4Rnd_12Gauge_Slug,3);
	};
	class TransportWeapons
	{
		weap_xx(srifle_GM6_F,1);
		weap_xx(arifle_SDAR_F,1);
		weap_xx(srifle_DMR_04_F,1);
		weap_xx(sgun_Mp153_black_F,1);
	};
	class TransportItems
	{
		item_xx(optic_ACO_grn_AK_F,1);
		item_xx(optic_ACO_grn_smg,1);
		item_xx(optic_Holosight_lush_F,1);
		item_xx(optic_Arco_blk_F,1);
		item_xx(optic_Arco_lush_F,1);
		item_xx(optic_Arco_AK_blk_F,1);
		item_xx(optic_Arco_AK_lush_F,1);
		item_xx(optic_nightstalker,1);
		item_xx(optic_tws,1);
		item_xx(optic_tws_mg,1);
		item_xx(optic_tws_sniper,1);
		item_xx(optic_DMS_weathered_F,1);
		item_xx(optic_DMS_weathered_kir_F,1);
        item_xx(optic_LRPS,1);
	};
};
class Box_RU_Ammo_F: Box_East_Ammo_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] =
        {
            {ammo_hide,0},
            {ammoord_hide,1},
            {grenades_hide,1},
            {support_hide,1}
        };
        hide[] = {};
        verticalOffset = 0.284;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_RU_Ammo_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_RU_Ammo_F0;
    editorCategory = EdCat_Supplies;
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_RUS_CA.paa",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS_CO.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS.rvmat"
    };
	class TransportMagazines
	{
        mag_xx(30Rnd_545x39_black_Mag_F,48);
        mag_xx(75Rnd_762x39_AK12_Mag_F,16);
        mag_xx(10Rnd_93x64_DMR_05_Mag,12);
        mag_xx(30Rnd_762x39_AK12_Lush_Mag_F,24);
        mag_xx(75Rnd_762x39_AK12_Lush_Mag_F,8);
        mag_xx(17Rnd_9x21_Mag,6);
        mag_xx(6Rnd_9x33_Cylinder,6);
        mag_xx(30Rnd_9x21_Mag_SMG_02_Tracer_Green,6);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_RU_AmmoOrd_F: Box_East_AmmoOrd_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] =
        {
            {ammo_hide,1},
            {ammoord_hide,0},
            {grenades_hide,1},
            {support_hide,1}
        };
        hide[] = {};
        verticalOffset = 0.284;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_RU_AmmoOrd_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_RU_AmmoOrd_F0;
    editorCategory = EdCat_Supplies;
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_RUS_CA.paa",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS_CO.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS.rvmat"
    };
    class TransportMagazines
    {
        mag_xx(ATMine_Range_Mag,5);
        mag_xx(APERSMine_Range_Mag,5);
        mag_xx(APERSBoundingMine_Range_Mag,5);
        mag_xx(SLAMDirectionalMine_Wire_Mag,5);
        mag_xx(APERSTripMine_Wire_Mag,5);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
        mag_xx(DemoCharge_Remote_Mag,5);
        mag_xx(SatchelCharge_Remote_Mag,5);
        mag_xx(APERSMineDispenser_Mag,5);
        mag_xx(FlareTripMine_Wire_Mag,5);
    };
    class TransportWeapons{};
    class TransportItems{};
};
class Box_RU_Grenades_F: Box_East_Grenades_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] =
        {
            {ammo_hide,1},
            {ammoord_hide,1},
            {grenades_hide,0},
            {support_hide,1}
        };
        hide[] = {};
        verticalOffset = 0.284;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_RU_Grenades_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_RU_Grenades_F0;
    editorCategory = EdCat_Supplies;
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_RUS_CA.paa",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS_CO.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS.rvmat"
    };
    class TransportMagazines
    {
        mag_xx(1Rnd_HE_Grenade_shell,12);
        mag_xx(1Rnd_Smoke_Grenade_shell,2);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
        mag_xx(1Rnd_SmokePurple_Grenade_shell,2);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
        mag_xx(HandGrenade,12);
        mag_xx(MiniGrenade,12);
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellRed,2);
        mag_xx(SmokeShellGreen,2);
        mag_xx(SmokeShellYellow,2);
        mag_xx(SmokeShellPurple,2);
        mag_xx(SmokeShellBlue,2);
        mag_xx(SmokeShellOrange,2);
        mag_xx(UGL_FlareWhite_F,2);
        mag_xx(UGL_FlareGreen_F,2);
        mag_xx(O_R_IR_Grenade,8);
    };
    class TransportWeapons{};
    class TransportItems{};
};
class Box_RU_Support_F: Box_East_Support_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] =
        {
            {ammo_hide,1},
            {ammoord_hide,1},
            {grenades_hide,1},
            {support_hide,0}
        };
        hide[] = {};
        verticalOffset = 0.284;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_RU_Support_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_RU_Support_F0;
    editorCategory = EdCat_Supplies;
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_RUS_CA.paa",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS_CO.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS.rvmat"
    };
	class TransportMagazines
	{
		mag_xx(Laserbatteries,5);
	};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(ItemGPS,5);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,5);
		item_xx(acc_pointer_IR,5);
		item_xx(muzzle_snds_L,5);
		item_xx(muzzle_mzls_L,5);
		item_xx(muzzle_snds_545,5);
		item_xx(muzzle_mzls_545,5);
		item_xx(muzzle_snds_B_lush_F,5);
		item_xx(muzzle_mzls_B,5);
		item_xx(Binocular,1);
		item_xx(Rangefinder,1);
		item_xx(Laserdesignator_02,1);
		item_xx(bipod_02_F_blk,1);
		item_xx(bipod_02_F_lush,1);
		item_xx(NVGoggles_OPFOR,2);
		item_xx(O_NVGoggles_grn_F,2);
	};
};
class Box_RU_WpsLaunch_F: Box_East_WpsLaunch_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.15;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_RU_WpsLaunch_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_RU_WpsLaunch_F0;
    editorCategory = EdCat_Supplies;
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_RUS_CA.paa",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS_CO.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS.rvmat"
    };
	class TransportMagazines
	{
		mag_xx(Titan_AA,3);
		mag_xx(Titan_AT,3);
		mag_xx(Titan_AP,3);
		mag_xx(RPG32_F,3);
		mag_xx(RPG32_HE_F,3);
		mag_xx(Vorona_HEAT,1);
		mag_xx(Vorona_HE,1);
	};
	class TransportWeapons
	{
		weap_xx(launch_O_Titan_camo_F,1);
		weap_xx(launch_I_Titan_short_F,1);
		weap_xx(launch_RPG32_green_F,1);
		weap_xx(launch_O_Vorona_green_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,4);
	};
};
class Box_RU_AmmoVeh_F: Box_East_AmmoVeh_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.79;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_RU_AmmoVeh_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_RU_AmmoVeh_F0;
    editorCategory = EdCat_Supplies;
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_RUS_CA.paa",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoVeh_RUS_CO.paa"
    };
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems{};
};
class O_R_supplyCrate_F: ReammoBox_F
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 1.58;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.892;
		verticalOffsetWorld = 0;
		init = "''";
	};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_supplyCrate_F.jpg";
	scope = public;
    displayName = $STR_A3_A_CfgVehicles_O_R_supplyCrate_F0;
	model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
	maximumLoad = 4000;
	transportMaxWeapons = 12;
	transportMaxMagazines = 96;
	supplyRadius = -1;
	memoryPointSupply = doplnovani;
	slingLoadCargoMemoryPoints[] =
	{
		SlingLoadCargo1,
		SlingLoadCargo2,
		SlingLoadCargo3,
		SlingLoadCargo4
	};
    hiddenSelections[] = {camo};
    hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\supplydrop_OPFOR_CO.paa"};
	class TransportMagazines
	{
		mag_xx(17Rnd_9x21_Mag,6);
		mag_xx(30Rnd_9x21_Mag_SMG_02,6);
		mag_xx(30Rnd_545x39_black_Mag_F,24);
		mag_xx(10Rnd_93x64_DMR_05_Mag,6);
		mag_xx(75Rnd_762x39_AK12_Mag_F,8);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
		mag_xx(chemlight_red,6);
		mag_xx(RPG32_F,3);
		mag_xx(RPG32_HE_F,3);
		mag_xx(Laserbatteries,2);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(UGL_FlareRed_F,2);
		mag_xx(UGL_FlareYellow_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_545_F,2);
		weap_xx(arifle_AK12_GL_545_F,1);
		weap_xx(arifle_AK12U_545_F,1);
		weap_xx(arifle_RPK12_F,1);
		weap_xx(srifle_DMR_05_blk_F,1);
		weap_xx(launch_RPG32_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_02,1);
		item_xx(optic_ACO_grn_AK_F,1);
		item_xx(optic_ACO_grn_smg,1);
		item_xx(optic_Holosight_lush_F,1);
		item_xx(optic_Arco_blk_F,1);
		item_xx(optic_Arco_lush_F,1);
		item_xx(optic_Arco_AK_blk_F,1);
		item_xx(optic_Arco_AK_lush_F,1);
		item_xx(optic_nightstalker,1);
		item_xx(optic_tws,1);
		item_xx(optic_tws_mg,1);
		item_xx(optic_tws_sniper,1);
		item_xx(acc_flashlight,2);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,2);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_02_F_blk,1);
		item_xx(NVGoggles_OPFOR,1);
		item_xx(O_NVGoggles_grn_F,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,2);
	};
};