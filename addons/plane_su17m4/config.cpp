#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {
			"TCP_Su22",
			"TCP_Su22_BreakChute",
			"TCP_Su22_HU305",
			"TCP_Su22_HU312",
			"TCP_Su22_PL3215",
			"TCP_Su22_SY"
		};
		weapons[] = {
			"TCP_twin_NR30",
			"TCP_Kh_25",
			"TCP_R_60",
			"TCP_UB40",
			"TCP_FAB500",
			"TCP_CMFlareLauncher"
		};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"A3_Air_F_EPC_Plane_CAS_02"
		};
		author = MOD_AUTHOR;
		url = MOD_URL;
		version = VERSION; 
		versionStr = QUOTE(VERSION_STR);
		versionAr[] = {VERSION_AR};
	};
};

#include "config\CfgMoves.hpp"
#include "config\CfgAmmo.hpp"
#include "config\CfgMagazines.hpp"
#include "config\CfgWeapons.hpp"
#include "config\CfgVehicles.hpp"
