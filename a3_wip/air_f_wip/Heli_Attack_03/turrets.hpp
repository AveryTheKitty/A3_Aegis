class Turrets: Turrets
{
	class MainTurret: MainTurret
	{
		turretInfoType = RscUnitInfo_AH64D_gunner;
		commanding = -1;
		isCopilot = false;
		CanEject = false;
		startEngine = false;
		primaryGunner = true;
        // Roration and elevation
		minElev = -60;
		maxElev = 15;
		initElev = 5;
		minTurn = -120;
		maxTurn = 120;
		initTurn = 0;
		maxHorizontalRotSpeed = 1.8;
		maxVerticalRotSpeed = 1.5;
        // Optics
		discreteDistance[] =
        {
            100,
            200,
            300,
            400,
            500,
            600,
            700,
            800,
            1000,
            1200,
            1500,
            1800,
            2100,
            2500
        };
		discreteDistanceInitIndex = 5;
		gunnerOpticsModel = "";
		gunnerOpticsEffect[] =
        {
            TankCommanderOptics1,
            BWTV
        };
		memoryPointGunnerOptics = gunnerview;
		gunnerForceOptics = false;
		class OpticsIn
		{
			class Wide
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.466;
				minFov = 0.466;
				maxFov = 0.466;
				opticsDisplayName = "WFOV";
				visionMode[] =
                {
                    Normal,
                    NVG,
                    Ti
                };
				thermalMode[] =
                {
                    TiGWHot,
                    TiGBHot
                };
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
			};
			class Medium: Wide
			{
				initFov = 0.093;
				minFov = 0.093;
				maxFov = 0.093;
				opticsDisplayName = "MFOV";
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
			};
			class Narrow: Wide
			{
				initFov = 0.029;
				minFov = 0.029;
				maxFov = 0.029;
				opticsDisplayName = "NFOV";
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
			};
		};
		class OpticsOut
		{
			class Monocular
			{
				initFov = 0.9;
				minFov = 0.25;
				maxFov = 1.25;
				initAngleX = 0;
				initAngleY = 0;
				minAngleX = -65;
				maxAngleX = 85;
				minAngleY = -150;
				maxAngleY = 150;
				minMoveX = -0.2;
				maxMoveX = 0.2;
				minMoveY = -0.1;
				maxMoveY = 0.1;
				minMoveZ = -0.1;
				maxMoveZ = 0.2;
				visionMode[] =
                {
                    Normal,
                    NVG
                };
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {};
			};
		};
		// Sensors and electronics
		showAllTargets = LockLaser;
        class Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = EmptyDisplayComponent;
					};
					class MinimapDisplay
					{
						componentType = MinimapDisplayComponent;
						resource = RscCustomInfoAirborneMiniMap;
					};
					class CrewDisplay
					{
						componentType = CrewDisplayComponent;
						resource = RscCustomInfoCrew;
					};
					class UAVDisplay
					{
						componentType = UAVFeedDisplayComponent;
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = TransportFeedDisplayComponent;
						source = PrimaryGunner;
					};
					class VehicleMissileDisplay
					{
						componentType = TransportFeedDisplayComponent;
						source = Missile;
					};
					class SensorDisplay
					{
						componentType = SensorsDisplayComponent;
						range[] =
                        {
                            4000,
                            2000,
                            16000,
                            8000
                        };
						resource = RscCustomInfoSensors;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = SensorDisplay;
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = EmptyDisplayComponent;
					};
					class MinimapDisplay
					{
						componentType = MinimapDisplayComponent;
						resource = RscCustomInfoAirborneMiniMap;
					};
					class CrewDisplay
					{
						componentType = CrewDisplayComponent;
						resource = RscCustomInfoCrew;
					};
					class UAVDisplay
					{
						componentType = UAVFeedDisplayComponent;
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = TransportFeedDisplayComponent;
						source = PrimaryGunner;
					};
					class VehicleMissileDisplay
					{
						componentType = TransportFeedDisplayComponent;
						source = Missile;
					};
					class SensorDisplay
					{
						componentType = SensorsDisplayComponent;
						range[] =
                        {
                            4000,
                            2000,
                            16000,
                            8000
                        };
						resource = RscCustomInfoSensors;
					};
				};
			};
		};
        #include "mfdGunner.hpp"
        // Weapons and magazines
		weapons[] = {cannon_30mm_Heli_Attack_03};
		magazines[] = {1200Rnd_30mm_MP_shells_Tracer_Yellow};
		soundServo[] = {"\A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",db-5,1.0,30};
		soundServoVertical[] = {"\A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",db-5,1.0,30};
		stabilizedInAxes = StabilizedInAxesBoth;
		selectionFireAnim = zasleh;
		memoryPointGun = machinegun;
		gunBeg = "usti hlavne";
		gunEnd = "konec hlavne";
        // Interior and animations
		memoryPointsGetInGunner = "Pos_Gunner";
		memoryPointsGetInGunnerDir = "Pos_Gunner_Dir";
		gunnerLeftHandAnimName = "";
		gunnerRightHandAnimName = "";
		gunnerLeftLegAnimName = "";
		gunnerRightLegAnimName = "";
		castGunnerShadow = true;
		viewGunnerShadow = true;
		outGunnerMayFire = true;
		gunnerAction = Heli_Attack_03_Gunner;
		gunnerInAction = Heli_Attack_03_Gunner;
		gunnerGetInAction = GetInHigh;
		gunnerGetOutAction = GetOutHigh;
		preciseGetInOut = true;
        // Damage and hitpoints
		class HitPoints
		{
			class HitTurret
			{
				armor = 1;
				material = -1;
				name = main_turret_hit;
				visual = main_trav;
				passThrough = 0.3;
				radius = 0.2;
			};
			class HitGun
			{
				armor = 1;
				material = -1;
				name = main_gun_hit;
				visual = main_elev;
				passThrough = 0.3;
				radius = 0.2;
			};
		};
	};
};