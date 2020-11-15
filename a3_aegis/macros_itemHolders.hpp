/*
- Holders for weapons, items, et cetera
- Placed in CfgVehicles
*/

// Primary weapons
#define WEAPON_HOLDER(weapon,magazine,name,subcategory) \
	class Weapon_##weapon: Weapon_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = name; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = subcategory; \
		vehicleClass = WeaponsPrimary; \
		class TransportWeapons \
		{ \
			weap_xx(##weapon##,1); \
		}; \
		class TransportMagazines \
		{ \
			mag_xx(##magazine##,1); \
		}; \
	};

// Handguns
#define PISTOL_HOLDER(weapon,magazine,name) \
	class Weapon_##weapon: Pistol_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = name; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = EdSubcat_Pistols; \
		vehicleClass = WeaponsHandguns; \
		class TransportWeapons \
		{ \
			weap_xx(##weapon##,1); \
		}; \
		class TransportMagazines \
		{ \
			mag_xx(##magazine##,1); \
		}; \
	};

// Secondary weapons
#define LAUNCHER_HOLDER(weapon,magazine,name) \
	class Weapon_##weapon: Launcher_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = name; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = EdSubcat_Launchers; \
		vehicleClass = WeaponsSecondary; \
		class TransportWeapons \
		{ \
			weap_xx(##weapon##,1); \
		}; \
		class TransportMagazines \
		{ \
			mag_xx(##magazine##,1); \
		}; \
	};

// Attachments
#define ACC_HOLDER(accessory,name,category,subcategory,vehclass) \
	class Item_##accessory: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = name; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = category; \
		editorSubcategory = subcategory; \
		vehicleClass = vehclass; \
		class TransportItems \
		{ \
			item_xx(##accessory##,1); \
		}; \
	};

// Inventory items
#define ITEM_HOLDER(item,name) \
	class Item_##item: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = name; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_InventoryItems; \
		vehicleClass = Items; \
		model = "\A3\Weapons_F\DummyItem.p3d"; \
		class TransportItems \
		{ \
			item_xx(##item##,1); \
		}; \
	};

// Headgear
#define HEADGEAR_HOLDER(a,b,c) \
	class Headgear_##a##: Headgear_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = ##c##; \
		vehicleClass = ItemsHeadgear; \
		model = "\A3\Weapons_F\DummyCap.p3d"; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

// Uniforms
#define UNIFORM_HOLDER(a,b) \
	class Item_##a##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_Uniforms; \
		vehicleClass = ItemsUniforms; \
		model = "\A3\Weapons_F\DummyWeapon.p3d"; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

// Vests
#define VEST_HOLDER(a,b) \
	class Vest_##a##: Vest_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_Vests; \
		vehicleClass = ItemsVests; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};