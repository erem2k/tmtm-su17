#include "script_version.hpp"

#define PREFIX tmtm_aircraft

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCHLVL,BUILD

#define QUOTE(var1) #var1

// Minimum compatible Arma 3 version
#define REQUIRED_VERSION 2.12

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(TMTM Aircraft - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(TMTM Aircraft - COMPONENT)
#endif

#define DOUBLES(var1,var2) var1##_##var2
#define ADDON DOUBLES(PREFIX,COMPONENT)

#define MOD_AUTHOR "erem2k, teacup"
#define MOD_URL "https://github.com/erem2k/tmtm-su17"