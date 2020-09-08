class B_L_LSV_01_armed_F: LSV_01_armed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_LSV_01_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_L_F;
	crew = B_L_Soldier_F;
	typicalCargo[] = {B_L_Soldier_F};
	textureList[] =
	{
		Black,0,
		Olive,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
		mag_xx(200Rnd_556x45_Box_Red_F,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(11Rnd_45ACP_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_black_F,2);
	};
};
class B_L_LSV_01_AT_F: LSV_01_AT_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_LSV_01_AT_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_L_F;
	crew = B_L_Soldier_F;
	typicalCargo[] = {B_L_Soldier_F};
	textureList[] =
	{
		Black,0,
		Olive,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
        "\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
        "\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
		mag_xx(200Rnd_556x45_Box_Red_F,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(11Rnd_45ACP_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_black_F,2);
	};
	class TextureSources: TextureSources
	{
		class Olive: Olive
		{
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
            };
		};
	};
};
class B_L_LSV_01_unarmed_F: LSV_01_unarmed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_LSV_01_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_L_F;
	crew = B_L_Soldier_F;
	typicalCargo[] = {B_L_Soldier_F};
	textureList[] =
	{
		Black,0,
		Olive,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
		mag_xx(200Rnd_556x45_Box_Red_F,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(11Rnd_45ACP_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_black_F,2);
	};
};
class B_L_LSV_01_light_F: LSV_01_light_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_LSV_01_light_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_L_F;
	crew = B_L_Soldier_F;
	typicalCargo[] = {B_L_Soldier_F};
	textureList[] =
	{
		Black,0,
		Olive,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
		mag_xx(200Rnd_556x45_Box_Red_F,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(11Rnd_45ACP_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_black_F,2);
	};
};