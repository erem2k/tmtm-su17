class CfgMagazines
{
	class 2Rnd_LG_scalpel;
	class TCP_2Rnd_Kh25: 2Rnd_LG_scalpel
	{
		displayNameShort="Kh-25 AG Missile";
		ammo="TCP_Kh25_Missile";
		count=2;
	};
	class 2Rnd_Missile_AA_04_F;
	class TCP_2Rnd_R60: 2Rnd_Missile_AA_04_F
	{
		displayNameShort="R60 AA Missile";
		ammo="TCP_R60_Missile";
		count=2;
	};
	class 4Rnd_Missile_AGM_01_F;
	class TCP_2Rnd_Missile_AGM_01_F: 4Rnd_Missile_AGM_01_F
	{
		count=2;
	};
	class 7Rnd_Rocket_04_HE_F;
	class TCP_40Rnd_Rocket_03_HE_F: 7Rnd_Rocket_04_HE_F
	{
		count=40;
	};
	class 4Rnd_Bomb_04_F;
	class TCP_4Rnd_FAB250_M46: 4Rnd_Bomb_04_F
	{
		ammo="TCP_FAB250_M46";
		displayNameShort="FAB-250 M46";
	};
	class TCP_4Rnd_FAB500_M54: 4Rnd_Bomb_04_F
	{
		ammo="TCP_FAB500_M54";
		displayNameShort="FAB-500 M54";
	};
	class TCP_4Rnd_FAB500_M62: 4Rnd_Bomb_04_F
	{
		ammo="TCP_FAB500_M62";
		displayNameShort="FAB-500 M62";
	};
	class TCP_2Rnd_FAB250_M46: TCP_4Rnd_FAB250_M46
	{
		count=2;
	};
	class TCP_2Rnd_FAB500_M54: TCP_4Rnd_FAB500_M54
	{
		count=2;
	};
	class TCP_2Rnd_FAB500_M62: TCP_4Rnd_FAB500_M62
	{
		count=2;
	};
	class TCP_1Rnd_FAB250_M46: TCP_4Rnd_FAB250_M46
	{
		count=1;
	};
	class TCP_1Rnd_FAB500_M54: TCP_4Rnd_FAB500_M54
	{
		count=1;
	};
	class TCP_1Rnd_FAB500_M62: TCP_4Rnd_FAB500_M62
	{
		count=1;
	};
};