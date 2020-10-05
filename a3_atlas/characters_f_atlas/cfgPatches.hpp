class CfgPatches
{
	class A3_Atlas_Characters_F_Atlas
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Atlas - Characters and Clothing";
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=2225873516";
		requiredAddons[] =
		{
			A3_Aegis_Characters_F_Aegis,
			A3_Atlas_Data_F_Atlas,
			A3_Characters_F_Enoch,
			A3_Characters_F_Heads,
			A3_Characters_F_Orange,
			A3_Characters_F_Tacops
		};
		requiredVersion = 0.1;
		units[] =
        {
            // Civilians
            C_man_1_persian_F,
            C_Man_2_persian_F,
            C_Man_3_persian_F,
            C_Man_4_persian_F,
            C_Man_5_persian_F,
            C_Man_6_persian_F,
            C_Man_7_persian_F,
            C_Man_8_persian_F,
            C_Man_9_persian_F,

            // Belarus
            Atlas_O_W_Crew_F,
            Atlas_O_W_Engineer_F,
            Atlas_O_W_Fighter_Pilot_F,
            Atlas_O_W_Helicrew_F,
            Atlas_O_W_Helipilot_F,
            Atlas_O_W_Medic_F,
            Atlas_O_W_Officer_F,
            Atlas_O_W_RadioOperator_F,
            Atlas_O_W_Soldier_AAA_F,
            Atlas_O_W_Soldier_AAR_F,
            Atlas_O_W_Soldier_AAT_F,
            Atlas_O_W_Soldier_AA_F,
            Atlas_O_W_Soldier_AHAT_F,
            Atlas_O_W_Soldier_AR_F,
            Atlas_O_W_Soldier_AT_F,
            Atlas_O_W_Soldier_A_F,
            Atlas_O_W_Soldier_Exp_F,
            Atlas_O_W_Soldier_F,
            Atlas_O_W_Soldier_GL_F,
            Atlas_O_W_Soldier_HAT_F,
            Atlas_O_W_Soldier_LAT_F,
            Atlas_O_W_Soldier_Lite_F,
            Atlas_O_W_soldier_mine_F,
            Atlas_O_W_soldier_M_F,
            Atlas_O_W_Soldier_Repair_F,
            Atlas_O_W_Soldier_SL_F,
            Atlas_O_W_Soldier_TL_F,
            Atlas_O_W_soldier_UAV_06_F,
            Atlas_O_W_soldier_UAV_06_medical_F,
            Atlas_O_W_Soldier_UAV_F,
            Atlas_O_W_soldier_UGV_02_Demining_F,
            Atlas_O_W_Soldier_unarmed_F,
            Atlas_O_W_Support_AMG_F,
            Atlas_O_W_Support_AMort_F,
            Atlas_O_W_Support_GMG_F,
            Atlas_O_W_Support_MG_F,
            Atlas_O_W_Support_Mort_F,
            Atlas_O_W_Survivor_F,
            
            // Legionnaires
            Atlas_B_L_Engineer_F,
            Atlas_B_L_Helicrew_F,
            Atlas_B_L_Helipilot_F,
            Atlas_B_L_Medic_F,
            Atlas_B_L_Officer_F,
            Atlas_B_L_RadioOperator_F,
            Atlas_B_L_Soldier_AAA_F,
            Atlas_B_L_Soldier_AAR_F,
            Atlas_B_L_Soldier_AAT_F,
            Atlas_B_L_Soldier_AA_F,
            Atlas_B_L_Soldier_AR_F,
            Atlas_B_L_Soldier_AT_F,
            Atlas_B_L_Soldier_A_F,
            Atlas_B_L_Soldier_CQ_F,
            Atlas_B_L_Soldier_Exp_F,
            Atlas_B_L_Soldier_F,
            Atlas_B_L_Soldier_GL_F,
            Atlas_B_L_Soldier_LAT_F,
            Atlas_B_L_Soldier_Lite_F,
            Atlas_B_L_soldier_mine_F,
            Atlas_B_L_soldier_M_F,
            Atlas_B_L_Soldier_Repair_F,
            Atlas_B_L_Soldier_SL_F,
            Atlas_B_L_Soldier_TL_F,
            Atlas_B_L_Soldier_UAV_F,
            Atlas_B_L_Soldier_unarmed_F,
            Atlas_B_L_Support_AMG_F,
            Atlas_B_L_Support_AMort_F,
            Atlas_B_L_Support_GMG_F,
            Atlas_B_L_Support_MG_F,
            Atlas_B_L_Support_Mort_F,
            Atlas_B_L_Survivor_F,

            // Germany
            Atlas_B_G_Crew_F,
            Atlas_B_G_Engineer_F,
            Atlas_B_G_Fighter_Pilot_F,
            Atlas_B_G_HeavyGunner_F,
            Atlas_B_G_Helicrew_F,
            Atlas_B_G_Helipilot_F,
            Atlas_B_G_Medic_F,
            Atlas_B_G_Officer_F,
            Atlas_B_G_Pilot_F,
            Atlas_B_G_RadioOperator_F,
            Atlas_B_G_Recon_AR_F,
            Atlas_B_G_Recon_Exp_F,
            Atlas_B_G_Recon_F,
            Atlas_B_G_Recon_GL_F,
            Atlas_B_G_Recon_JTAC_F,
            Atlas_B_G_Recon_LAT_F,
            Atlas_B_G_Recon_Medic_F,
            Atlas_B_G_Recon_MG_F,
            Atlas_B_G_Recon_M_F,
            Atlas_B_G_Recon_TL_F,
            Atlas_B_G_Soldier_AAA_F,
            Atlas_B_G_Soldier_AAR_F,
            Atlas_B_G_Soldier_AAT_F,
            Atlas_B_G_Soldier_AA_F,
            Atlas_B_G_Soldier_AR_F,
            Atlas_B_G_Soldier_AT_F,
            Atlas_B_G_Soldier_A_F,
            Atlas_B_G_Soldier_CBRN_F,
            Atlas_B_G_Soldier_CQ_F,
            Atlas_B_G_Soldier_Exp_F,
            Atlas_B_G_Soldier_F,
            Atlas_B_G_Soldier_GL_F,
            Atlas_B_G_Soldier_LAT_F,
            Atlas_B_G_Soldier_Lite_F,
            Atlas_B_G_soldier_mine_F,
            Atlas_B_G_soldier_M_F,
            Atlas_B_G_Soldier_PG_F,
            Atlas_B_G_Soldier_Repair_F,
            Atlas_B_G_Soldier_SL_F,
            Atlas_B_G_Soldier_TL_F,
            Atlas_B_G_soldier_UAV_06_F,
            Atlas_B_G_soldier_UAV_06_medical_F,
            Atlas_B_G_Soldier_UAV_F,
            Atlas_B_G_soldier_UGV_02_Demining_F,
            Atlas_B_G_Soldier_unarmed_F,
            Atlas_B_G_Support_AMG_F,
            Atlas_B_G_Support_AMort_F,
            Atlas_B_G_Support_GMG_F,
            Atlas_B_G_Support_MG_F,
            Atlas_B_G_Support_Mort_F,
            Atlas_B_G_Survivor_F,

            // Takistani Army
            Atlas_O_T_crew_F,
            Atlas_O_T_engineer_F,
            Atlas_O_T_Fighter_Pilot_F,
            Atlas_O_T_helicrew_F,
            Atlas_O_T_helipilot_F,
            Atlas_O_T_medic_F,
            Atlas_O_T_officer_F,
            Atlas_O_T_RadioOperator_F,
            Atlas_O_T_soldier_AA_F,
            Atlas_O_T_soldier_AR_F,
            Atlas_O_T_soldier_AT_F,
            Atlas_O_T_soldier_A_F,
            Atlas_O_T_soldier_F,
            Atlas_O_T_soldier_GL_F,
            Atlas_O_T_soldier_LAT_F,
            Atlas_O_T_soldier_M_F,
            Atlas_O_T_soldier_SL_F,
            Atlas_O_T_soldier_TL_F,

            // HIMF
            Atlas_B_H_Crew_F,
            Atlas_B_H_Engineer_F,
            Atlas_B_H_Helicrew_F,
            Atlas_B_H_Helipilot_F,
            Atlas_B_H_Medic_F,
            Atlas_B_H_Officer_F,
            Atlas_B_H_RadioOperator_F,
            Atlas_B_H_Soldier_AR_F,
            Atlas_B_H_Soldier_A_F,
            Atlas_B_H_Soldier_F,
            Atlas_B_H_Soldier_GL_F,
            Atlas_B_H_Soldier_LAT_F,
            Atlas_B_H_soldier_M_F,
            Atlas_B_H_Soldier_SL_F,
            Atlas_B_H_Soldier_TL_F,
            Atlas_B_H_Soldier_unarmed_F,

            // IDF
            Atlas_I_I_crew_F,
            Atlas_I_I_diver_exp_F,
            Atlas_I_I_diver_F,
            Atlas_I_I_diver_TL_F,
            Atlas_I_I_engineer_F,
            Atlas_I_I_Fighter_Pilot_F,
            Atlas_I_I_helicrew_F,
            Atlas_I_I_helipilot_F,
            Atlas_I_I_medic_F,
            Atlas_I_I_officer_F,
            Atlas_I_I_pilot_F,
            Atlas_I_I_RadioOperator_F,
            Atlas_I_I_recon_AR_F,
            Atlas_I_I_recon_exp_F,
            Atlas_I_I_recon_F,
            Atlas_I_I_recon_GL_F,
            Atlas_I_I_recon_JTAC_F,
            Atlas_I_I_recon_LAT_F,
            Atlas_I_I_recon_medic_F,
            Atlas_I_I_recon_M_F,
            Atlas_I_I_recon_TL_F,
            Atlas_I_I_sniper_F,
            Atlas_I_I_soldier_AAA_F,
            Atlas_I_I_soldier_AAR_F,
            Atlas_I_I_soldier_AAT_F,
            Atlas_I_I_soldier_AA_F,
            Atlas_I_I_Soldier_AR_F,
            Atlas_I_I_soldier_AT_F,
            Atlas_I_I_Soldier_A_F,
            Atlas_I_I_Soldier_CBRN_F,
            Atlas_I_I_Soldier_CQ_F,
            Atlas_I_I_soldier_exp_F,
            Atlas_I_I_Soldier_F,
            Atlas_I_I_Soldier_GL_F,
            Atlas_I_I_Soldier_LAT_F,
            Atlas_I_I_Soldier_lite_F,
            Atlas_I_I_soldier_mine_F,
            Atlas_I_I_soldier_M_F,
            Atlas_I_I_Soldier_repair_F,
            Atlas_I_I_Soldier_SL_F,
            Atlas_I_I_Soldier_TL_F,
            Atlas_I_I_soldier_UAV_06_F,
            Atlas_I_I_soldier_UAV_06_medical_F,
            Atlas_I_I_Soldier_UAV_F,
            Atlas_I_I_soldier_UGV_02_Demining_F,
            Atlas_I_I_Soldier_unarmed_F,
            Atlas_I_I_spotter_F,
            Atlas_I_I_support_AMG_F,
            Atlas_I_I_support_AMort_F,
            Atlas_I_I_support_GMG_F,
            Atlas_I_I_support_MG_F,
            Atlas_I_I_support_Mort_F,
            Atlas_I_I_Survivor_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};