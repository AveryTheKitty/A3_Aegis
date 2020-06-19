class O_R_UGV_02_Demining_F: UGV_02_Demining_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_UGV_02_Demining_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_UGV_02_Demining_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_UAV_AI;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {O_R_UGV_02_Demining_backpack_F};
	};
};
class O_R_UGV_02_Science_F: UGV_02_Science_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_UGV_02_Science_F.jpg";
	scope = protected;
	scopeCurator = private;
	displayName = $STR_A3_A_CfgVehicles_O_R_UGV_02_Science_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_UAV_AI;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {O_R_UGV_02_Science_backpack_F};
	};
};
class O_R_UGV_02_Demining_backpack_F: UGV_02_Demining_backpack_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_UGV_02_Demining_backpack_F0;
	faction = OPF_R_F;
	picture = "\A3\Supplies_F_Enoch\Bags\Data\UI\icon_O_UGV_02_demining_CA.paa";
	class assembleInfo: assembleInfo
	{
		displayName = $STR_A3_A_CfgVehicles_O_R_UGV_02_Demining_backpack_F_assembleInfo0;
		assembleTo = O_R_UGV_02_Demining_F;
	};
};
class O_R_UGV_02_Science_backpack_F: UGV_02_Science_backpack_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	scopeCurator = private;
	displayName = $STR_A3_A_CfgVehicles_O_R_UGV_02_Science_backpack_F0;
	faction = OPF_R_F;
	picture = "\A3\Supplies_F_Enoch\Bags\Data\UI\icon_O_UGV_02_science_CA.paa";
	class assembleInfo: assembleInfo
	{
		displayName = $STR_A3_A_CfgVehicles_O_R_UGV_02_Science_backpack_F_assembleInfo0;
		assembleTo = O_R_UGV_02_Science_F;
	};
};