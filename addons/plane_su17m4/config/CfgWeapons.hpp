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