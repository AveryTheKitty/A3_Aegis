﻿class CfgPatches
{
	class A3_Atlas_Armor_F_Atlas_APC_Tracked_02
	{
		addonRootClass = A3_Atlas_Armor_F_Atlas;
		requiredAddons[] = {A3_Atlas_Armor_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // CSAT (Woodland)
            O_W_APC_Tracked_02_cannon_ghex_F,

            // CDF
            I_W_APC_Tracked_02_cannon_F,
            I_W_APC_Tracked_02_AA_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};