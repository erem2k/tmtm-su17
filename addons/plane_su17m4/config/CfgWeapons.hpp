class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyR60: ProxyWeapon
	{
		model="\tmtm\aircraft\plane_su17m4\ammo\R60.p3d";
		simulation="maverickweapon";
	};
	class ProxyKh25: ProxyWeapon
	{
		model="\tmtm\aircraft\plane_su17m4\ammo\Kh25.p3d";
		simulation="maverickweapon";
	};
	class Proxy_FAB250_M46: ProxyWeapon
	{
		model="\tmtm\aircraft\plane_su17m4\fab_250_M46.p3d";
		simulation="maverickweapon";
	};
	class Proxy_FAB500_M54: ProxyWeapon
	{
		model="\tmtm\aircraft\plane_su17m4\fab_500_M54.p3d";
		simulation="maverickweapon";
	};
	class Proxy_FAB500_M62: ProxyWeapon
	{
		model="\tmtm\aircraft\plane_su17m4\fab_500_M62.p3d";
		simulation="maverickweapon";
	};
};

class CfgWeapons
{
	class Cannon_30mm_Plane_CAS_02_F;
	class TCP_twin_NR30: Cannon_30mm_Plane_CAS_02_F
	{
		displayName="Nudelman-Rikhter 30mm";
		class GunParticles
		{
			class Effect_Left
			{
				effectName="MachineGun2";
				positionName="Cannon_Muzzle_Left";
				directionName="Cannon_Root_Left";
			};
			class Effect_Right
			{
				effectName="MachineGun2";
				positionName="Cannon_Muzzle_Right";
				directionName="Cannon_Root_Right";
			};
		};
		muzzlePos="Muzzle_Flash_Left";
		muzzleEnd="Cannon_Muzzle_Left";
		selectionFireAnim="Muzzle_Flash_Left";
	};
	class Missile_AGM_01_Plane_CAS_02_F;
	class TCP_Kh25: Missile_AGM_01_Plane_CAS_02_F
	{
		displayName="Kh-25";
		magazines[]=
		{
			"TCP_2Rnd_Missile_AGM_01_F"
		};
	};
	class Missile_AA_03_Plane_CAS_02_F;
	class TCP_R60: Missile_AA_03_Plane_CAS_02_F
	{
		displayName="R-60";
		magazines[]=
		{
			"2Rnd_Missile_AA_03_F"
		};
	};
	class RocketPods;
	class Rocket_03_HE_Plane_CAS_02_F;
	class TCP_UB40: Rocket_03_HE_Plane_CAS_02_F
	{
		displayName="UB-20";
		magazines[]=
		{
			"TCP_40Rnd_Rocket_03_HE_F"
		};
		class Burst: RocketPods
		{
			burst=1;
			autoFire=1;
			soundContinuous=1;
			displayName="$STR_A3_Rocket_04_FL_Plane_CAS_01_F0";
			reloadTime=0.2;
			minRange=300;
			minRangeProbab=0.25;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=1300;
			maxRangeProbab=0.1;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			lockingTargetSound[]=
			{
				"A3\Sounds_F\weapons\Rockets\locked_1",
				0.56234133,
				1
			};
			lockedTargetSound[]=
			{
				"A3\Sounds_F\weapons\Rockets\locked_3",
				0.56234133,
				1.5
			};
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\missile_1",
					1.7782794,
					1,
					3100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
			soundFly[]=
			{
				"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
				1.5848932,
				1.2,
				1700
			};
			textureType="fullAuto";
			weaponSoundEffect="DefaultRifle";
		};
	};
	class Bomb_04_Plane_CAS_01_F;
	class TCP_FAB500: Bomb_04_Plane_CAS_01_F
	{
		displayName="Bombs";
		magazines[]=
		{
			"4Rnd_Bomb_04_F",
			"TCP_4Rnd_FAB250_M46",
			"TCP_4Rnd_FAB500_M54",
			"TCP_4Rnd_FAB500_M62",
			"TCP_2Rnd_FAB250_M46",
			"TCP_2Rnd_FAB500_M54",
			"TCP_2Rnd_FAB500_M62",
			"TCP_1Rnd_FAB250_M46",
			"TCP_1Rnd_FAB500_M54",
			"TCP_1Rnd_FAB500_M62"
		};
	};
	class CMFlareLauncher;
	class TCP_CMFlareLauncher: CMFlareLauncher
	{
		modes[]=
		{
			"Single",
			"Burst",
			"AIBurst"
		};
	};
};