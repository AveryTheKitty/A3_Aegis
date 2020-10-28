#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
#include "\A3_Aegis\ASDG.hpp"
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot_Rail;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class sgun_KSG_F: Rifle_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = sgun_KSG_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_sgun_KSG_F0;
		model = "\A3_Aegis\Weapons_F_Aegis\Shotguns\KSG\KSG_F.p3d";
		magazines[] =
		{
			8Rnd_12Gauge_Pellets,
			8Rnd_12Gauge_Slug
		};
		magazineWell[] = {Shotgun_12GA};
		maxZeroing = 100;
		reloadAction = GestureReloadM4SSAS;
		recoil = recoil_ksg;
		cursor = sgun;
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F\Machineguns\M200\Data\Anim\M200.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] =
				{
					0.34, // X
					0.32 // Y
				};
				iconScale = 0.2;
			};
			class PointerSlot{};
			mass = 90;
		};
		htMin = 16;
		htMax = 550;
		inertia = 0.5;
		aimTransitionSpeed = 1.2;
		dexterity = 1.5;
		initSpeed = 375;
		picture = "\A3_Aegis\Weapons_F_Aegis\Shotguns\KSG\Data\UI\icon_sgun_KSG_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		descriptionShort = $STR_A3_A_CfgWeapons_sgun_KSG_F1;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Shotguns\KSG\Data\KSG_CO.paa"};
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_sgun_KSG_F_Library0;
		};
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modes[] = {Single};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			textureType = left;
			dispersion = 0.00131;
			reloadTime = 0.8;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.2;
		};
		class Secondary: Rifle_Base_F
		{
			displayName = $STR_A3_A_CfgWeapons_sgun_KSG_F0;
			model = "\A3_Aegis\Weapons_F_Aegis\Shotguns\KSG\KSG_F.p3d";
			magazines[] =
			{
				8Rnd_12Gauge_Slug,
				8Rnd_12Gauge_Pellets
			};
			magazineWell[] = {Shotgun_12GA};
			maxZeroing = 100;
			reloadAction = GestureReloadM4SSAS;
			recoil = recoil_ksg;
			cursor = sgun;
			htMin = 16;
			htMax = 550;
			initSpeed = 375;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			modes[] = {Single};
			class Single: Mode_SemiAuto
			{
				sounds[] = {StandardSound};
				textureType = right;
				dispersion = 0.00131;
				reloadTime = 0.8;
				minRange = 1;
				minRangeProbab = 0.5;
				midRange = 50;
				midRangeProbab = 0.7;
				maxRange = 100;
				maxRangeProbab = 0.2;
			};
		};
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 4;
		muzzles[] =
		{
			this,
			Secondary
		};
	};
	#include "presets.hpp"
};