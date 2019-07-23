﻿#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "$STR_CBA_Author";
        name = CSTRING(component);
        url = "$STR_CBA_URL";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_common"};
        version = VERSION;
        authors[] = {"commy2"};
    };
};

#include "CfgVehicles.hpp"
#include "CfgNonAIVehicles.hpp"