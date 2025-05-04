[
    "FLO_EnableMusic",                      // Var Name
    "CHECKBOX",                             // Type
    ["Enable Music", "Enable background music for the mission."], // Name and Hint
    "Mission Settings",                     // Category
    true,                                   // Default setting (on)
    1,                                      // Global (1 = true)
    {
        params ["_value"];
        if (!hasInterface) exitWith {};
        if (_value) then {
            1 fadeMusic 1;
        } else {
            1 fadeMusic 0;
        };
    }
] call CBA_fnc_addSetting;
