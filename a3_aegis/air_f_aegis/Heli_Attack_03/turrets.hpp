class Turrets: Turrets
{
	class MainTurret: MainTurret
	{
		turretInfoType = RscOptics_Heli_Attack_01_gunner;
		commanding = -1;
		isCopilot = true;
		CanEject = false;
		startEngine = false;
		primaryGunner = true;
        // Roration and elevation
		minElev = -60;
		maxElev = 10;
		initElev = 0;
		minTurn = -90;
		maxTurn = 90;
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
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\optics_empty.p3d";
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
				minAngleX = -60;
				maxAngleX = 15;
				initAngleY = 10;
				minAngleY = -90;
				maxAngleY = 90;
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
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
			};
			class Medium: Wide
			{
				initFov = 0.093;
				minFov = 0.093;
				maxFov = 0.093;
				opticsDisplayName = "MFOV";
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F.p3d";
			};
			class Narrow: Wide
			{
				initFov = 0.029;
				minFov = 0.029;
				maxFov = 0.029;
				opticsDisplayName = "NFOV";
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F.p3d";
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
        // MFD
        #include "mfdGunner.hpp"
        // Weapons and magazines
		weapons[] =
        {
            autocannon_30mm_Heli_Attack_03,
            Laserdesignator_mounted
        };
		magazines[] =
        {
            600Rnd_30mm_HE_shells_Tracer_Yellow,
            600Rnd_30mm_APDS_shells_Tracer_Yellow,
            Laserbatteries
        };
		soundServo[] = {"\A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",db-5,1,30};
		soundServoVertical[] = {"\A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",db-5,1,30};
		stabilizedInAxes = StabilizedInAxesBoth;
		selectionFireAnim = zasleh;
		memoryPointGun = machinegun;
		gunBeg = "usti hlavne";
		gunEnd = "konec hlavne";
        // Interior and animations
		memoryPointsGetInGunner = "pos gunner";
		memoryPointsGetInGunnerDir = "pos gunner dir";
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
		preciseGetInOut = false;
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