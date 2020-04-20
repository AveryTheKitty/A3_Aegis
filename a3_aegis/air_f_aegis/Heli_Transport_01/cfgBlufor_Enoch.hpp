class B_W_Heli_Transport_01_F: B_Heli_Transport_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Heli_Transport_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Helipilot_F;
	typicalCargo[] = {B_W_Soldier_Lite_F};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class MainTurret: MainTurret
		{
		    gunnerType = B_W_Helicrew_F;
		};
		class RightDoorGun: RightDoorGun
		{
		    gunnerType = B_W_Helicrew_F;
		};
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
};
class B_W_Heli_Transport_01_medevac_F: B_Heli_Transport_01_medevac_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Heli_Transport_01_medevac_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Helipilot_F;
	typicalCargo[] = {B_W_Soldier_Lite_F};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class MainTurret: MainTurret
		{
		    gunnerType = B_W_Helicrew_F;
		};
		class RightDoorGun: RightDoorGun
		{
		    gunnerType = B_W_Helicrew_F;
		};
	};
};