class U_I_I_Uniform_01_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_I_Uniform_01_F0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_I_I_Uniform_01_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Soldier_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_I_Uniform_01_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_I_I_Uniform_01_shortsleeve_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_I_Uniform_01_shortsleeve_F0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_I_I_Uniform_01_shortsleeve_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Soldier_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_I_Uniform_01_shortsleeve_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_I_I_Uniform_01_officer_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_I_Uniform_01_officer_F0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_I_I_Uniform_01_officer_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Officer_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_I_Uniform_01_officer_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_Tank_olive_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_Tank_olive_F0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_Tank_olive_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] =
    {
        camo,
        insignia
    };
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Tank_olive_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_I_Uniform_01_tank_F;
		containerClass = Supply30;
		mass = 30;
	};
};
class U_I_I_CBRN_Suit_01_Olive_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_I_CBRN_Suit_01_Olive_F0;
	//picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_I_I_CBRN_Suit_01_Olive_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\CBRN_Suit_01_Olive_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_I_CBRN_Man_Oversuit_01_Olive_F;
		containerClass = Supply30;
		mass = 45;
	};
};