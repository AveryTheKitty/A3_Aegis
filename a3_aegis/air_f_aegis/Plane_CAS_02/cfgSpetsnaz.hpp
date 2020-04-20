class O_R_Ejection_Seat_Plane_CAS_02_F: Ejection_Seat_Plane_CAS_02_base_F
{
	class SimpleObject
	{
		eden = false;
		animate[] = {};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.002;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Fighter_Pilot_F;
};
class O_R_Plane_CAS_02_dynamicLoadout_F: Plane_CAS_02_dynamicLoadout_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Plane_CAS_02_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_O_Plane_02_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Fighter_Pilot_F;
	typicalCargo[] = {O_R_Fighter_Pilot_F};
	availableForSupportTypes[] = {CAS_Bombing};
	textureList[] = {Blue,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_blue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_blue_CO.paa"
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_R_Ejection_Seat_Plane_CAS_02_F;
	};
};