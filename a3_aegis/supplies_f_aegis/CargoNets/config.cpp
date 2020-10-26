#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Heli
	class CargoNet_01_ammo_base_F;
	class B_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
	    editorSubcategory = EdSubcat_Ammo_NATO;
		class TransportMagazines
		{
			delete _xx_100Rnd_65x39_caseless_mag_Tracer;
			mag_xx(100Rnd_65x39_caseless_mag,24);
			mag_xx(200Rnd_65x39_cased_Box_Red,6);
			mag_xx(11Rnd_45ACP_Mag,4);
			mag_xx(16Rnd_9x21_Mag,4);
			mag_xx(1Rnd_HE_Grenade_shell,15);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			delete _xx_1Rnd_SmokePurple_Grenade_shell;
			delete _xx_1Rnd_SmokeRed_Grenade_shell;
			delete _xx_1Rnd_SmokeYellow_Grenade_shell;
			mag_xx(1Rnd_Smoke_Grenade_shell,2);
			mag_xx(20Rnd_556x45_UW_mag,6);
			mag_xx(20Rnd_762x51_Mag,24);
			mag_xx(30Rnd_45ACP_Mag_SMG_01,12);
			delete _xx_30Rnd_556x45_Stanag_red;
			mag_xx(20Rnd_556x45_Stanag_red,6);
			mag_xx(30Rnd_65x39_caseless_mag,108);
			mag_xx(3Rnd_HE_Grenade_shell,3);
			mag_xx(7Rnd_408_mag,12);
			mag_xx(130Rnd_338_Mag,6);
			mag_xx(8Rnd_12Gauge_Pellets,6);
			mag_xx(8Rnd_12Gauge_Slug,6);
			mag_xx(30Rnd_556x45_Stanag_Sand_red,48);
			mag_xx(150Rnd_556x45_Drum_Sand_Mag_F,12);
        	mag_xx(5Rnd_25x40mm_HE,6);
        	mag_xx(5Rnd_25x40mm_Airburst,6);
			mag_xx(APERSBoundingMine_Range_Mag,5);
			mag_xx(APERSMine_Range_Mag,5);
			mag_xx(APERSTripMine_Wire_Mag,5);
			mag_xx(ATMine_Range_Mag,5);
			mag_xx(B_IR_Grenade,8);
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
			mag_xx(DemoCharge_Remote_Mag,5);
			mag_xx(HandGrenade,24);
			mag_xx(Laserbatteries,1);
			mag_xx(MiniGrenade,24);
			mag_xx(NLAW_F,8);
			mag_xx(MRAWS_HEAT_F,6);
			mag_xx(MRAWS_HE_F,6);
			mag_xx(SatchelCharge_Remote_Mag,2);
			mag_xx(SLAMDirectionalMine_Wire_Mag,5);
	    	mag_xx(APERSMineDispenser_Mag,1);
		    mag_xx(chemlight_green,2);
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellOrange,2);
			delete _xx_SmokeShellPurple;
			delete _xx_SmokeShellRed;
			delete _xx_SmokeShellYellow;
			mag_xx(Titan_AA,6);
			mag_xx(Titan_AP,4);
			mag_xx(Titan_AT,6);
			mag_xx(UGL_FlareGreen_F,2);
			mag_xx(UGL_FlareWhite_F,2);
		};
		class TransportWeapons
		{
			weap_xx(arifle_MXC_F,4);
			weap_xx(arifle_MXM_F,2);
			weap_xx(arifle_MX_F,8);
			weap_xx(arifle_MX_GL_F,4);
			weap_xx(arifle_MX_SW_F,4);
			weap_xx(LMG_Mk200_plain_F,2);
			weap_xx(arifle_SDAR_F,2);
			weap_xx(hgun_P07_F,2);
			weap_xx(hgun_Pistol_heavy_01_F,2);
			weap_xx(launch_NLAW_F,2);
			delete _xx_launch_Titan_F;
			weap_xx(launch_B_Titan_F,2);
			delete _xx_launch_Titan_short_F;
			weap_xx(launch_B_Titan_short_F,2);
			weap_xx(launch_MRAWS_sand_F,2);
			delete _xx_SMG_01_F;
			weap_xx(SMG_01_black_F,2);
			weap_xx(srifle_DMR_03_tan_F,2);
			weap_xx(srifle_EBR_F,2);
			delete _xx_srifle_LRR_F;
			weap_xx(srifle_LRR_camo_F,2);
			weap_xx(MMG_02_sand_F,2);
			weap_xx(sgun_KSG_F,2);
			weap_xx(arifle_SPAR_01_snd_F,6);
			weap_xx(arifle_SPAR_01_GL_snd_F,2);
			weap_xx(arifle_SPAR_02_snd_F,2);
			weap_xx(arifle_SPAR_03_snd_F,2);
			weap_xx(GL_XM25_F,2);

		};
		class TransportItems
		{
			item_xx(acc_flashlight,5);
			item_xx(acc_pointer_IR,5);
			item_xx(acc_flashlight_pistol,2);
			item_xx(Binocular,1);
			item_xx(FirstAidKit,10);
			item_xx(ItemGPS,5);
		    item_xx(B_UavTerminal,2);
			item_xx(Laserdesignator,1);
			item_xx(Medikit,1);
			item_xx(MineDetector,1);
			item_xx(muzzle_snds_acp,5);
			item_xx(muzzle_snds_b_snd_F,5);
            delete _xx_muzzle_snds_b;
			item_xx(muzzle_snds_H_snd_F,5);
            delete _xx_muzzle_snds_H;
            delete _xx_muzzle_snds_H_SW;
			item_xx(muzzle_snds_L,5);
			item_xx(muzzle_snds_M_snd_F,5);
			item_xx(muzzle_snds_338_sand,2);
			item_xx(muzzle_snds_408_sand,2);
			item_xx(muzzle_mzls_acp,2);
			item_xx(muzzle_mzls_b,2);
			item_xx(muzzle_mzls_H,2);
			item_xx(muzzle_mzls_L,2);
			item_xx(muzzle_mzls_M,2);
			item_xx(bipod_01_F_snd,5);
			item_xx(optic_ACO,2);
			item_xx(optic_ACO_smg,2);
			item_xx(optic_AMS_snd,2);
			item_xx(optic_DMS,2);
			item_xx(optic_Hamr,2);
			item_xx(optic_Holosight,2);
			item_xx(optic_Holosight_smg,2);
			item_xx(optic_LRPS,2);
			item_xx(optic_MRD,2);
			item_xx(optic_NVS,2);
			item_xx(optic_SOS,2);
			item_xx(optic_tws,2);
			item_xx(optic_tws_mg,2);
			item_xx(optic_tws_sniper,2);
			item_xx(Rangefinder,1);
			item_xx(ToolKit,1);
			item_xx(NVGoggles,5);
		};
		class TransportBackpacks
		{
			bag_xx(B_Kitbag_mcamo,5);
		};
	};
	class O_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
	    editorSubcategory = EdSubcat_Ammo_CSAT;
		class TransportMagazines
		{
			mag_xx(10Rnd_762x54_Mag,12);
			mag_xx(150Rnd_762x54_Box,16);
            delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,4);
			mag_xx(1Rnd_HE_Grenade_shell,24);
			delete _xx_1Rnd_SmokeBlue_Grenade_shell;
			delete _xx_1Rnd_SmokeGreen_Grenade_shell;
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			delete _xx_1Rnd_SmokePurple_Grenade_shell;
			mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
			mag_xx(1Rnd_Smoke_Grenade_shell,2);
			mag_xx(20Rnd_556x45_UW_mag,6);
			delete _xx_30Rnd_556x45_Stanag_green;
			mag_xx(20Rnd_556x45_Stanag_green,6);
			mag_xx(30Rnd_65x39_caseless_green,144);
			delete _xx_30Rnd_9x21_Mag;
			mag_xx(30Rnd_9x21_Mag_SMG_02,12);
			mag_xx(10Rnd_127x54_Mag,12);
			mag_xx(10Rnd_93x64_DMR_05_Mag,12);
			mag_xx(5Rnd_127x108_APDS_Mag,4);
			mag_xx(5Rnd_127x108_Mag,8);
			mag_xx(150Rnd_93x64_Mag,6);
			mag_xx(6Rnd_45ACP_Cylinder,4);
			mag_xx(8Rnd_12Gauge_Pellets,6);
			mag_xx(8Rnd_12Gauge_Slug,6);
			mag_xx(10Rnd_50BW_Mag_F,24);
			mag_xx(APERSBoundingMine_Range_Mag,5);
			mag_xx(APERSMine_Range_Mag,5);
			mag_xx(APERSTripMine_Wire_Mag,5);
			mag_xx(ATMine_Range_Mag,5);
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
			mag_xx(DemoCharge_Remote_Mag,5);
            delete _xx_HandGrenade;
            mag_xx(HandGrenade_East,24);
			mag_xx(Laserbatteries,1);
			mag_xx(MiniGrenade,24);
			mag_xx(O_IR_Grenade,8);
            mag_xx(RPG32_F,6);
            mag_xx(RPG32_HE_F,6);
			mag_xx(SatchelCharge_Remote_Mag,2);
			mag_xx(SLAMDirectionalMine_Wire_Mag,5);
	    	mag_xx(APERSMineDispenser_Mag,1);
		    mag_xx(chemlight_red,2);
			mag_xx(SmokeShell,2);
			delete _xx_SmokeShellBlue;
			delete _xx_SmokeShellGreen;
			mag_xx(SmokeShellOrange,2);
			delete _xx_SmokeShellPurple;
			mag_xx(SmokeShellRed,2);
			mag_xx(SmokeShellYellow,2);
			mag_xx(Titan_AA,6);
			mag_xx(Titan_AP,4);
			mag_xx(Titan_AT,6);
			mag_xx(Vorona_HEAT,2);
			mag_xx(Vorona_HE,2);
			mag_xx(UGL_FlareRed_F,2);
			mag_xx(UGL_FlareYellow_F,2);
		};
		class TransportWeapons
		{
			weap_xx(arifle_Katiba_C_F,4);
			weap_xx(arifle_Katiba_F,8);
			weap_xx(arifle_Katiba_GL_F,4);
			weap_xx(arifle_SDAR_F,2);
			weap_xx(hgun_Pistol_heavy_02_F,2);
			weap_xx(hgun_Rook40_F,2);
			weap_xx(launch_RPG32_F,2);
			delete _xx_launch_Titan_F;
			weap_xx(launch_O_Titan_F,2);
			delete _xx_launch_Titan_short_F;
			weap_xx(launch_O_Titan_short_F,2);
			weap_xx(launch_O_Vorona_brown_F,2);
			weap_xx(LMG_Zafir_F,4);
			weap_xx(SMG_02_F,2);
			weap_xx(srifle_DMR_01_F,2);
			weap_xx(srifle_DMR_04_F,2);
			weap_xx(srifle_DMR_05_blk_F,2);
			weap_xx(srifle_GM6_camo_F,2);
            delete _xx_srifle_GM6_F;
			weap_xx(MMG_01_hex_F,2);
			weap_xx(sgun_AA40_F,2);
			weap_xx(arifle_ARX_hex_F,8);
		};
		class TransportItems
		{
			item_xx(acc_flashlight,5);
			item_xx(acc_pointer_IR,5);
			item_xx(acc_flashlight_pistol,2);
			item_xx(Binocular,1);
			item_xx(FirstAidKit,10);
			item_xx(ItemGPS,5);
		    item_xx(O_UavTerminal,2);
			item_xx(Laserdesignator_02,1);
			item_xx(Medikit,1);
			item_xx(MineDetector,1);
			delete _xx_muzzle_snds_acp;
			item_xx(muzzle_snds_b,5);
            delete _xx_muzzle_snds_H;
			item_xx(muzzle_snds_65_TI_blk_F,5);
			item_xx(muzzle_snds_65_TI_hex_F,5);
			item_xx(muzzle_snds_L,5);
			item_xx(muzzle_snds_93mmg,2);
			item_xx(muzzle_mzls_b,2);
			item_xx(muzzle_mzls_H,2);
			item_xx(muzzle_mzls_L,2);
			item_xx(bipod_02_F_blk,3);
			item_xx(bipod_02_F_hex,2);
			item_xx(optic_ACO_grn,2);
			item_xx(optic_ACO_grn_smg,2);
			item_xx(optic_Arco_,1);
			item_xx(optic_Arco_blk_F,1);
			item_xx(optic_KHS_blk,1);
			item_xx(optic_KHS_hex,1);
			item_xx(optic_DMS,2);
			item_xx(optic_LRPS,2);
			delete _xx_optic_MRCO;
			item_xx(optic_Nightstalker,5);
			delete _xx_optic_SOS;
			delete _xx_optic_TWS;
			delete _xx_optic_TWS_MG;
			item_xx(optic_Yorris,2);
			item_xx(Rangefinder,1);
			item_xx(ToolKit,1);
			delete _xx_NVGoggles_OPFOR;
			item_xx(O_NVGoggles_blk_F,2);
			item_xx(O_NVGoggles_hex_F,2);
			item_xx(O_NVGoggles_urb_F,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ocamo,5);
		};
	};
	class I_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
	    editorSubcategory = EdSubcat_Ammo_AAF;
		class TransportMagazines
		{
			mag_xx(1Rnd_HE_Grenade_shell,24);
			delete _xx_1Rnd_SmokeBlue_Grenade_shell;
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(1Rnd_SmokePurple_Grenade_shell,2);
			delete _xx_1Rnd_SmokeRed_Grenade_shell;
			delete _xx_1Rnd_SmokeYellow_Grenade_shell;
			mag_xx(1Rnd_Smoke_Grenade_shell,2);
			mag_xx(200Rnd_65x39_cased_Box,12);
			mag_xx(20Rnd_556x45_UW_mag,6);
			mag_xx(20Rnd_762x51_Mag,12);
			mag_xx(20Rnd_556x45_Stanag,6);
			mag_xx(30Rnd_556x45_Stanag,96);
			mag_xx(30Rnd_9x21_Mag,12);
			mag_xx(5Rnd_127x108_Mag,12);
			mag_xx(9Rnd_45ACP_Mag,4);
			mag_xx(8Rnd_12Gauge_Pellets,6);
			mag_xx(8Rnd_12Gauge_Slug,6);
			mag_xx(APERSBoundingMine_Range_Mag,5);
			mag_xx(APERSMine_Range_Mag,5);
			mag_xx(APERSTripMine_Wire_Mag,5);
			mag_xx(ATMine_Range_Mag,5);
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
			mag_xx(DemoCharge_Remote_Mag,5);
			mag_xx(HandGrenade,24);
			mag_xx(I_IR_Grenade,8);
			mag_xx(Laserbatteries,5);
			mag_xx(MiniGrenade,24);
			mag_xx(NLAW_F,8);
			mag_xx(MRAWS_HEAT_F,6);
			mag_xx(MRAWS_HE_F,6);
			mag_xx(SatchelCharge_Remote_Mag,2);
			mag_xx(SLAMDirectionalMine_Wire_Mag,5);
	    	mag_xx(APERSMineDispenser_Mag,1);
		    mag_xx(chemlight_green,2);
			mag_xx(SmokeShell,2);
			class _xx_SmokeShellBlue;
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellOrange,2);
			mag_xx(SmokeShellPurple,2);
			class _xx_SmokeShellRed;
			class _xx_SmokeShellYellow;
			mag_xx(Titan_AA,6);
			mag_xx(Titan_AP,4);
			mag_xx(Titan_AT,6);
			mag_xx(UGL_FlareGreen_F,2);
			mag_xx(UGL_FlareYellow_F,2);
		};
		class TransportWeapons
		{
			weap_xx(arifle_Mk20C_F,4);
			weap_xx(arifle_Mk20_F,8);
			weap_xx(arifle_Mk20_GL_F,4);
			weap_xx(arifle_SDAR_F,2);
			weap_xx(hgun_ACPC2_F,2);
			weap_xx(hgun_PDW2000_F,2);
			weap_xx(launch_NLAW_F,2);
			weap_xx(launch_I_Titan_F,2);
			weap_xx(launch_I_Titan_short_F,2);
			weap_xx(launch_MRAWS_olive_rail_F,2);
			weap_xx(LMG_Mk200_F,4);
			weap_xx(srifle_EBR_F,2);
			weap_xx(srifle_GM6_F,2);
			weap_xx(sgun_M4_F,2);
		};
		class TransportItems
		{
			item_xx(acc_flashlight,5);
			item_xx(acc_flashlight_pistol,2);
			item_xx(acc_pointer_IR,5);
			item_xx(Binocular,1);
			item_xx(FirstAidKit,10);
			item_xx(ItemGPS,5);
		    item_xx(I_UavTerminal,2);
			item_xx(Laserdesignator_03,1);
			item_xx(Medikit,1);
			item_xx(MineDetector,1);
			item_xx(muzzle_snds_acp,5);
			item_xx(muzzle_snds_b,5);
            delete _xx_muzzle_snds_H_MG;
			item_xx(muzzle_snds_H,2);
			item_xx(muzzle_snds_L,5);
			item_xx(muzzle_snds_M,5);
			item_xx(muzzle_mzls_acp,2);
			item_xx(muzzle_mzls_b,2);
			item_xx(muzzle_mzls_H,2);
			item_xx(muzzle_mzls_L,2);
			item_xx(muzzle_mzls_M,2);
			item_xx(bipod_03_F_blk,5);
			item_xx(optic_ACO_grn,2);
			item_xx(optic_ACO_grn_smg,2);
			item_xx(optic_DMS,2);
            delete _xx_optic_Holosight;
			item_xx(optic_Holosight_blk_F,2);
            delete _xx_optic_Holosight_smg;
			item_xx(optic_Holosight_smg_blk_F,2);
			item_xx(optic_LRPS,2);
			item_xx(optic_MRCO,2);
			item_xx(optic_NVS,2);
			item_xx(optic_SOS,2);
			item_xx(optic_tws,2);
			item_xx(optic_tws_mg,2);
			item_xx(optic_tws_sniper,2);
			item_xx(Rangefinder,1);
			item_xx(ToolKit,1);
			item_xx(NVGoggles_INDEP,5);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_oli,5);
		};
	};
	// Arma 3 Laws of War
	class C_IDAP_CargoNet_01_supplies_F: CargoNet_01_ammo_base_F
    {
	    editorSubcategory = EdSubcat_Ammo_IDAP;
    };
    // Arma 3 Enoch
	class I_E_CargoNet_01_ammo_F: I_CargoNet_01_ammo_F
    {
	    editorSubcategory = EdSubcat_Ammo_EAF;
        class TransportMagazines
		{
		    mag_xx(chemlight_green,2);
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellOrange,2);
			delete _xx_SmokeShellPurple;
			delete _xx_SmokeShellRed;
			delete _xx_SmokeShellYellow;
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			delete _xx_1Rnd_SmokePurple_Grenade_shell;
			delete _xx_1Rnd_SmokeRed_Grenade_shell;
			delete _xx_1Rnd_SmokeYellow_Grenade_shell;
			mag_xx(1Rnd_Smoke_Grenade_shell,2);
			mag_xx(UGL_FlareGreen_F,2);
			mag_xx(UGL_FlareWhite_F,2);
			delete _xx_9Rnd_45ACP_Mag;
			mag_xx(11Rnd_45ACP_Mag,4);
			mag_xx(50Rnd_570x28_SMG_03,12);
			mag_xx(1Rnd_HE_Grenade_shell,24);
			mag_xx(30Rnd_65x39_caseless_msbs_mag,108);
			mag_xx(200Rnd_65x39_cased_Box,12);
			mag_xx(6Rnd_12Gauge_Pellets,6);
			mag_xx(6Rnd_12Gauge_Slug,6);
			mag_xx(7Rnd_408_Mag,12);
			mag_xx(ATMine_Range_Mag,5);
			mag_xx(APERSBoundingMine_Range_Mag,5);
			mag_xx(APERSMine_Range_Mag,5);
			mag_xx(APERSTripMine_Wire_Mag,5);
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
			mag_xx(DemoCharge_Remote_Mag,5);
			mag_xx(SatchelCharge_Remote_Mag,2);
			mag_xx(I_E_IR_Grenade,8);
			mag_xx(SLAMDirectionalMine_Wire_Mag,5);
	    	mag_xx(APERSMineDispenser_Mag,1);
			mag_xx(NLAW_F,8);
			mag_xx(MRAWS_HEAT_F,6);
			mag_xx(MRAWS_HE_F,6);
			mag_xx(HandGrenade,24);
			mag_xx(MiniGrenade,24);
			mag_xx(Titan_AA,6);
			mag_xx(Titan_AP,4);
			mag_xx(Titan_AT,6);
			mag_xx(Laserbatteries,1);
		};
		class TransportWeapons
		{
			weap_xx(arifle_MSBS65_F,8);
			weap_xx(arifle_MSBS65_GL_F,4);
			weap_xx(arifle_MSBS65_UBS_F,4);
			weap_xx(arifle_MSBS65_Mark_F,2);
			weap_xx(LMG_Mk200_black_F,4);
			weap_xx(hgun_Pistol_heavy_01_green_F,2);
			weap_xx(launch_NLAW_F,2);
			weap_xx(launch_I_Titan_eaf_F,2);
			weap_xx(launch_I_Titan_short_F,2);
			weap_xx(launch_MRAWS_green_F,2);
            delete _xx_SMG_03_black;
			weap_xx(SMG_03C_black,2);
			weap_xx(srifle_LRR_F,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Medikit,1);
			item_xx(Binocular,1);
			item_xx(ItemGPS,5);
		    item_xx(I_E_UavTerminal,2);
			item_xx(MineDetector,1);
			item_xx(ToolKit,1);
			item_xx(optic_ACO,2);
            delete _xx_optic_ACO_smg;
			item_xx(acc_flashlight,5);
			item_xx(acc_flashlight_pistol,2);
			item_xx(acc_pointer_IR,5);
            delete _xx_Laserdesignator_03;
			item_xx(Laserdesignator_01_khk_F,1);
            delete _xx_muzzle_snds_338_black;
			item_xx(muzzle_snds_acp,2);
			item_xx(muzzle_snds_H,5);
            delete _xx_muzzle_snds_b;
			item_xx(muzzle_snds_570,2);
			item_xx(muzzle_mzls_acp,2);
			item_xx(muzzle_mzls_H,2);
			item_xx(bipod_01_F_blk,5);
			item_xx(optic_ico_01_f,4);
			item_xx(optic_Hamr,2);
			item_xx(optic_LRPS,2);
		    item_xx(optic_MRD_black,2);
			item_xx(optic_NVS,2);
			item_xx(optic_SOS,2);
			item_xx(optic_tws,2);
			item_xx(optic_tws_mg,2);
			item_xx(optic_tws_sniper,2);
			item_xx(Rangefinder,1);
			item_xx(NVGoggles_INDEP,5);
		};
		class TransportBackpacks
		{
			bag_xx(B_Kitbag_eaf_F,5);
		};
    };
	// Arma 3 Aegis
	#include "cfgBlufor_Exp.hpp"
	#include "cfgOpfor_Exp.hpp"
	#include "cfgBlufor_Enoch.hpp"
	#include "cfgSpetsnaz.hpp"
	#include "cfgBlufor_Aegis.hpp"
};