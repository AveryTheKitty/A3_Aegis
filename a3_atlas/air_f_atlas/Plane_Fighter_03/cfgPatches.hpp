class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_Plane_Fighter_03
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] = {A3_Atlas_Air_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // NATO (European)
            B_E_Ejection_Seat_Plane_Fighter_03_F,
            B_E_Plane_Fighter_03_dynamicLoadout_F,

            // CSAT (Caspian)
            O_C_Ejection_Seat_Plane_Fighter_03_F,
            O_C_Plane_Fighter_03_dynamicLoadout_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};
