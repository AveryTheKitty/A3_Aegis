class U_O_R_CombatUniform_tshirt_taiga_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = "Fatigues (Taiga, Tee) [Russia]";
	//picture = "\A3_Opf\Characters_F_Opf\Uniforms\Data\UI\icon_U_O_R_CombatUniform_tshirt_taiga_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_R_Fatigues_01_Tshirt_taiga_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class U_O_R_CombatUniform_tshirt_arid_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = "Fatigues (Arid, Tee) [Russia]";
	//picture = "\A3_Opf\Characters_F_Opf\Uniforms\Data\UI\icon_U_O_R_CombatUniform_tshirt_arid_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_R_Fatigues_01_Tshirt_arid_F;
		containerClass = Supply40;
		mass = 60;
	};
};