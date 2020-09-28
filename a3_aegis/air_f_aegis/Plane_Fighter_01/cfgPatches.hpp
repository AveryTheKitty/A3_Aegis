class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Plane_Fighter_01
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] = {A3_Aegis_Air_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            // US (Pacific)
            B_T_Ejection_Seat_Plane_Fighter_01_F,
            B_T_Plane_Fighter_01_F,
            B_T_Plane_Fighter_01_Stealth_F,

            // US (Woodland)
            B_W_Plane_Fighter_01_F,
            B_W_Plane_Fighter_01_Stealth_F,
            B_W_Ejection_Seat_Plane_Fighter_01_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};