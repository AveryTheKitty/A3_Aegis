class CfgSoundShaders
{
	/*
	// AUG 5.56 mm
	class AUG_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_closure_01",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_closure_02",1}
		};
		range = 5;
		volume = db-7;
	};
	class AUG_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_closeShot_01",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_closeShot_02",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_closeShot_03",1}
		};
		volume = db0;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class AUG_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_midShot_01",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_midShot_02",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_midShot_03",1}
		};
		volume = db-2;
		range = 1800;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class AUG_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_distShot_01",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_distShot_02",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_distShot_03",1}
		};
		volume = db0;
		range = 1800;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
	  };
	};
	class AUG_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_tailforest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 2000;
		rangeCurve[] =
		{
			{0,1},
			{2000,0}
		};
		limitation = true;
	};
	class AUG_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_tailhouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 1500;
		rangeCurve[] =
		{
			{0,1},
			{250,0.3},
			{1500,0}
		};
		limitation = true;
	};
	class AUG_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_tailinterior",1}
		};
		volume = interior;
		range = 350;
		rangeCurve[] =
		{
			{0,1},
			{50,0.4},
			{100,0.2},
			{350,0}
		};
		limitation = true;
	};
	class AUG_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_tailmeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 2000;
		rangeCurve[] =
		{
			{0,1},
			{2000,0}
		};
		limitation = true;
	};
	class AUG_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_tailtrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 2000;
		rangeCurve[] =
		{
			{0,1},
			{2000,0}
		};
		limitation = true;
	};
	class AUG_silencerShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_silencerShot_01",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_silencerShot_02",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_silencerShot_03",1}
		};
		volume = 1;
		range = 150;
		rangeCurve = closeShotCurve;
	};
	class AUG_silencerTailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_silencerTailForest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	class AUG_silencerTailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_silencerTailHouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0}
		};
		limitation = true;
	};
	class AUG_silencerTailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_silencerTailInterior",1}
		};
		volume = interior;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{50,0.3},
			{150,0}
		};
		limitation = true;
	};
	class AUG_silencerTailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_silencerTailMeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},{150,0.3}
		};
		limitation = true;
	};
	class AUG_silencerTailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_silencerTailTrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	*/
	// G36 6.5 mm
	class G36_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_closure_01",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_closure_02",1}
		};
		range = 5;
		volume = db-3;
	};
	class G36_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_closeShot_01",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_closeShot_02",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_closeShot_03",1}
		};
		volume = db-7;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class G36_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_midShot_01",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_midShot_02",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_midShot_03",1}
		};
		volume = db-2;
		range = 1800;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class G36_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_distShot_01",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_distShot_02",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_distShot_03",1}
		};
		volume = db0;
		range = 1800;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
	  };
	};
	class G36_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_tailforest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 2000;
		rangeCurve[] =
		{
			{0,1},
			{2000,0}
		};
		limitation = true;
	};
	class G36_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_tailhouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 1500;
		rangeCurve[] =
		{
			{0,1},
			{250,0.3},
			{1500,0}
		};
		limitation = true;
	};
	class G36_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_tailinterior",1}
		};
		volume = interior;
		range = 350;
		rangeCurve[] =
		{
			{0,1},
			{50,0.4},
			{100,0.2},
			{350,0}
		};
		limitation = true;
	};
	class G36_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_tailmeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 2000;
		rangeCurve[] =
		{
			{0,1},
			{2000,0}
		};
		limitation = true;
	};
	class G36_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_tailtrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 2000;
		rangeCurve[] =
		{
			{0,1},
			{2000,0}
		};
		limitation = true;
	};
	class G36_silencerShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_silencerShot_01",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_silencerShot_02",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_silencerShot_03",1}
		};
		volume = 1;
		range = 150;
		rangeCurve = closeShotCurve;
	};
	class G36_silencerTailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_silencerTailForest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	class G36_silencerTailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_silencerTailHouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0}
		};
		limitation = true;
	};
	class G36_silencerTailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_silencerTailInterior",1}
		};
		volume = interior;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{50,0.3},
			{150,0}
		};
		limitation = true;
	};
	class G36_silencerTailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_silencerTailMeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},{150,0.3}
		};
		limitation = true;
	};
	class G36_silencerTailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_silencerTailTrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	/*
	// Mk17 SCAR 7.62 mm
	class SCAR_Closure_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_closure_01",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_closure_02",1}
		};
		range = 5;
		volume = db-7;
	};
	class SCAR_closeShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_closeShot_01",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_closeShot_02",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_closeShot_03",1}
		};
		volume = db0;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class SCAR_midShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_midShot_01",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_midShot_02",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_midShot_03",1}
		};
		volume = db-2;
		range = 1800;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class SCAR_distShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_distShot_01",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_distShot_02",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_distShot_03",1}
		};
		volume = db0;
		range = 1800;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
	  };
	};
	class SCAR_tailDistant_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_taildistant",1}
		};
		volume = db0;
		range = 2000;
		rangeCurve[] =
		{
			{0,0},
			{600,0.7},
			{2000,1}
		};
		limitation = true;
	};
	class SCAR_tailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_tailforest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 2000;
		rangeCurve[] =
		{
			{0,1},
			{2000,0}
		};
		limitation = true;
	};
	class SCAR_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_tailhouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 1500;
		rangeCurve[] =
		{
			{0,1},
			{250,0.3},
			{1500,0}
		};
		limitation = true;
	};
	class SCAR_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_tailinterior",1}
		};
		volume = interior;
		range = 350;
		rangeCurve[] =
		{
			{0,1},
			{50,0.4},
			{100,0.2},
			{350,0}
		};
		limitation = true;
	};
	class SCAR_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_tailmeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 2000;
		rangeCurve[] =
		{
			{0,1},
			{2000,0}
		};
		limitation = true;
	};
	class SCAR_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_tailtrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 2000;
		rangeCurve[] =
		{
			{0,1},
			{2000,0}
		};
		limitation = true;
	};
	class SCAR_silencerShot_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_silencerShot_01",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_silencerShot_02",1},
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_silencerShot_03",1}
		};
		volume = 1;
		range = 150;
		rangeCurve = closeShotCurve;
	};
	class SCAR_silencerTailForest_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_silencerTailForest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	class SCAR_silencerTailHouses_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_silencerTailHouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0}
		};
		limitation = true;
	};
	class SCAR_silencerTailInterior_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_silencerTailInterior",1}
		};
		volume = interior;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{50,0.3},
			{150,0}
		};
		limitation = true;
	};
	class SCAR_silencerTailMeadows_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_silencerTailMeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},{150,0.3}
		};
		limitation = true;
	};
	class SCAR_silencerTailTrees_SoundShader
	{
		samples[] =
		{
			{"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_silencerTailTrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	*/
};