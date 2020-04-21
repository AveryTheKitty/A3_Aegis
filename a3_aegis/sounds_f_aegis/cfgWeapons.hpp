class CfgWeapons
{
	class MGun;
	class LMG_RCWS;
	class LMG_Minigun: LMG_RCWS
	{
		class manual: MGun
		{
			class StandardSound
			{
				soundSetShot[] =
				{
					M134Minigun_Shot_SoundSet,
					M134Minigun_tail_SoundSet
				};
			};
		};
	};
	class RocketPods;
	class rockets_50mm: RocketPods
	{
		class Far_AI: RocketPods
		{
			class StandardSound
			{
				soundSetShot[] = {RocketsMedium_Shot_SoundSet};
			};
		};
		class Burst: RocketPods
		{
			class StandardSound
			{
				soundSetShot[] = {RocketsMedium_Shot_SoundSet};
			};
		};
	};
	class missiles_Vikhr: RocketPods
	{
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",db-5,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",db-5,2.5};
		class StandardSound
		{
			soundsetshot[] = {RocketsHeavy_Shot_SoundSet};
		};
		class TopDown: RocketPods
		{
			class StandardSound
			{
				soundsetshot[] = {RocketsHeavy_Shot_SoundSet};
			};
		};
	};
	class MissileLauncher;
	class launcher_SPG9: MissileLauncher
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					Launcher_SPG9_Shot_SoundSet,
					Launcher_SPG9_Tail_SoundSet
				};
			};
		};
	};
	class Rifle_Base_F;
	class UGL_F;
	class GL_M32_F: Rifle_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\M32\M32_dry",db-8,1,20};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\M32\M32_reload",db0,1,30};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					M32_Shot_SoundSet,
					M32_Tail_SoundSet,
					M32_InteriorTail_SoundSet
				};
			};
		};
	};
	class GL_XM25_F: Rifle_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_dry",db-8,1,20};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_reload",db0,1,30};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					XM25_Shot_SoundSet,
					XM25_Tail_SoundSet,
					XM25_InteriorTail_SoundSet
				};
			};
		};
	};
	class Launcher_Base_F;
	class Rifle_Long_Base_F;
	class LRR_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					M320_silencerShot_SoundSet,
					M320_silencerTail_SoundSet,
					M320_silencerInteriorTail_SoundSet
				};
			};
		};
	};
	class WF50_base_F: Rifle_Long_Base_F
	{
		soundBipodDown[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",db-3,1,20};
		soundBipodUp[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",db-3,1,20};
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_dry",db-6,1,20};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_reload",db-12,1,10};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					WF50_Shot_SoundSet,
					WF50_Tail_SoundSet,
					WF50_InteriorTail_SoundSet
				};
			};
		};
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					Zafir_silencerShot_SoundSet,
					Zafir_silencerTail_SoundSet,
					Zafir_silencerInteriorTail_SoundSet
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					Zafir_silencerShot_SoundSet,
					Zafir_silencerTail_SoundSet,
					Zafir_silencerInteriorTail_SoundSet
				};
			};
		};
	};
	class Pistol_Base_F;
	class hgun_C1911_F: Pistol_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_dry",db-8,1,20};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_reload",db0,1,30};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					C1911_Shot_SoundSet,
					C1911_Tail_SoundSet,
					C1911_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					C1911_silencerShot_SoundSet,
					C1911_silencerTail_SoundSet,
					C1911_silencerInteriorTail_SoundSet
				};
			};
		};
	};
	class hgun_G17_F: Pistol_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_dry",db-8,1,20};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_reload",db0,1,10};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					G17_Shot_SoundSet,
					G17_Tail_SoundSet,
					G17_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					G17_silencerShot_SoundSet,
					G17_silencerTail_SoundSet,
					G17_silencerInteriorTail_SoundSet
				};
			};
		};
	};
	class hgun_Mk26_F: Pistol_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_dry",db-8,1,20};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_reload",db0,1,30};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					Mk26_Shot_SoundSet,
					Mk26_Tail_SoundSet,
					Mk26_InteriorTail_SoundSet
				};
			};
		};
	};
	class hgun_Pistol_heavy_03_F: Pistol_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\MP412\MP412_dry",db-8,1,20};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\MP412\MP412_reload",db0,1,30};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					MP412_Shot_SoundSet,
					MP412_Tail_SoundSet,
					MP412_InteriorTail_SoundSet
				};
			};
		};
	};
	class arifle_AK12_base_F: Rifle_Base_F
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	class arifle_AK12_F: arifle_AK12_base_F{};
	class arifle_AK12_545_F: arifle_AK12_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
	};
	class arifle_AK12_lush_F: arifle_AK12_base_F{};
	class arifle_AK12_545_lush_F: arifle_AK12_lush_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
	};
	class arifle_AK12_arid_F: arifle_AK12_base_F{};
	class arifle_AK12_545_arid_F: arifle_AK12_arid_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
	};
	class arifle_AK12_GL_base_F: arifle_AK12_base_F{};
	class arifle_AK12_GL_F: arifle_AK12_GL_base_F{};
	class arifle_AK12_GL_545_F: arifle_AK12_GL_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
	};
	class arifle_AK12_GL_lush_F: arifle_AK12_GL_base_F{};
	class arifle_AK12_GL_545_lush_F: arifle_AK12_GL_lush_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
	};
	class arifle_AK12_GL_arid_F: arifle_AK12_GL_base_F{};
	class arifle_AK12_GL_545_arid_F: arifle_AK12_GL_arid_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
	};
	class arifle_AK12U_base_F: arifle_AK12_base_F{};
	class arifle_AK12U_F: arifle_AK12U_base_F{};
	class arifle_AK12U_545_F: arifle_AK12U_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
	};
	class arifle_AK12U_lush_F: arifle_AK12U_base_F{};
	class arifle_AK12U_545_lush_F: arifle_AK12U_lush_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
	};
	class arifle_AK12U_arid_F: arifle_AK12U_base_F{};
	class arifle_AK12U_545_arid_F: arifle_AK12U_arid_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
		};
	};
	class RFB_base_F: Rifle_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_dry",db-8,1,10};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\RFL\RFL_reload",db0,1,10};
		class Single: Mode_SemiAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					RFL_Shot_SoundSet,
					RFL_Tail_SoundSet,
					RFL_InteriorTail_SoundSet
				};
			};
	  	};
	};
	class arifle_RPK_base_F: Rifle_Base_F
	{
		soundBipodDown[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",db-3,1,20};
		soundBipodUp[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",db-3,1,20};
		drySound[] = {"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_dry",db-15,1,10};
		reloadMagazineSound[] = {"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_reload",db0,1,10};
		changeFiremodeSound[] = {"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_firemode",db-15,1,5};
		class Single: Mode_SemiAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK47_Shot_SoundSet,
					AK47_Tail_SoundSet,
					AK47_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK47_silencerShot_SoundSet,
					AK47_silencerTail_SoundSet,
					AK47_silencerInteriorTail_SoundSet
				};
			};
	  	};
	  	class FullAuto: Mode_FullAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK47_Shot_SoundSet,
					AK47_Tail_SoundSet,
					AK47_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK47_silencerShot_SoundSet,
					AK47_silencerTail_SoundSet,
					AK47_silencerInteriorTail_SoundSet
				};
			};
	  	};
	};
	class arifle_SA80_base_F: Rifle_Base_F
	{
		soundBipodDown[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",db-3,1,20};
		soundBipodUp[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",db-3,1,20};
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_dry",db-5,1,10};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_reload",db0,1,10};
		changeFiremodeSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_firemode",db-15,1,5};
		class Single: Mode_SemiAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					L85A3_Shot_SoundSet,
					L85A3_Tail_SoundSet,
					L85A3_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					L85A3_silencerShot_SoundSet,
					L85A3_silencerTail_SoundSet,
					L85A3_silencerInteriorTail_SoundSet
				};
			};
	  	};
	  	class FullAuto: Mode_FullAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					L85A3_Shot_SoundSet,
					L85A3_Tail_SoundSet,
					L85A3_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					L85A3_silencerShot_SoundSet,
					L85A3_silencerTail_SoundSet,
					L85A3_silencerInteriorTail_SoundSet
				};
			};
	  	};
	};
	class arifle_SA80_GL_base_F: arifle_SA80_base_F
	{
		class EGLM: UGL_F
		{
			reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_UGL_reload",db-2,1,10};
		};
	};
	class Rifle_Short_Base_F;
	class sgun_AA40_F: Rifle_Short_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_dry",db-3,1,10};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_reload",db0,1,10};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AA12_Shot_SoundSet,
					AA12_Tail_SoundSet,
					AA12_interiorTail_SoundSet
				};
			};
		};
	};
	class sgun_KSG_F: Rifle_Short_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_dry",db-3,1,10};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_reload",db0,1,10};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					KSG_Shot_SoundSet,
					KSG_Tail_SoundSet,
					KSG_interiorTail_SoundSet
				};
			};
		};
		class Secondary: Rifle_Short_Base_F
		{
			class Single: Mode_SemiAuto
			{
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] =
					{
						KSG_Shot_SoundSet,
						KSG_Tail_SoundSet,
						KSG_interiorTail_SoundSet
					};
				};
			};
		};
	};
	class sgun_M4_F: Rifle_Short_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_dry",db-3,1,10};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_reload",db0,1,10};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					M4_SSAS_Shot_SoundSet,
					M4_SSAS_Tail_SoundSet,
					M4_SSAS_interiorTail_SoundSet
				};
			};
		};
	};
	class sgun_Mp153_black_F: Rifle_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_dry",db-3,1,10};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_reload",db0,1,10};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					MP153_Shot_SoundSet,
					MP153_Tail_SoundSet,
					MP153_interiorTail_SoundSet
				};
			};
		};
	};
	class SMG_04_base_F: Rifle_Short_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_dry",db-15,1,10};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_reload",db0,1,30};
		changeFiremodeSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_firemode",db-10,1,5};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					SMG04_Shot_SoundSet,
					SMG04_Tail_SoundSet,
					SMG04_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					SMG04_silencerShot_SoundSet,
					SMG04_silencerTail_SoundSet,
					SMG04_silencerInteriorTail_SoundSet
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					SMG04_Shot_SoundSet,
					SMG04_Tail_SoundSet,
					SMG04_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					SMG04_silencerShot_SoundSet,
					SMG04_silencerTail_SoundSet,
					SMG04_silencerInteriorTail_SoundSet
				};
			};
		};
	};
	class SMG_06_base_F: Rifle_Short_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG06\SMG06_dry",db-15,1,10};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG06\SMG06_reload",db0,1,30};
		changeFiremodeSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG06\SMG06_firemode",db-10,1,5};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					SMG06_Shot_SoundSet,
					SMG06_Tail_SoundSet,
					SMG06_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					SMG06_silencerShot_SoundSet,
					SMG06_silencerTail_SoundSet,
					SMG06_silencerInteriorTail_SoundSet
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					SMG06_Shot_SoundSet,
					SMG06_Tail_SoundSet,
					SMG06_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					SMG06_silencerShot_SoundSet,
					SMG06_silencerTail_SoundSet,
					SMG06_silencerInteriorTail_SoundSet
				};
			};
		};
	};
};