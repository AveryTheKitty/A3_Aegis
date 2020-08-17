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

class CfgVehicles
{
	class Weapon_Base_F;
	WEAPON_HOLDER(sgun_Shotgun_02_blk_F,$STR_A3_A_CfgWeapons_sgun_Shotgun_02_blk_F0,EdSubcat_Shotguns,8Rnd_12Gauge_Pellets)
	WEAPON_HOLDER(sgun_Shotgun_02_hex_F,$STR_A3_A_CfgWeapons_sgun_Shotgun_02_hex_F0,EdSubcat_Shotguns,8Rnd_12Gauge_Pellets)
	WEAPON_HOLDER(sgun_Shotgun_02_ghex_F,$STR_A3_A_CfgWeapons_sgun_Shotgun_02_ghex_F0,EdSubcat_Shotguns,8Rnd_12Gauge_Pellets)
};