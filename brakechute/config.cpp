class CfgPatches
{
	class TCP_Su22_BrakeChute
	{
		units[]=
		{
			"TCP_Su22_BrakeChute"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"TCP_Su22",
			"A3_Animals_F_Rabbit"
		};
	};
};
class CfgMovesAnimal_Base_F
{
	access=1;
	collisionVertexPattern[]={};
	collisionGeomCompPattern[]={};
	class Default
	{
		access=3;
		file="";
		looped=1;
		speed=0.5;
		disableWeapons=1;
		enableOptics=1;
		disableWeaponsLong=0;
		canreload=1;
		showWeaponAim=1;
		enableMissile=0;
		enableBinocular=0;
		showItemInHand=0;
		showItemInRightHand=0;
		showHandGun=0;
		onLandBeg=0;
		onLandEnd=0;
		onLadder=0;
		canPullTrigger=1;
		duty=-0.50999999;
		predictSpeedCoef=1;
		visibleSize=1;
		aimPrecision=1;
		relSpeedMin=1;
		relSpeedMax=1;
		soundEnabled=1;
		soundOverride="";
		soundEdge[]={0.5,1};
		soundEdge1=0.5;
		soundEdge2=1;
		terminal=0;
		limitGunMovement=1;
		variantsPlayer[]={};
		variantsAI[]={};
		equivalentTo="";
		connectAs="";
		variantAfter[]={5,10,20};
		connectFrom[]={};
		connectTo[]={};
		interpolateWith[]={};
		interpolateTo[]={};
		interpolateFrom[]={};
		aiming="aimingNo";
		leaning="aimingNo";
		untiltWeapon="aimingNo";
		aimingBody="aimingUpDefault";
		legs="legsNo";
		head="headDefault";
		leaningFactorBeg=0;
		leaningFactorEnd=0;
		leaningFactorZeroPoint=-1;
		leaningCorrectionAngleBeg=0;
		leaningCorrectionAngleEnd=0;
		interpolationSpeed=6;
		interpolationRestart=0;
		hasCollShapeSafe=0;
		collisionShapeSafe="";
		boundingSphere=1;
		enableDirectControl=1;
		enableAutoActions=0;
		leftHandIKBeg=0;
		leftHandIKEnd=0;
		leftHandIKCurve=0;
		rightHandIKCurve=0;
		rightHandIKBeg=0;
		rightHandIKEnd=0;
		weaponIK=0;
		preload=0;
		walkcycles=1;
		forceAim=0;
		showDisposableGun=0;
		headBobStrength=0.5;
		headBobMode=1;
	};
	class StandBase: Default
	{
	};
	class DefaultDie: Default
	{
	};
	class ManActions
	{
	};
	class Actions
	{
		class NoActions: ManActions
		{
		};
	};
	class Interpolations
	{
	};
	transitionsInterpolated[]={};
	transitionsSimple[]={};
	transitionsDisabled[]={};
	class BlendAnims
	{
	};
};
class TCP_CfgMovesBrakeChute: CfgMovesAnimal_Base_F
{
	skeletonName="TCP_BrakeChute_Skeleton";
	collisionVertexPattern[]={};
	class Default: Default
	{
		collisionShape="A3\Animals_F\empty_CollShape.p3d";
		actions="RabbitActions";
	};
	class StandBase: Default
	{
		actions="RabbitActions";
		aiming="aimingDefault";
		leaningFactorBeg=1;
		leaningFactorEnd=1;
		disableWeapons=1;
		disableWeaponsLong=1;
	};
	class DefaultDie: Default
	{
		aiming="aimingNo";
		legs="legsNo";
		head="headNo";
		disableWeapons=1;
		interpolationRestart=1;
		soundEdge1=0.44999999;
		soundEdge2=0.44999999;
	};
	class States
	{
		class Opening: StandBase
		{
			actions="BrakeChuteActions";
			file="TCP_Su22\BrakeChute\opening.rtm";
			duty=-1;
			speed=1;
			looped=0;
			relSpeedMin=1;
			relSpeedMax=1;
			connectTo[]=
			{
				"Fast_Loop",
				0
			};
			variantAfter[]={0,0,0};
			variantsAI[]=
			{
				"Fast_Loop",
				1
			};
			connectFrom[]=
			{
				"Fast_Loop",
				0
			};
			interpolateTo[]=
			{
				"Fast_Loop",
				0
			};
			preload=1;
		};
		class Fast_Loop: Opening
		{
			actions="BrakeChuteActions";
			file="TCP_Su22\BrakeChute\fast_loop.rtm";
			looped=1;
			speed=0.60000002;
			connectFrom[]=
			{
				"Opening",
				0,
				"Fast_Loop",
				0
			};
			connectTo[]=
			{
				"Fast_Loop",
				0
			};
		};
		class Closing: DefaultDie
		{
			actions="NoActions";
			file="TCP_Su22\BrakeChute\closing.rtm";
			speed=1;
			looped=0;
			variantsPlayer[]={};
			variantsAI[]=
			{
				"Rabbit_Die",
				0.5
			};
			variantAfter[]={0,0,0};
			terminal=1;
		};
	};
	class Actions: Actions
	{
		class NoActions: NoActions
		{
			turnSpeed=15;
			limitFast=5.5;
			useFastMove=0;
			upDegree=0;
		};
		class BrakeChuteActions: NoActions
		{
			Default="Opening";
			Die="Closing";
			turnSpeed=300;
			limitFast=5.5;
			useFastMove=0;
		};
	};
	class Interpolations
	{
	};
	transitionsInterpolated[]={};
	transitionsSimple[]={};
	transitionsDisabled[]={};
	class BlendAnims: BlendAnims
	{
		aimingDefault[]={};
		untiltWeaponDefault[]={};
		legsDefault[]={};
		headDefault[]={};
		aimingNo[]={};
		legsNo[]={};
		headNo[]={};
		aimingUpDefault[]={};
	};
};
class CfgVehicles
{
	class Rabbit_F;
	class TCP_Su22_BrakeChute: Rabbit_F
	{
		model="TCP_Su22\BrakeChute\TCP_Su22_BrakeChute.p3d";
		moves="TCP_CfgMovesBrakeChute";
		mapSize=15;
		featureSize=10;
		hiddenSelections[]=
		{
			"Canopy",
			"Ropes",
			"Cable"
		};
	};
};
