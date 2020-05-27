#define WEAPON_HOLDER(a,b,c,d) \
	class Weapon_##a##: Weapon_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = ##c##; \
		vehicleClass = WeaponsPrimary; \
		class TransportWeapons \
		{ \
			weap_xx(##a##,1); \
		}; \
		class TransportMagazines \
		{ \
			mag_xx(##d##,1); \
		}; \
	};

#define PISTOL_HOLDER(a,b,c) \
	class Weapon_##a##: Pistol_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = EdSubcat_Pistols; \
		vehicleClass = WeaponsHandguns; \
		class TransportWeapons \
		{ \
			weap_xx(##a##,1); \
		}; \
		class TransportMagazines \
		{ \
			mag_xx(##c##,1); \
		}; \
	};

#define LAUNCHER_HOLDER(a,b,c) \
	class Weapon_##a##: Launcher_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = EdSubcat_Launchers; \
		vehicleClass = WeaponsSecondary; \
		class TransportWeapons \
		{ \
			weap_xx(##a##,1); \
		}; \
		class TransportMagazines \
		{ \
			mag_xx(##c##,1); \
		}; \
	};

#define ACC_HOLDER(a,b,c,d,e) \
	class Item_##a##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = ##c##; \
		editorSubcategory = ##d##; \
		vehicleClass = ##e##; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

#define ITEM_HOLDER(a,b,c) \
	class Item_##a##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_InventoryItems; \
		vehicleClass = Items; \
		model = ##c##; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

class CfgVehicles
{
	class FxCartridge;
	class FxCartridge_pellets: FxCartridge
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.07;
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\cartridge_pellets.p3d";
	};
	class FxCartridge_25x40: FxCartridge
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.1;
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\cartridge_25x40.p3d";
	};
	// Weapon holders
	// Arma 3
	class Weapon_Base_F;
	class Pistol_Base_F;
	class Launcher_Base_F;
	class Item_Base_F;
	// Arma 3 Apex
	class Weapon_arifle_AK12_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_F0;
	};
	class Weapon_arifle_AK12_GL_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_F0;
	};
	// Arma 3 Contact
	LAUNCHER_HOLDER(launch_RPG32_camo_F,$STR_A3_C_CfgWeapons_launch_RPG32_camo_F0,RPG32_F)
	class Weapon_arifle_AK12_lush_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_lush_F0;
	};
	class Weapon_arifle_AK12_arid_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_arid_F0;
	};
	class Weapon_arifle_AK12_GL_lush_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_lush_F0;
	};
	class Weapon_arifle_AK12_GL_arid_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_arid_F0;
	};
	class Weapon_arifle_AK12U_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_F0;
	};
	class Weapon_arifle_AK12U_lush_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_lush_F0;
	};
	class Weapon_arifle_AK12U_arid_F: Weapon_Base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_arid_F0;
	};
	// Arma 3 Aegis
	/*
	ITEM_HOLDER(Laserdesignator_02_blk_F,$STR_A3_A_CfgWeapons_Laserdesignator_02_blk_F0,"\A3\Weapons_F\DummyBinoc.p3d")
	ITEM_HOLDER(Laserdesignator_02_grn_F,$STR_A3_A_CfgWeapons_Laserdesignator_02_grn_F0,"\A3\Weapons_F\DummyBinoc.p3d")
	*/
	ITEM_HOLDER(Laserdesignator_04,$STR_A3_A_CfgWeapons_Laserdesignator_040,"\A3\Weapons_F\DummyBinoc.p3d")
	LAUNCHER_HOLDER(launch_RPG32_black_F,$STR_A3_A_CfgWeapons_launch_RPG32_black_F0,RPG32_F)
	LAUNCHER_HOLDER(launch_Titan_blk_F,$STR_A3_A_CfgWeapons_launch_Titan_blk_F0,Titan_AA)
	LAUNCHER_HOLDER(launch_Titan_short_blk_F,$STR_A3_A_CfgWeapons_launch_Titan_short_blk_F0,Titan_AT)
	WEAPON_HOLDER(srifle_EBR_blk_F,$STR_A3_A_CfgWeapons_srifle_EBR_blk_F0,EdSubcat_SniperRifles,20Rnd_762x51_Mag)
	WEAPON_HOLDER(srifle_EBR_khk_F,$STR_A3_A_CfgWeapons_srifle_EBR_khk_F0,EdSubcat_SniperRifles,20Rnd_762x51_Mag)
	WEAPON_HOLDER(srifle_DMR_01_black_F,$STR_A3_A_CfgWeapons_srifle_DMR_01_black_F0,EdSubcat_SniperRifles,10Rnd_762x54_Mag)
	WEAPON_HOLDER(srifle_DMR_01_arid_F,$STR_A3_A_CfgWeapons_srifle_DMR_01_arid_F0,EdSubcat_SniperRifles,10Rnd_762x54_Mag)
	WEAPON_HOLDER(srifle_DMR_01_lush_F,$STR_A3_A_CfgWeapons_srifle_DMR_01_lush_F0,EdSubcat_SniperRifles,10Rnd_762x54_Mag)
	WEAPON_HOLDER(LMG_Mk200_plain_F,$STR_A3_A_CfgWeapons_LMG_Mk200_plain_F0,EdSubcat_MachineGuns,200Rnd_65x39_cased_Box)
	WEAPON_HOLDER(LMG_Mk200_khk_F,$STR_A3_A_CfgWeapons_LMG_Mk200_khk_F0,EdSubcat_MachineGuns,200Rnd_65x39_cased_Box)
	WEAPON_HOLDER(LMG_Zafir_black_F,$STR_A3_A_CfgWeapons_LMG_Zafir_black_F0,EdSubcat_MachineGuns,150Rnd_762x54_Box)
	WEAPON_HOLDER(LMG_Zafir_ghex_F,$STR_A3_A_CfgWeapons_LMG_Zafir_ghex_F0,EdSubcat_MachineGuns,150Rnd_762x54_Box)
	PISTOL_HOLDER(hgun_P07_blk_F,$STR_A3_A_CfgWeapons_hgun_P07_blk_F0,EdSubcat_Pistols,16Rnd_9x21_Mag)
	PISTOL_HOLDER(hgun_Pistol_heavy_01_black_F,$STR_A3_A_CfgWeapons_hgun_Pistol_heavy_01_black_F0,EdSubcat_Pistols,11Rnd_45ACP_Mag)
	WEAPON_HOLDER(arifle_Mk20_black_F,$STR_A3_A_CfgWeapons_arifle_Mk20_black_F0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_Mk20_hex_F,$STR_A3_A_CfgWeapons_arifle_Mk20_hex_F0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_Mk20C_black_F,$STR_A3_A_CfgWeapons_arifle_Mk20C_black_F0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_Mk20C_hex_F,$STR_A3_A_CfgWeapons_arifle_Mk20C_hex_F0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_Mk20_GL_black_F,$STR_A3_A_CfgWeapons_arifle_Mk20_GL_black_F0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_Mk20_GL_hex_F,$STR_A3_A_CfgWeapons_arifle_Mk20_GL_hex_F0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_TRG21_black_F,$STR_A3_A_CfgWeapons_arifle_TRG21_black_F0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_TRG20_black_F,$STR_A3_A_CfgWeapons_arifle_TRG20_black_F0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_TRG21_GL_black_F,$STR_A3_A_CfgWeapons_arifle_TRG21_GL_black_F0,EdSubcat_AssaultRifles,30Rnd_556x45_Stanag)
	WEAPON_HOLDER(arifle_AK12_545_F,$STR_A3_A_CfgWeapons_arifle_AK12_545_F0,EdSubcat_AssaultRifles,30Rnd_545x39_black_Mag_F)
	WEAPON_HOLDER(arifle_AK12_GL_545_F,$STR_A3_A_CfgWeapons_arifle_AK12_GL_545_F0,EdSubcat_AssaultRifles,30Rnd_545x39_black_Mag_F)
	WEAPON_HOLDER(arifle_AK12_545_lush_F,$STR_A3_A_CfgWeapons_arifle_AK12_545_lush_F0,EdSubcat_AssaultRifles,30Rnd_545x39_lush_Mag_F)
	WEAPON_HOLDER(arifle_AK12_545_arid_F,$STR_A3_A_CfgWeapons_arifle_AK12_545_arid_F0,EdSubcat_AssaultRifles,30Rnd_545x39_arid_Mag_F)
	WEAPON_HOLDER(arifle_AK12_GL_545_lush_F,$STR_A3_A_CfgWeapons_arifle_AK12_545_GL_lush_F0,EdSubcat_AssaultRifles,30Rnd_545x39_lush_Mag_F)
	WEAPON_HOLDER(arifle_AK12_GL_545_arid_F,$STR_A3_A_CfgWeapons_arifle_AK12_545_GL_arid_F0,EdSubcat_AssaultRifles,30Rnd_545x39_arid_Mag_F)
	WEAPON_HOLDER(arifle_AK12U_545_F,$STR_A3_A_CfgWeapons_arifle_AK12U_545_F0,EdSubcat_AssaultRifles,30Rnd_545x39_black_Mag_F)
	WEAPON_HOLDER(arifle_AK12U_545_lush_F,$STR_A3_A_CfgWeapons_arifle_AK12U_545_lush_F0,EdSubcat_AssaultRifles,30Rnd_545x39_lush_Mag_F)
	WEAPON_HOLDER(arifle_AK12U_545_arid_F,$STR_A3_A_CfgWeapons_arifle_AK12U_545_arid_F0,EdSubcat_AssaultRifles,30Rnd_545x39_arid_Mag_F)
	WEAPON_HOLDER(SMG_01_black_F,$STR_A3_A_CfgWeapons_SMG_01_black_F0,EdSubcat_SubMachineGuns,30Rnd_45ACP_Mag_SMG_01)
	WEAPON_HOLDER(SMG_01_khk_F,$STR_A3_A_CfgWeapons_SMG_01_khk_F0,EdSubcat_SubMachineGuns,30Rnd_45ACP_Mag_SMG_01)
	ACC_HOLDER(muzzle_snds_pistol_heavy_01,$STR_A3_A_CfgWeapons_muzzle_snds_pistol_heavy_010,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(muzzle_mzls_H,$STR_A3_A_CfgWeapons_muzzle_mzls_H0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(muzzle_mzls_L,$STR_A3_A_CfgWeapons_muzzle_mzls_L0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(muzzle_mzls_M,$STR_A3_A_CfgWeapons_muzzle_mzls_M0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(muzzle_mzls_B,$STR_A3_A_CfgWeapons_muzzle_mzls_B0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(muzzle_mzls_acp,$STR_A3_A_CfgWeapons_muzzle_mzls_acp0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(muzzle_mzls_smg_01,$STR_A3_A_CfgWeapons_muzzle_mzls_smg_010,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(optic_srs,$STR_A3_A_CfgWeapons_optic_srs0,EdCat_WeaponAttachments,EdSubcat_TopSlot_Collimators,WeaponAccessories)
	ACC_HOLDER(optic_dcl,$STR_A3_A_CfgWeapons_optic_dcl0,EdCat_WeaponAttachments,EdSubcat_TopSlot_Collimators,WeaponAccessories)
	ACC_HOLDER(optic_ACOG,$STR_A3_A_CfgWeapons_optic_ACOG0,EdCat_WeaponAttachments,EdSubcat_TopSlot_Optics,WeaponAccessories)
	ACC_HOLDER(optic_tws_sniper,$STR_A3_CfgWeapons_optic_tws_sniper0,EdCat_WeaponAttachments,EdSubcat_TopSlot_Optics,WeaponAccessories)
	WEAPON_HOLDER(srifle_DMR_02_tna_F,$STR_A3_A_CfgWeapons_srifle_DMR_02_tna_F0,EdSubcat_SniperRifles,10Rnd_338_Mag)
	WEAPON_HOLDER(srifle_DMR_05_ghex_F,$STR_A3_A_CfgWeapons_srifle_DMR_05_ghex_F0,EdSubcat_SniperRifles,10Rnd_93x64_DMR_05_Mag)
	WEAPON_HOLDER(srifle_DMR_06_black_F,$STR_A3_A_CfgWeapons_srifle_DMR_06_black_F0,EdSubcat_SniperRifles,20Rnd_762x51_Mag)
	WEAPON_HOLDER(MMG_01_black_F,$STR_A3_A_CfgWeapons_MMG_01_black_F0,EdSubcat_MachineGuns,150Rnd_93x64_Mag)
	WEAPON_HOLDER(MMG_01_ghex_F,$STR_A3_A_CfgWeapons_MMG_01_ghex_F0,EdSubcat_MachineGuns,150Rnd_93x64_Mag)
	WEAPON_HOLDER(MMG_02_khaki_F,$STR_A3_A_CfgWeapons_MMG_02_khaki_F0,EdSubcat_MachineGuns,130Rnd_338_Mag)
	ITEM_HOLDER(O_NVGoggles_blk_F,$STR_A3_A_CfgWeapons_O_NVGoggles_blk_F0,"\A3\Weapons_F\DummyNVG.p3d")
	WEAPON_HOLDER(LMG_03_khk_F,$STR_A3_A_CfgWeapons_LMG_03_khk_F0,EdSubcat_MachineGuns,200Rnd_556x45_Box_F)
	WEAPON_HOLDER(LMG_03_snd_F,$STR_A3_A_CfgWeapons_LMG_03_snd_F0,EdSubcat_MachineGuns,200Rnd_556x45_Box_F)
	WEAPON_HOLDER(SMG_05_snd_F,$STR_A3_A_CfgWeapons_SMG_05_snd_F0,EdSubcat_SubMachineGuns,30Rnd_9x21_Mag_SMG_02)
	ACC_HOLDER(muzzle_snds_B_wdm_F,$STR_A3_A_CfgWeapons_muzzle_snds_B_wdm_F0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	LAUNCHER_HOLDER(launch_MRAWS_black_F,$STR_A3_A_CfgWeapons_launch_MRAWS_black_F0,MRAWS_HEAT_F)
	LAUNCHER_HOLDER(launch_MRAWS_black_rail_F,$STR_A3_A_CfgWeapons_launch_MRAWS_black_rail_F0,MRAWS_HEAT_F)
	ITEM_HOLDER(Goggles,$STR_A3_A_CfgWeapons_Goggles0,"\A3\Weapons_F\DummyNVG.p3d")
	ITEM_HOLDER(Goggles_tna_F,$STR_A3_A_CfgWeapons_Goggles_tna_F0,"\A3\Weapons_F\DummyNVG.p3d")
	ITEM_HOLDER(Goggles_grn_F,$STR_A3_A_CfgWeapons_Goggles_grn_F0,"\A3\Weapons_F\DummyNVG.p3d")
	ACC_HOLDER(muzzle_snds_408_black,$STR_A3_A_CfgWeapons_muzzle_snds_408_black0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(muzzle_snds_408_green,$STR_A3_A_CfgWeapons_muzzle_snds_408_green0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(muzzle_snds_408_sand,$STR_A3_A_CfgWeapons_muzzle_snds_408_sand0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(muzzle_snds_460,$STR_A3_A_CfgWeapons_muzzle_snds_4600,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(muzzle_snds_545,$STR_A3_A_CfgWeapons_muzzle_snds_5450,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(muzzle_snds_545_wdm_F,$STR_A3_A_CfgWeapons_muzzle_snds_545_wdm_F0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(muzzle_snds_545_lush_F,$STR_A3_A_CfgWeapons_muzzle_snds_545_lush_F0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(muzzle_snds_545_arid_F,$STR_A3_A_CfgWeapons_muzzle_snds_545_arid_F0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(muzzle_mzls_58_F,$STR_A3_A_CfgWeapons_muzzle_mzls_58_F0,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(muzzle_mzls_545,$STR_A3_A_CfgWeapons_muzzle_mzls_5450,EdCat_WeaponAttachments,EdSubcat_FrontSlot,WeaponAccessories)
	ACC_HOLDER(optic_ACO_grn_AK_F,$STR_A3_A_CfgWeapons_optic_ACO_grn_AK_F0,EdCat_WeaponAttachments,EdSubcat_TopSlot_Collimators,WeaponAccessories)
	ACC_HOLDER(optic_Kobra_F,$STR_A3_A_CfgWeapons_optic_Kobra_F0,EdCat_WeaponAttachments,EdSubcat_TopSlot_Collimators,WeaponAccessories)
	ACC_HOLDER(optic_pso_F,$STR_A3_A_CfgWeapons_optic_pso_F0,EdCat_WeaponAttachments,EdSubcat_TopSlot_Optics,WeaponAccessories)
};