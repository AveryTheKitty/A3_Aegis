class CfgPatches
{
	class A3_Aegis_Boat_F_Aegis_Boat_Transport_01
	{
		addonRootClass = A3_Aegis_Boat_F_Aegis;
		requiredAddons[] = {A3_Aegis_Boat_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            // Russia
            O_R_Boat_Transport_01_ard_F,
            O_R_Boat_Transport_01_F,
            O_R_Lifeboat_ard_F,
            O_R_Lifeboat,

            // NATO (British)
            B_A_Boat_Transport_01_F,
            B_A_Boat_Transport_01_tna_F,
            B_A_Lifeboat,
            B_A_Lifeboat_tna_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};