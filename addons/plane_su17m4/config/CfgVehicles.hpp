class Optics_Armored;
class Optics_Driver_Su22: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};

class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class ViewOptics;
	};
	class Plane_CAS_02_base_F: Plane_Base_F
	{
	};
	class O_Plane_CAS_02_F: Plane_CAS_02_base_F
	{
	};
	class TCP_Su22: O_Plane_CAS_02_F
	{
		crew="O_medic_F";
		displayName="Su-22";
		author="teaCup";
		model="\tmtm\aircraft\plane_su17m4\TCP_Su22";
		icon="\tmtm\aircraft\plane_su17m4\ui\su22_map.paa";
		picture="\tmtm\aircraft\plane_su17m4\ui\su22_icon.paa";
		driverAction="pilot_Su22";
		precisegetinout=0;
		getInAction="GetInHigh";
		getOutAction="GetOutHigh";
		driverLeftHandAnimName="Throttle";
		driverRightHandAnimName="Stick";
		driverLeftLegAnimName="Pedal_Left";
		driverRightLegAnimName="Pedal_Right";
		weapons[]=
		{
			"TCP_twin_NR30",
			"TCP_CMFlareLauncher"
		};
		magazines[]=
		{
			"500Rnd_Cannon_30mm_Plane_CAS_02_F",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		class AnimationSources: AnimationSources
		{
			class Muzzle_Flash
			{
				source="ammorandom";
				weapon="TCP_twin_NR30";
			};
		};
		memoryPointLRocket="";
		memoryPointRRocket="";
		memoryPointLMissile="";
		memoryPointRMissile="";
		memoryPointGun[]=
		{
			"Cannon_Muzzle_Left",
			"Cannon_Muzzle_Right"
		};
		selectionFireAnim="zasleh";
		memoryPointCM[]=
		{
			"FlareLauncher_1_pos",
			"FlareLauncher_2_pos"
		};
		memoryPointCMDir[]=
		{
			"FlareLauncher_1_dir",
			"FlareLauncher_2_dir"
		};
		memoryPointsGetInDriver="GetIn_driver_pos";
		memoryPointsGetInDriverDir="GetIn_driver_dir";
		driveOnComponent[]=
		{
			"Wheel_Front",
			"Wheel_Left",
			"Wheel_Right"
		};
		wheelCircumference=1.5;
		class RenderTargets
		{
			class KlenTV
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.40000001;
				};
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0.2;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=1;
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.498,0.38};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.498,0.38};
						pos10[]={1.298,1.38};
					};
					class Target
					{
						type="vector";
						source="target";
						pos0[]={0.498,0.38};
						pos10[]={1.298,1.38};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					condition="on";
					class BackupSights
					{
						type="line";
						width=4;
						condition="on";
						points[]=
						{
							
							{
								{0.472,0.68199998},
								1
							},
							
							{
								{0.528,0.68199998},
								1
							},
							{},
							
							{
								{0.472,0.773},
								1
							},
							
							{
								{0.528,0.773},
								1
							},
							{},
							
							{
								{0.472,0.86400002},
								1
							},
							
							{
								{0.528,0.86400002},
								1
							},
							{},
							
							{
								{0.472,0.95499998},
								1
							},
							
							{
								{0.528,0.95499998},
								1
							},
							{},
							
							{
								{0.486,0.727},
								1
							},
							
							{
								{0.514,0.727},
								1
							},
							{},
							
							{
								{0.486,0.81800002},
								1
							},
							
							{
								{0.514,0.81800002},
								1
							},
							{},
							
							{
								{0.486,0.90899998},
								1
							},
							
							{
								{0.514,0.90899998},
								1
							},
							{},
							
							{
								{0.597,0.597},
								1
							},
							
							{
								{0.82200003,0.82200003},
								1
							},
							{},
							
							{
								{0.67799997,0.708},
								1
							},
							
							{
								{0.708,0.67799997},
								1
							},
							{},
							
							{
								{0.80599999,0.83700001},
								1
							},
							
							{
								{0.83700001,0.80599999},
								1
							},
							{},
							
							{
								{0.403,0.597},
								1
							},
							
							{
								{0.178,0.82200003},
								1
							},
							{},
							
							{
								{0.292,0.67799997},
								1
							},
							
							{
								{0.322,0.708},
								1
							},
							{},
							
							{
								{0.163,0.80599999},
								1
							},
							
							{
								{0.19400001,0.83700001},
								1
							},
							{},
							
							{
								{0.56900001,0.66799998},
								1
							},
							
							{
								{0.62099999,0.79500002},
								1
							},
							{},
							
							{
								{0.65499997,0.87900001},
								1
							},
							
							{
								{0.67299998,0.921},
								1
							},
							{},
							
							{
								{0.583,0.76099998},
								1
							},
							
							{
								{0.62400001,0.74400002},
								1
							},
							{},
							
							{
								{0.65200001,0.92900002},
								1
							},
							
							{
								{0.69300002,0.91299999},
								1
							},
							{},
							
							{
								{0.43099999,0.66799998},
								1
							},
							
							{
								{0.37900001,0.79500002},
								1
							},
							{},
							
							{
								{0.345,0.87900001},
								1
							},
							
							{
								{0.32699999,0.921},
								1
							},
							{},
							
							{
								{0.37599999,0.74400002},
								1
							},
							
							{
								{0.417,0.76099998},
								1
							},
							{},
							
							{
								{0.30700001,0.91299999},
								1
							},
							
							{
								{0.34799999,0.92900002},
								1
							},
							{},
							
							{
								{0.227,0.47799999},
								1
							},
							
							{
								{0.227,0.52200001},
								1
							},
							{},
							
							{
								{0.23899999,0.58399999},
								1
							},
							
							{
								{0.25600001,0.625},
								1
							},
							{},
							
							{
								{0.74400002,0.625},
								1
							},
							
							{
								{0.76099998,0.58399999},
								1
							},
							{},
							
							{
								{0.773,0.52200001},
								1
							},
							
							{
								{0.773,0.47799999},
								1
							},
							{},
							
							{
								{0.31799999,0.47799999},
								1
							},
							
							{
								{0.31799999,0.52200001},
								1
							},
							{},
							
							{
								{0.68199998,0.47799999},
								1
							},
							
							{
								{0.68199998,0.52200001},
								1
							},
							{},
							
							{
								{0.472,0.31799999},
								1
							},
							
							{
								{0.528,0.31799999},
								1
							},
							{},
							
							{
								{0.472,0.40900001},
								1
							},
							
							{
								{0.528,0.40900001},
								1
							},
							{},
							
							{
								{0.472,0.54500002},
								1
							},
							
							{
								{0.48699999,0.54500002},
								1
							},
							{},
							
							{
								{0.51300001,0.54500002},
								1
							},
							
							{
								{0.528,0.54500002},
								1
							},
							{},
							
							{
								{0.472,0.59100002},
								1
							},
							
							{
								{0.48699999,0.59100002},
								1
							},
							{},
							
							{
								{0.51300001,0.59100002},
								1
							},
							
							{
								{0.528,0.59100002},
								1
							},
							{},
							
							{
								{0.472,0.63599998},
								1
							},
							
							{
								{0.48699999,0.63599998},
								1
							},
							{},
							
							{
								{0.51300001,0.63599998},
								1
							},
							
							{
								{0.528,0.63599998},
								1
							},
							{},
							
							{
								{0.31799999,0.47799999},
								1
							},
							
							{
								{0.31799999,0.52200001},
								1
							},
							{},
							
							{
								{0.40900001,0.47799999},
								1
							},
							
							{
								{0.40900001,0.52200001},
								1
							},
							{},
							
							{
								{0.59100002,0.47799999},
								1
							},
							
							{
								{0.59100002,0.52200001},
								1
							},
							{},
							
							{
								{0.68199998,0.47799999},
								1
							},
							
							{
								{0.68199998,0.52200001},
								1
							},
							{},
							
							{
								{0.40900001,0.5},
								1
							},
							
							{
								{0.43200001,0.5},
								1
							},
							{},
							
							{
								{0.45500001,0.5},
								1
							},
							
							{
								{0.477,0.5},
								1
							},
							{},
							
							{
								{0.523,0.5},
								1
							},
							
							{
								{0.54500002,0.5},
								1
							},
							{},
							
							{
								{0.56800002,0.5},
								1
							},
							
							{
								{0.59100002,0.5},
								1
							},
							{},
							
							{
								{0.5,0.68199998},
								1
							},
							
							{
								{0.5,0.95499998},
								1
							},
							{}
						};
					};
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"tmtm\aircraft\plane_su17m4\tex\fuselage.rvmat",
				"tmtm\aircraft\plane_su17m4\tex\fuselage_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext01_destruct.rvmat",
				"tmtm\aircraft\plane_su17m4\tex\wings.rvmat",
				"tmtm\aircraft\plane_su17m4\tex\wings_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext01_destruct.rvmat",
				"tmtm\aircraft\plane_su17m4\tex\glass.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_Glass_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_Glass_damage.rvmat"
			};
		};
		soundEngineOnInt[]=
		{
			"tmtm\aircraft\plane_su17m4\engine\startup_in",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"tmtm\aircraft\plane_su17m4\engine\startup_out",
			1,
			1,
			400
		};
		soundEngineOffInt[]=
		{
			"tmtm\aircraft\plane_su17m4\engine\shutdown_in",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"tmtm\aircraft\plane_su17m4\engine\shutdown_out",
			1,
			1,
			400
		};
		soundLocked[]=
		{
			"tmtm\aircraft\plane_su17m4\systems\missile_lock",
			3,
			1
		};
		soundIncommingMissile[]=
		{
			"tmtm\aircraft\plane_su17m4\systems\incoming_missile",
			3,
			1
		};
		soundDammage[]=
		{
			"tmtm\aircraft\plane_su17m4\systems\Damage",
			4,
			1
		};
		soundGearUp[]=
		{
			"tmtm\aircraft\plane_su17m4\systems\gearup_short",
			2,
			1,
			75
		};
		soundGearDown[]=
		{
			"tmtm\aircraft\plane_su17m4\systems\geardown_short",
			2,
			1,
			75
		};
		soundFlapsUp[]=
		{
			"tmtm\aircraft\plane_su17m4\systems\flapsup_short",
			1.5,
			1,
			75
		};
		soundFlapsDown[]=
		{
			"tmtm\aircraft\plane_su17m4\systems\flapsdown_short",
			1.5,
			1,
			75
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"tmtm\aircraft\plane_su17m4\engine\EngineLowOut",
					1,
					1,
					400
				};
				frequency="0.5+(0.010*speed)";
				volume="engineOn*camPos*(rpm factor[0.3, 1])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"tmtm\aircraft\plane_su17m4\engine\EngineHighOut",
					1,
					1,
					1000
				};
				frequency="1";
				volume="engineOn*camPos*(speed factor[0.4, 1.0])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"tmtm\aircraft\plane_su17m4\engine\ForsageOut",
					1.5,
					1,
					2000
				};
				frequency="1";
				volume="engineOn*camPos*(thrust factor[0.9, 1.0])";
				cone[]={3,3.9200001,1.9,0.5};
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"tmtm\aircraft\plane_su17m4\engine\WindNoiseOut",
					3.5,
					1,
					1500
				};
				frequency="1";
				volume="engineOn*camPos*(speed factor[60, 100])";
				cone[]={0.30000001,0.1,1,4};
			};
			class EngineLowIn
			{
				sound[]=
				{
					"tmtm\aircraft\plane_su17m4\engine\EngineLowIn",
					1,
					1
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"tmtm\aircraft\plane_su17m4\engine\EngineHighIn",
					1,
					1
				};
				frequency="1";
				volume="(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[]=
				{
					"tmtm\aircraft\plane_su17m4\engine\ForsageIn",
					1,
					1
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"tmtm\aircraft\plane_su17m4\systems\cockpit",
					1,
					2
				};
				frequency="1";
				volume="engineOn";
			};
		};
		class Reflectors
		{
			class Landing_Light_Left
			{
				position="Landing_Light_Left_pos";
				direction="Landing_Light_Left_dir";
				hitpoint="Landing_Light_Left_hit";
				selection="L svetlo";
				color[]={0.89999998,1,0.80000001};
				ambient[]={0.0089999996,0.0099999998,0.0080000004};
				intensity=25000;
				size=1;
				innerAngle=0;
				outerAngle=90;
				coneFadeCoef=12;
				useFlare=1;
				flareSize=0.5;
				flareMaxDistance=30;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=15;
					quadratic=7;
					hardLimitStart=75;
					hardLimitEnd=100;
				};
			};
			class Landing_Light_Right: Landing_Light_Left
			{
				position="Landing_Light_Right_pos";
				direction="Landing_Light_Right_dir";
				selection="P svetlo";
				hitpoint="Landing_Light_Right_hit";
			};
			class Cockpit_Light: Landing_Light_Left
			{
				position="Cockpit_Light_pos";
				direction="Cockpit_Light_dir";
				hitpoint="";
				selection="";
				color[]={1,0.1,0.1};
				ambient[]={0.0094999997,0.0099999998,0.0089999996};
				intensity=10000;
				innerAngle=0;
				outerAngle=300;
				coneFadeCoef=8;
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				class Attenuation: Attenuation
				{
					linear=10;
					quadratic=5;
					hardLimitStart=250;
					hardLimitEnd=300;
				};
			};
		};
		class MarkerLights
		{
			class PositionWhite
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="PositionLight_white_1_pos";
				intensity=140;
				drawLightSize=0.30000001;
				drawLight=1;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
		};
		class WingVortices
		{
		};
		class Exhausts
		{
			class Exhaust_1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectJet";
			};
		};
		hiddenSelections[]=
		{
			"texture_fuselage",
			"texture_wings",
			"Number_Left",
			"Number_Right",
			"Tail_Roundel_Left",
			"Tail_Roundel_Right",
			"Tail_Logo_Left",
			"Tail_Logo_Right",
			"Nose_Logo_Left",
			"Nose_Logo_Right",
			"Roundel_Left_Wing",
			"Roundel_Right_Wing"
		};
		hiddenSelectionsTextures[]=
		{
			"tmtm\aircraft\plane_su17m4\tex\fuselage_co.paa",
			"tmtm\aircraft\plane_su17m4\tex\wings_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		driverOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
		driverOutOpticsModel="";
		memoryPointDriverOptics="PIP0_pos";
		driverCanSee="1+2+4+8+16";
		gunnerOpticsEffect[]=
		{
			"TankGunnerOptics2",
			"OpticsBlur1",
			"OpticsCHAbera1"
		};
		driverOpticsEffect[]=
		{
			"TankGunnerOptics2",
			"OpticsBlur1",
			"OpticsCHAbera1"
		};
		class OpticsIn: Optics_Driver_Su22
		{
			class Wide: Wide
			{
			};
			class Medium: Medium
			{
			};
			class Narrow: Narrow
			{
			};
		};
		gearDownTime=3.5;
		gearUpTime=5;
	};
	class PlaneWreck;
	class TCP_Su22_wreck: PlaneWreck
	{
		scope=1;
		model="\tmtm\aircraft\plane_su17m4\TCP_Su22_Wreck";
		typicalCargo[]={};
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		transportSoldier=1;
		class Eventhandlers
		{
		};
	};
	class TCP_Su22_HU305: TCP_Su22
	{
		displayName="Su-22 (HU305)";
		hiddenSelectionsTextures[]=
		{
			"tmtm\aircraft\plane_su17m4\tex\fuselage_co.paa",
			"tmtm\aircraft\plane_su17m4\tex\wings_co.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_305_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_305_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_305_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_305_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_305_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_305_ca.paa",
			"",
			"",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_305_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_305_ca.paa"
		};
	};
	class TCP_Su22_HU312: TCP_Su22
	{
		displayName="Su-22 (HU312)";
		hiddenSelectionsTextures[]=
		{
			"tmtm\aircraft\plane_su17m4\tex\fuselage_co.paa",
			"tmtm\aircraft\plane_su17m4\tex\wings_co.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_312_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_312_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_312_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_312_ca.paa",
			"",
			"",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_312_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_312_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_312_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_HU_312_ca.paa"
		};
	};
	class TCP_Su22_PL3215: TCP_Su22
	{
		displayName="Su-22 (PL3215)";
		hiddenSelectionsTextures[]=
		{
			"tmtm\aircraft\plane_su17m4\tex\fuselage_PL_co.paa",
			"tmtm\aircraft\plane_su17m4\tex\wings_PL_co.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_PL_3215_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_PL_3215_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_PL_3215_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_PL_3215_ca.paa",
			"",
			"",
			"tmtm\aircraft\plane_su17m4\tex\markings_PL_3215_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_PL_3215_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_PL_3215_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_PL_3215_ca.paa"
		};
	};
	class TCP_Su22_SY: TCP_Su22
	{
		displayName="Su-22 (SY)";
		hiddenSelectionsTextures[]=
		{
			"tmtm\aircraft\plane_su17m4\tex\fuselage_SY_co.paa",
			"tmtm\aircraft\plane_su17m4\tex\wings_SY_co.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_SY_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_SY_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_SY_ca.paa",
			"tmtm\aircraft\plane_su17m4\tex\markings_SY_ca.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
	};

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
