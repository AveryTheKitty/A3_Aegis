#define DEPRECATED_PATCH(old,new) \
	class old \
	{ \
		requiredAddons[] = {new}; \
		requiredVersion = 0.1; \
		units[] = {}; \
		weapons[] = {}; \
	}

DEPRECATED_PATCH(A3_Aegis_Boat_F_Aegis_Boat_Civil_01,A3_Aegis_Boat_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Boat_F_Aegis_Boat_Civil_04,A3_Aegis_Boat_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Boat_F_Aegis_Carrier_01,A3_Aegis_Boat_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Boat_F_Aegis_Destroyer_01,A3_Aegis_Boat_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Props_F_Aegis_Items,A3_Aegis_Props_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Props_F_Aegis_Items_Electronics,A3_Aegis_Props_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Props_F_Aegis_Items_Military,A3_Aegis_Props_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Props_F_Aegis_Military_Equipment,A3_Aegis_Props_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Static_F_Aegis_Boat_Rack_01,A3_Aegis_Static_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Structures_F_Aegis_Signs,A3_Aegis_Structures_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Structures_F_Aegis_Signs_Warnings,A3_Aegis_Structures_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Weapons_F_Aegis_Launchers_LAW,A3_Aegis_Weapons_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Weapons_F_Aegis_LongRangeRifles_HuntingRifle,A3_Aegis_Weapons_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Weapons_F_Aegis_Pistols_C1911,A3_Aegis_Weapons_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Weapons_F_Aegis_Pistols_Pistol_Heavy_03,A3_Aegis_Weapons_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Weapons_F_Aegis_Rifles_M4A1,A3_Aegis_Weapons_F_Aegis);
DEPRECATED_PATCH(A3_Aegis_Weapons_F_Aegis_Rifles_RFB,A3_Aegis_Weapons_F_Aegis);



