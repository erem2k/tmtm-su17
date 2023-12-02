class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		pilot_Su22="pilot_Su22_state";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_pilot_Su22_state: DefaultDie
		{
			actions="DeadActions";
			file="tmtm\aircraft\plane_su17m4\anim\su22_pilot_KIA.rtm";
			speed=1.4;
			looped="false";
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class pilot_Su22_state: Crew
		{
			file="tmtm\aircraft\plane_su17m4\anim\su22_pilot.rtm";
			speed=0.066519;
			interpolateTo[]=
			{
				"KIA_pilot_Su22_state",
				1
			};
		};
	};
};
