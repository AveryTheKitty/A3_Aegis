#define GROUP_UNIT(a,b,c,d,e,f) \
	class Unit##a## \
	{ \
		side = ##b##; \
		vehicle = ##c##; \
		rank = ##d##; \
		position[] = {##e##,##f##,0}; \
	};

class CfgGroups
{
	class East
	{
		name = $STR_A3_CfgGroups_East0;
		side = TEast;
		class OPF_P_F
		{
		  	name = $STR_A3_O_CfgFactionClasses_OPF_P_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class O_P_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = OPF_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_P_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_P_soldier_1_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,O_P_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_P_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,O_P_soldier_GL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TEast,O_P_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TEast,O_P_soldier_exp_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,O_P_medic_F,PRIVATE,20,-20)
				};
				class O_P_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = OPF_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_P_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_P_soldier_AR_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,O_P_soldier_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_P_soldier_LAT_F,PRIVATE,10,-10)
				};
				class O_P_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = OPF_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(2,TEast,O_P_soldier_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_P_soldier_1_F,PRIVATE,10,-10)
				};
            };
			/*
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP0;
				class O_P_MotInf_Team
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_MotInfTeam0;
					side = TEast;
					faction = OPF_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_P_Offroad_01_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,O_P_Soldier_2_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,O_P_Soldier_4_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_P_Soldier_5_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TEast,O_P_Soldier_3_F,CORPORAL,-10,-10)
					GROUP_UNIT(5,TEast,O_P_Soldier_1_F,CORPORAL,15,-15)
				};
				class O_P_Technicals
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0;
					side = TEast;
					faction = OPF_P_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_P_Offroad_01_armed_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,O_P_Offroad_01_armed_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TEast,O_P_Offroad_01_armed_F,CORPORAL,-10,-10)
				};
			};
			*/
		};
		class OPF_E_F
		{
		  	name = $STR_A3_O_CfgFactionClasses_OPF_E_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class SeparatistFireTeam
				{
					name = "Separatist Fire Team";
					side = TEast;
					faction = OPF_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_E_Soldier_2_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_E_Soldier_4_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,O_E_Soldier_1_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_E_Soldier_3_F,PRIVATE,10,-10)
				};
				class SeparatistShockTeam
				{
					name = "Separatist Shock Team";
					side = TEast;
					faction = OPF_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_E_Soldier_6_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_E_Soldier_5_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,O_E_Soldier_7_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_E_Soldier_8_F,PRIVATE,10,-10)
				};
				class SeparatistCombatGroup
				{
					name = "Separatist Combat Group";
					side = TEast;
					faction = OPF_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_E_Soldier_2_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_E_Soldier_4_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,O_E_Soldier_6_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_E_Soldier_1_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,O_E_Soldier_7_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TEast,O_E_Soldier_5_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TEast,O_E_Soldier_8_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,O_E_Soldier_3_F,PRIVATE,20,-20)
				};
            };
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP0;
				class O_E_MotInf_Team
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_MotInfTeam0;
					side = TEast;
					faction = OPF_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_E_Offroad_01_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,O_E_Soldier_2_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,O_E_Soldier_4_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_E_Soldier_5_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TEast,O_E_Soldier_3_F,CORPORAL,-10,-10)
					GROUP_UNIT(5,TEast,O_E_Soldier_1_F,CORPORAL,15,-15)
				};
				class O_E_Technicals
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0;
					side = TEast;
					faction = OPF_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_E_Offroad_01_armed_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,O_E_Offroad_01_armed_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TEast,O_E_Offroad_01_armed_F,CORPORAL,-10,-10)
				};
			};
		};
    };
	class Indep
	{
		name = $STR_A3_CfgGroups_Indep0;
		side = TGuerrila;
		/*
		class IND_R_F
		{
			name = $STR_A3_O_CfgFactionClasses_IND_R_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class I_R_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TGuerrila;
					faction = IND_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_R_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_R_soldier_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TGuerrila,I_R_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_R_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TGuerrila,I_R_soldier_GL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TGuerrila,I_R_soldier_MG_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TGuerrila,I_R_engineer_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TGuerrila,I_R_medic_F,PRIVATE,20,-20)
				};
				class I_R_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TGuerrila;
					faction = IND_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_R_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_R_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_R_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_R_soldier_LAT_F,PRIVATE,10,-10)
				};
				class I_R_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TGuerrila;
					faction = IND_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_R_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TGuerrila,I_R_soldier_F,PRIVATE,5,-5)
				};
			};
		};
		*/
		class IND_T_F
		{
		  	name = $STR_A3_O_CfgFactionClasses_IND_T_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class InsurgentFireTeam
				{
					name = "Insurgent Fire Team";
					side = TGuerrila;
					faction = IND_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_T_Soldier_2_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_T_Soldier_4_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TGuerrila,I_T_Soldier_1_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_T_Soldier_3_F,PRIVATE,10,-10)
				};
				class InsurgentShockTeam
				{
					name = "Insurgent Shock Team";
					side = TGuerrila;
					faction = IND_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_T_Soldier_6_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_T_Soldier_5_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TGuerrila,I_T_Soldier_7_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_T_Soldier_8_F,PRIVATE,10,-10)
				};
				class InsurgentCombatGroup
				{
					name = "Insurgent Combat Group";
					side = TGuerrila;
					faction = IND_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_T_Soldier_2_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_T_Soldier_4_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TGuerrila,I_T_Soldier_6_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_T_Soldier_1_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TGuerrila,I_T_Soldier_7_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TGuerrila,I_T_Soldier_5_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TGuerrila,I_T_Soldier_8_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TGuerrila,I_T_Soldier_3_F,PRIVATE,20,-20)
				};
            };
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP0;
				class I_T_MotInf_Team
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_MotInfTeam0;
					side = TGuerrila;
					faction = IND_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_T_Offroad_01_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_T_Soldier_2_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,I_T_Soldier_4_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_T_Soldier_5_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TGuerrila,I_T_Soldier_3_F,CORPORAL,-10,-10)
					GROUP_UNIT(5,TGuerrila,I_T_Soldier_1_F,CORPORAL,15,-15)
				};
				class I_T_Technicals
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0;
					side = TGuerrila;
					faction = IND_T_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_T_Offroad_01_armed_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_T_Offroad_01_armed_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TGuerrila,I_T_Offroad_01_armed_F,CORPORAL,-10,-10)
				};
			};
		};
    };
};