/* I don't think we need these anymore?
DEPRECATED_PATCH(A3_Air_F_Aegis,A3_Aegis_Air_F_Aegis)
DEPRECATED_PATCH(A3_Air_F_Aegis_Heli_Attack_01,A3_Aegis_Air_F_Aegis_Heli_Attack_01)
DEPRECATED_PATCH(A3_Air_F_Aegis_Heli_Attack_02,A3_Aegis_Air_F_Aegis_Heli_Attack_02)
DEPRECATED_PATCH(A3_Air_F_Aegis_Heli_Attack_03,A3_Aegis_Air_F_Aegis)
DEPRECATED_PATCH(A3_Air_F_Aegis_Heli_Light_01,A3_Aegis_Air_F_Aegis_Heli_Light_01)
DEPRECATED_PATCH(A3_Air_F_Aegis_Heli_Light_02,A3_Aegis_Air_F_Aegis_Heli_Light_02)
DEPRECATED_PATCH(A3_Air_F_Aegis_Heli_Light_03,A3_Aegis_Air_F_Aegis_Heli_Light_03)
DEPRECATED_PATCH(A3_Air_F_Aegis_Heli_Transport_01,A3_Aegis_Air_F_Aegis_Heli_Transport_01)
DEPRECATED_PATCH(A3_Air_F_Aegis_Heli_Transport_02,A3_Aegis_Air_F_Aegis_Heli_Transport_02)
DEPRECATED_PATCH(A3_Air_F_Aegis_Heli_Transport_03,A3_Aegis_Air_F_Aegis_Heli_Transport_03)
DEPRECATED_PATCH(A3_Air_F_Aegis_Heli_Transport_04,A3_Aegis_Air_F_Aegis_Heli_Transport_04)
DEPRECATED_PATCH(A3_Air_F_Aegis_Plane_CAS_01,A3_Aegis_Air_F_Aegis_Plane_CAS_01)
DEPRECATED_PATCH(A3_Air_F_Aegis_Plane_CAS_02,A3_Aegis_Air_F_Aegis_Plane_CAS_02)
DEPRECATED_PATCH(A3_Air_F_Aegis_Plane_Fighter_01,A3_Aegis_Air_F_Aegis_Plane_Fighter_01)
DEPRECATED_PATCH(A3_Air_F_Aegis_Plane_Fighter_02,A3_Aegis_Air_F_Aegis_Plane_Fighter_02)
DEPRECATED_PATCH(A3_Air_F_Aegis_Plane_Fighter_03,A3_Aegis_Air_F_Aegis_Plane_Fighter_03)
DEPRECATED_PATCH(A3_Air_F_Aegis_Plane_Fighter_04,A3_Aegis_Air_F_Aegis_Plane_Fighter_04)
DEPRECATED_PATCH(A3_Air_F_Aegis_Plane_Fighter_05,A3_Aegis_Air_F_Aegis_Plane_Fighter_05)
DEPRECATED_PATCH(A3_Air_F_Aegis_Plane_Transport_01,A3_Aegis_Air_F_Aegis_Plane_Transport_01)
DEPRECATED_PATCH(A3_Air_F_Aegis_UAV_01,A3_Aegis_Air_F_Aegis_UAV_01)
DEPRECATED_PATCH(A3_Air_F_Aegis_UAV_02,A3_Aegis_Air_F_Aegis_UAV_02)
DEPRECATED_PATCH(A3_Air_F_Aegis_UAV_03,A3_Aegis_Air_F_Aegis_UAV_03)
DEPRECATED_PATCH(A3_Air_F_Aegis_UAV_04,A3_Aegis_Air_F_Aegis)
DEPRECATED_PATCH(A3_Air_F_Aegis_UAV_05,A3_Aegis_Air_F_Aegis_UAV_05)
DEPRECATED_PATCH(A3_Air_F_Aegis_UAV_06,A3_Aegis_Air_F_Aegis_UAV_06)
DEPRECATED_PATCH(A3_Air_F_Aegis_VTOL_01,A3_Aegis_Air_F_Aegis_VTOL_01)
DEPRECATED_PATCH(A3_Air_F_Aegis_VTOL_02,A3_Aegis_Air_F_Aegis_VTOL_02)
DEPRECATED_PATCH(A3_Air_F_Aegis_VTOL_03,A3_Aegis_Air_F_Aegis)
DEPRECATED_PATCH(A3_Anims_F_Aegis,A3_Aegis_Anims_F_Aegis)
DEPRECATED_PATCH(A3_Armor_F_Aegis,A3_Aegis_Armor_F_Aegis)
DEPRECATED_PATCH(A3_Armor_F_Aegis_AFV_Wheeled_01,A3_Aegis_Armor_F_Aegis_AFV_Wheeled_01)
DEPRECATED_PATCH(A3_Armor_F_Aegis_APC_Tracked_01,A3_Aegis_Armor_F_Aegis_APC_Tracked_01)
DEPRECATED_PATCH(A3_Armor_F_Aegis_APC_Tracked_02,A3_Aegis_Armor_F_Aegis_APC_Tracked_02)
DEPRECATED_PATCH(A3_Armor_F_Aegis_APC_Tracked_03,A3_Aegis_Armor_F_Aegis_APC_Tracked_03)
DEPRECATED_PATCH(A3_Armor_F_Aegis_APC_Wheeled_01,A3_Aegis_Armor_F_Aegis_APC_Wheeled_01)
DEPRECATED_PATCH(A3_Armor_F_Aegis_APC_Wheeled_02,A3_Aegis_Armor_F_Aegis_APC_Wheeled_02)
DEPRECATED_PATCH(A3_Armor_F_Aegis_APC_Wheeled_03,A3_Aegis_Armor_F_Aegis_APC_Wheeled_03)
DEPRECATED_PATCH(A3_Armor_F_Aegis_LT_01,A3_Aegis_Armor_F_Aegis_LT_01)
DEPRECATED_PATCH(A3_Armor_F_Aegis_MBT_01,A3_Aegis_Armor_F_Aegis_MBT_01)
DEPRECATED_PATCH(A3_Armor_F_Aegis_MBT_02,A3_Aegis_Armor_F_Aegis_MBT_02)
DEPRECATED_PATCH(A3_Armor_F_Aegis_MBT_03,A3_Aegis_Armor_F_Aegis_MBT_03)
DEPRECATED_PATCH(A3_Armor_F_Aegis_MBT_04,A3_Aegis_Armor_F_Aegis_MBT_04)
DEPRECATED_PATCH(A3_Boat_F_Aegis,A3_Aegis_Boat_F_Aegis)
DEPRECATED_PATCH(A3_Boat_F_Aegis_Boat_Armed_01,A3_Aegis_Boat_F_Aegis_Boat_Armed_01)
DEPRECATED_PATCH(A3_Boat_F_Aegis_Boat_Civil_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Boat_F_Aegis_Boat_Civil_02,A3_Aegis_Boat_F_Aegis_Boat_Civil_02)
DEPRECATED_PATCH(A3_Boat_F_Aegis_Boat_Civil_03,A3_Aegis_Boat_F_Aegis)
DEPRECATED_PATCH(A3_Boat_F_Aegis_Boat_Transport_01,A3_Aegis_Boat_F_Aegis_Boat_Transport_01)
DEPRECATED_PATCH(A3_Boat_F_Aegis_Boat_Transport_02,A3_Aegis_Boat_F_Aegis_Boat_Transport_02)
DEPRECATED_PATCH(A3_Boat_F_Aegis_Carrier_01,A3_Aegis_Boat_F_Aegis_Carrier_01)
DEPRECATED_PATCH(A3_Boat_F_Aegis_Destroyer_01,A3_Aegis_Boat_F_Aegis_Destroyer_01)
DEPRECATED_PATCH(A3_Boat_F_Aegis_SDV_01,A3_Aegis_Boat_F_Aegis_SDV_01)
DEPRECATED_PATCH(A3_Cargoposes_F_Aegis,A3_Aegis_Cargoposes_F_Aegis)
DEPRECATED_PATCH(A3_Characters_F_Aegis,A3_Aegis_Characters_F_Aegis)
DEPRECATED_PATCH(A3_Characters_F_Aegis_Facewear,A3_Aegis_Characters_F_Aegis_Facewear)
DEPRECATED_PATCH(A3_Characters_F_Aegis_Headgear,A3_Aegis_Characters_F_Aegis_Headgear)
DEPRECATED_PATCH(A3_Characters_F_Aegis_Uniforms,A3_Aegis_Characters_F_Aegis_Uniforms)
DEPRECATED_PATCH(A3_Characters_F_Aegis_Vests,A3_Aegis_Characters_F_Aegis_Vests)
DEPRECATED_PATCH(A3_Data_F_Aegis,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Dubbing_Radio_F_Aegis,A3_Aegis_Dubbing_Radio_F_Aegis)
DEPRECATED_PATCH(A3_EditorPreviews_F_Aegis,A3_Aegis_EditorPreviews_F_Aegis)
DEPRECATED_PATCH(A3_Functions_F_Aegis,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Language_F_Aegis,A3_Aegis_Language_F_Aegis)
DEPRECATED_PATCH(A3_Modules_F_Aegis,A3_Aegis_Modules_F_Aegis)
DEPRECATED_PATCH(A3_Music_F_Aegis,A3_Aegis_Music_F_Aegis)
DEPRECATED_PATCH(A3_Props_F_Aegis,A3_Aegis_Props_F_Aegis)
DEPRECATED_PATCH(A3_Props_F_Aegis_Civ,A3_Aegis_Props_F_Aegis)
DEPRECATED_PATCH(A3_Props_F_Aegis_Civ_Camping,A3_Aegis_Props_F_Aegis)
DEPRECATED_PATCH(A3_Props_F_Aegis_Civilian,A3_Aegis_Props_F_Aegis_Civilian)
DEPRECATED_PATCH(A3_Props_F_Aegis_Civilian_Airport,A3_Aegis_Props_F_Aegis)
DEPRECATED_PATCH(A3_Props_F_Aegis_Civilian_Camps,A3_Aegis_Props_F_Aegis_Civilian_Camps)
DEPRECATED_PATCH(A3_Props_F_Aegis_Electronics,A3_Aegis_Props_F_Aegis_Electronics)
DEPRECATED_PATCH(A3_Props_F_Aegis_Items,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Props_F_Aegis_Items_Electronics,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Props_F_Aegis_Items_Military,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Props_F_Aegis_Military,A3_Aegis_Props_F_Aegis_Military)
DEPRECATED_PATCH(A3_Props_F_Aegis_Military_Cargo,A3_Aegis_Props_F_Aegis)
DEPRECATED_PATCH(A3_Props_F_Aegis_Military_Equipment,A3_Aegis_Props_F_Aegis_Military_Equipment)
DEPRECATED_PATCH(A3_Props_F_Aegis_Military_Supplies,A3_Aegis_Props_F_Aegis)
DEPRECATED_PATCH(A3_Soft_F_Aegis,A3_Aegis_Soft_F_Aegis)
DEPRECATED_PATCH(A3_Soft_F_Aegis_LSV_01,A3_Aegis_Soft_F_Aegis_LSV_01)
DEPRECATED_PATCH(A3_Soft_F_Aegis_LSV_02,A3_Aegis_Soft_F_Aegis_LSV_02)
DEPRECATED_PATCH(A3_Soft_F_Aegis_LSV_03,A3_Aegis_Soft_F_Aegis)
DEPRECATED_PATCH(A3_Soft_F_Aegis_MRAP_01,A3_Aegis_Soft_F_Aegis_MRAP_01)
DEPRECATED_PATCH(A3_Soft_F_Aegis_MRAP_02,A3_Aegis_Soft_F_Aegis_MRAP_02)
DEPRECATED_PATCH(A3_Soft_F_Aegis_MRAP_03,A3_Aegis_Soft_F_Aegis_MRAP_03)
DEPRECATED_PATCH(A3_Soft_F_Aegis_Offroad_01,A3_Aegis_Soft_F_Aegis_Offroad_01)
DEPRECATED_PATCH(A3_Soft_F_Aegis_Offroad_02,A3_Aegis_Soft_F_Aegis_Offroad_02)
DEPRECATED_PATCH(A3_Soft_F_Aegis_Quadbike_01,A3_Aegis_Soft_F_Aegis_Quadbike_01)
DEPRECATED_PATCH(A3_Soft_F_Aegis_SUV_01,A3_Aegis_Soft_F_Aegis_SUV_01)
DEPRECATED_PATCH(A3_Soft_F_Aegis_Tractor_01,A3_Aegis_Soft_F_Aegis)
DEPRECATED_PATCH(A3_Soft_F_Aegis_Truck_01,A3_Aegis_Soft_F_Aegis_Truck_01)
DEPRECATED_PATCH(A3_Soft_F_Aegis_Truck_02,A3_Aegis_Soft_F_Aegis_Truck_02)
DEPRECATED_PATCH(A3_Soft_F_Aegis_Truck_03,A3_Aegis_Soft_F_Aegis)
DEPRECATED_PATCH(A3_Soft_F_Aegis_UGV_01,A3_Aegis_Soft_F_Aegis_UGV_01)
DEPRECATED_PATCH(A3_Soft_F_Aegis_Van_01,A3_Aegis_Soft_F_Aegis_Van_01)
DEPRECATED_PATCH(A3_Soft_F_Aegis_Van_02,A3_Aegis_Soft_F_Aegis_Van_02)
DEPRECATED_PATCH(A3_Sounds_F_Aegis,A3_Aegis_Sounds_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Aegis,A3_Aegis_Static_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Aegis_AA_01,A3_Aegis_Static_F_Aegis_AA_01)
DEPRECATED_PATCH(A3_Static_F_Aegis_AAA_System_01,A3_Aegis_Static_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Aegis_AT_01,A3_Aegis_Static_F_Aegis_AT_01)
DEPRECATED_PATCH(A3_Static_F_Aegis_Designator_01,A3_Aegis_Static_F_Aegis_Designator_01)
DEPRECATED_PATCH(A3_Static_F_Aegis_Designator_02,A3_Aegis_Static_F_Aegis_Designator_02)
DEPRECATED_PATCH(A3_Static_F_Aegis_GMG_01,A3_Aegis_Static_F_Aegis_GMG_01)
DEPRECATED_PATCH(A3_Static_F_Aegis_HMG_01,A3_Aegis_Static_F_Aegis_HMG_01)
DEPRECATED_PATCH(A3_Static_F_Aegis_Mortar_01,A3_Aegis_Static_F_Aegis_Mortar_01)
DEPRECATED_PATCH(A3_Static_F_Aegis_Radar_System_01,A3_Aegis_Static_F_Aegis_Radar_System_01)
DEPRECATED_PATCH(A3_Static_F_Aegis_Radar_System_02,A3_Aegis_Static_F_Aegis_Radar_System_02)
DEPRECATED_PATCH(A3_Static_F_Aegis_SAM_System_01,A3_Aegis_Static_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Aegis_SAM_System_02,A3_Aegis_Static_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Aegis_SAM_System_03,A3_Aegis_Static_F_Aegis_SAM_System_03)
DEPRECATED_PATCH(A3_Static_F_Aegis_SAM_System_04,A3_Aegis_Static_F_Aegis_SAM_System_04)
DEPRECATED_PATCH(A3_Structures_F_Aegis,A3_Aegis_Structures_F_Aegis)
DEPRECATED_PATCH(A3_Structures_F_Aegis_Civ,A3_Aegis_Structures_F_Aegis)
DEPRECATED_PATCH(A3_Structures_F_Aegis_Civ_Camping,A3_Aegis_Structures_F_Aegis)
DEPRECATED_PATCH(A3_Structures_F_Aegis_Mil,A3_Aegis_Structures_F_Aegis)
DEPRECATED_PATCH(A3_Structures_F_Aegis_Mil_BagBunker,A3_Aegis_Structures_F_Aegis)
DEPRECATED_PATCH(A3_Structures_F_Aegis_Military,A3_Aegis_Structures_F_Aegis_Military)
DEPRECATED_PATCH(A3_Structures_F_Aegis_Military_Camonets,A3_Aegis_Structures_F_Aegis_Military_Camonets)
DEPRECATED_PATCH(A3_Structures_F_Aegis_Military_Flags,A3_Aegis_Structures_F_Aegis_Military_Flags)
DEPRECATED_PATCH(A3_Structures_F_Aegis_Military_Fortifications,A3_Aegis_Structures_F_Aegis_Military_Fortifications)
DEPRECATED_PATCH(A3_Structures_F_Aegis_Signs,A3_Aegis_Structures_F_Aegis)
DEPRECATED_PATCH(A3_Structures_F_Aegis_Signs_Warnings,A3_Aegis_Structures_F_Aegis)
DEPRECATED_PATCH(A3_Structures_F_Aegis_Wrecks,A3_Aegis_Structures_F_Aegis_Wrecks)
DEPRECATED_PATCH(A3_Supplies_F_Aegis,A3_Aegis_Supplies_F_Aegis)
DEPRECATED_PATCH(A3_Supplies_F_Aegis_Ammoboxes,A3_Aegis_Supplies_F_Aegis_Ammoboxes)
DEPRECATED_PATCH(A3_Supplies_F_Aegis_Bags,A3_Aegis_Supplies_F_Aegis_Bags)
DEPRECATED_PATCH(A3_Supplies_F_Aegis_CargoNets,A3_Aegis_Supplies_F_Aegis_CargoNets)
DEPRECATED_PATCH(A3_UI_F_Aegis,A3_Aegis_UI_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Ammoboxes,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_EBR,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_GrenadeLaunchers_GL_02,A3_Aegis_Weapons_F_Aegis_GrenadeLaunchers_M32)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_GrenadeLaunchers_GL_03,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_GrenadeLaunchers_M32,A3_Aegis_Weapons_F_Aegis_GrenadeLaunchers_M32)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_GrenadeLaunchers_XM25,A3_Aegis_Weapons_F_Aegis_GrenadeLaunchers_XM25)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Launchers_LAW,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Launchers_Volga,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_LongRangeRifles_DMR_01,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_LongRangeRifles_DMR_02,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_LongRangeRifles_DMR_03,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_LongRangeRifles_DMR_04,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_LongRangeRifles_DMR_05,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_LongRangeRifles_DMR_06,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_LongRangeRifles_DMR_07,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_LongRangeRifles_DMR_08,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_LongRangeRifles_EBR,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_LongRangeRifles_GM6,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_LongRangeRifles_M320,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_LongRangeRifles_WF50,A3_Aegis_Weapons_F_Aegis_LongRangeRifles_WF50)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Pistols_ACPC2,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Pistols_C1911,A3_Aegis_Weapons_F_Aegis_Pistols_C1911)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Pistols_G17,A3_Aegis_Weapons_F_Aegis_Pistols_G17)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Pistols_Glock,A3_Aegis_Weapons_F_Aegis_Pistols_G17)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Pistols_Mk26,A3_Aegis_Weapons_F_Aegis_Pistols_Mk26)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Pistols_P07,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Pistols_P99,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Pistols_Pistol_Heavy_01,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Pistols_Pistol_Heavy_02,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Pistols_Rook40,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_AK12,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_ARX,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_CTAR,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_CTARS,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_Khaybar,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_M4A1,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_M8,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_M8_DMR,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_M8_SAW,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_Mk16,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_Mk16_LMG,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_Mk17,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_Mk17_DMR,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_MK20,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_MX,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_SA80,A3_Aegis_Weapons_F_Aegis_Rifles_SA80)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_SA80_LSW,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_SCAR,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_SDAR,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_SPAR_01,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_SPAR_02,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_SPAR_03,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_TRG20,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Rifles_Vector,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Shotguns_AA40,A3_Aegis_Weapons_F_Aegis_Shotguns_AA40)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Shotguns_KSG,A3_Aegis_Weapons_F_Aegis_Shotguns_KSG)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_Shotguns_M4_SSAS,A3_Aegis_Weapons_F_Aegis_Shotguns_M4_SSAS)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_SMGs_Pdw2000,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_SMGs_SMG_01,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_SMGs_SMG_02,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_SMGs_SMG_03,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_SMGs_SMG_04,A3_Aegis_Weapons_F_Aegis_SMGs_SMG_04)
DEPRECATED_PATCH(A3_Weapons_F_Aegis_SMGs_SMG_05,A3_Aegis_Weapons_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Air_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Air_F_Rus_Heli_Attack_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Air_F_Rus_Heli_Light_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Air_F_Rus_Heli_Transport_04,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Air_F_Rus_Plane_CAS_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Air_F_Rus_Plane_Fighter_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Air_F_Rus_Plane_Transport_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Air_F_Rus_UAV_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Air_F_Rus_UAV_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Air_F_Rus_UAV_06,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Armor_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Armor_F_Rus_APC_Tracked_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Armor_F_Rus_APC_Wheeled_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Armor_F_Rus_MBT_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Armor_F_Rus_MBT_04,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Boat_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Boat_F_Rus_Boat_Armed_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Boat_F_Rus_Boat_Transport_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Boat_F_Rus_Boat_Transport_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Boat_F_Rus_SDV_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Characters_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Characters_F_Rus_Facewear,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Characters_F_Rus_Headgear,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Characters_F_Rus_Uniforms,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Characters_F_Rus_Vests,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Data_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Dubbing_Radio_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_EditorPreviews_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Language_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Music_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Soft_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Soft_F_Rus_LSV_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Soft_F_Rus_MRAP_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Soft_F_Rus_Quadbike_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Soft_F_Rus_Truck_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Soft_F_Rus_Truck_03,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Soft_F_Rus_UGV_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Sounds_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Static_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Static_F_Rus_AA_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Static_F_Rus_AT_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Static_F_Rus_Designator_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Static_F_Rus_GMG_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Static_F_Rus_HMG_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Static_F_Rus_Mortar_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Static_F_Rus_Radar_System_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Static_F_Rus_SAM_System_04,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Structures_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Structures_F_Rus_Humanitarian,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Structures_F_Rus_Humanitarian_Camps,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Structures_F_Rus_Military,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Structures_F_Rus_Military_Flags,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Structures_F_Rus_Signs,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Structures_F_Rus_Signs_Warnings,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Supplies_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Supplies_F_Rus_Ammoboxes,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Supplies_F_Rus_Bags,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Supplies_F_Rus_CargoNets,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_UI_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Weapons_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Weapons_F_Rus_Rifles_AK107,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Weapons_F_Rus_Rifles_RPK,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Weapons_F_Rus_Shotguns_SK12,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Aegis_Weapons_F_Rus_SMGs_PP2000,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Air_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Air_F_Rus_Heli_Attack_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Air_F_Rus_Heli_Light_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Air_F_Rus_Heli_Transport_04,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Air_F_Rus_Plane_CAS_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Air_F_Rus_Plane_Fighter_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Air_F_Rus_Plane_Fighter_03,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Air_F_Rus_UAV_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Air_F_Rus_UAV_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Air_F_Rus_UAV_06,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Armor_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Armor_F_Rus_APC_Tracked_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Armor_F_Rus_APC_Wheeled_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Armor_F_Rus_MBT_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Armor_F_Rus_MBT_04,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Boat_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Boat_F_Rus_Boat_Armed_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Boat_F_Rus_Boat_Transport_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Boat_F_Rus_Boat_Transport_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Boat_F_Rus_SDV_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Characters_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Characters_F_Rus_Headgear,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Characters_F_Rus_Uniforms,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Characters_F_Rus_Vests,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Data_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Dubbing_Radio_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_EditorPreviews_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Language_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Music_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Soft_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Soft_F_Rus_LSV_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Soft_F_Rus_MRAP_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Soft_F_Rus_Quadbike_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Soft_F_Rus_Truck_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Soft_F_Rus_Truck_03,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Soft_F_Rus_UGV_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Sounds_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Rus_AA_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Rus_AAA_System_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Rus_AT_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Rus_Designator_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Rus_GMG_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Rus_HMG_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Rus_Mortar_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Rus_Radar_System_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Rus_SAM_System_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Rus_SAM_System_02,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Static_F_Rus_SAM_System_04,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Structures_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Structures_F_Rus_Humanitarian,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Structures_F_Rus_Humanitarian_Camps,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Structures_F_Rus_Military,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Structures_F_Rus_Military_Flags,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Structures_F_Rus_Signs,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Structures_F_Rus_Signs_Warnings,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Supplies_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Supplies_F_Rus_Ammoboxes,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Supplies_F_Rus_Bags,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Supplies_F_Rus_CargoNets,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_UI_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Rus,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Rus_Acc,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Rus_Launchers_Titan,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Rus_LongRangeRifles_DMR_01,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Rus_LongRangeRifles_DMR_04,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Rus_LongRangeRifles_DMR_05,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Rus_Machineguns_MMG_03,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Rus_Rifles_AK105,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Rus_Rifles_AK107,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Rus_Rifles_AK12,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Rus_Rifles_RPK,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Rus_Shotguns_SK12,A3_Aegis_Data_F_Aegis)
DEPRECATED_PATCH(A3_Weapons_F_Rus_SMGs_SMG_04,A3_Aegis_Data_F_Aegis)
*/