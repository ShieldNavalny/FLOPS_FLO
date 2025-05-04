// Where are Classnames ? Right click on any Unit or Vehicle in the Editor and Select find in CFG viewer, Last Name in the [path] tab is the Classname,

// CUSTOM_ENEMY_FACTION.sqf
// Defines the OPFOR faction units and equipment for the mission
// Used for both physical and virtual spawning through the virtualization system

/*
 * Unit and Vehicle Type Definitions
 * These arrays define what types of units and vehicles can spawn in the mission.
*/

// Predefined Groups from the config
// Used as the primary groups for the virtualization system
East_Groups = [
(configfile >> "CfgGroups" >> "East" >> "OPF_R_ard_F" >> "Infantry" >> "O_R_InfSentry_A"),
(configfile >> "CfgGroups" >> "East" >> "OPF_R_ard_F" >> "Infantry" >> "O_R_InfTeam_AT_A"),
(configfile >> "CfgGroups" >> "East" >> "OPF_R_ard_F" >> "Infantry" >> "O_R_InfTeam_AA_A"),
(configfile >> "CfgGroups" >> "East" >> "OPF_R_ard_F" >> "Infantry" >> "O_R_InfTeam_A"),
(configfile >> "CfgGroups" >> "East" >> "OPF_R_ard_F" >> "Support" >> "O_R_Support_Mort"),
(configfile >> "CfgGroups" >> "East" >> "OPF_R_ard_F" >> "Support" >> "O_R_Support_MG"),
(configfile >> "CfgGroups" >> "East" >> "OPF_R_ard_F" >> "Infantry" >> "O_R_InfSquad_Weapons_A")
];
// Ambient/Civilian-Like Ground Vehicles
East_Ground_Vehicles_Ambient = ["O_R_Truck_02_medical_F", "O_R_Truck_02_box_F", "O_R_Truck_02_Ammo_F", "O_R_Truck_02_fuel_F", "O_R_MRAP_02_F", "O_R_LSV_02_unarmed_F", "O_R_Truck_02_cargo_F", "O_R_Truck_02_flatbed_F", "O_R_Truck_03_ammo_F", "O_R_Truck_03_medical_F", "O_R_Truck_03_repair_F", "O_R_Truck_03_fuel_F"]; 
// Light Military Ground Vehicles
East_Ground_Vehicles_Light = ["O_R_LSV_02_AT_F", "O_R_LSV_02_armed_F", "O_R_MRAP_02_gmg_F", "O_R_MRAP_02_hmg_F", "O_R_APC_Wheeled_04_cannon_F", "O_R_APC_Wheeled_04_cannon_v2_F", "Aegis_O_R_Truck_02_aa_F"];
// Heavy Ground Vehicles and Tanks
East_Ground_Vehicles_Heavy = ["Aegis_O_R_APC_Tracked_02_30mm_lxWS", "O_R_APC_Tracked_02_AA_F", "Aegis_O_R_MBT_02_Railgun_F", "O_R_MBT_04_cannon_F", "O_R_MBT_04_command_F", "O_R_MBT_02_cannon_F"]; 
// Transport Ground Vehicles
East_Ground_Transport = ["O_R_Truck_03_transport_F", "O_R_Truck_03_covered_F", "O_R_MRAP_02_F", "O_R_LSV_02_unarmed_F", "O_R_Truck_02_F", "O_R_Truck_02_transport_F"]; 
// Transport Air Vehicles
East_Air_Transport = ["O_R_Heli_Light_02_unarmed_F", "O_R_Heli_Light_02_dynamicLoadout_F", "O_R_Heli_Transport_04_bench_F", "O_R_Heli_Transport_04_covered_F", "Aegis_O_R_Heli_Attack_04_F", "O_R_Heli_Attack_02_dynamicLoadout_F"];
// Armed Helicopters
East_Air_Heli = ["O_R_Heli_Light_02_dynamicLoadout_F", "Aegis_O_R_Heli_Attack_04_F", "O_R_Heli_Attack_02_dynamicLoadout_F"]; 
// Fixed-Wing Aircraft
East_Air_Jet = ["O_R_Plane_Fighter_02_Stealth_F", "O_R_Plane_Fighter_02_F", "O_R_Plane_CAS_02_dynamicLoadout_F"]; 
// Artillery Units
East_Ground_Artillery = ["O_R_MBT_02_arty_F", "O_R_Truck_02_MRL_F"]; 
// Drone Units
East_Air_Drone = ["O_R_UAV_06_F", "Aegis_O_R_UAV_02_lxWS", "O_R_UAV_01_F"]; 
// Individual Infantry Units
East_Units = [
    // Regular infantry (high frequency)
    "O_R_Soldier_ard_F", "O_R_Soldier_ard_F", "O_R_Soldier_ard_F", "O_R_Soldier_ard_F",  // Regular rifleman
    "O_R_soldier_AR_ard_F", "O_R_soldier_AR_ard_F",                          // Autorifleman
    "O_R_Soldier_CQ_ard_F", "O_R_Soldier_CQ_ard_F",                          // CQB specialist
    "O_R_Soldier_GL_ard_F", "O_R_Soldier_GL_ard_F",                          // Grenadier
    
    // Support roles (medium frequency)
    "O_R_medic_ard_F", "O_R_medic_ard_F",                                    // Medic
    "O_R_recon_AR_ard_F", "O_R_recon_AR_ard_F",              // Machine gunner
    "Aegis_O_R_Sharpshooter_ard_F",                                             // Marksman
    "O_R_Soldier_A_ard_F",                                             // Ammo bearer
    
    // Specialists (low frequency)
    "O_R_Soldier_LAT_ard_F",                                           // Light AT
    "O_R_Soldier_HAT_ard_F",                                          // Light AT
    "O_R_ghillie_sard_F",                                            // Sniper
    "O_R_soldier_AA_ard_F"                                             // AA Specialist
];
// Fire Observer Units for Artillery
East_FireObserver = ["O_R_recon_JTAC_ard_F"];
// Officer Units
East_Units_Officers = ["O_R_officer_ard_F"];

/*
 * OPFOR Virtualization Objective Configuration
 * This section defines how many of each unit type should spawn at different objective types
 * These are the default settings that will be used by the virtualization system
*/

// Structure: [objective type, [[group type, count], [group type, count], ...]]
OPFOR_Objective_Groups = [
    // Support objectives - mix of infantry and light vehicles
    ["o_support", [
        ["infantry", 3], 
        ["motorized", 2]
    ]],
    
    // Neutral support objectives - lighter security
    ["n_support", [
        ["infantry", 2], 
        ["motorized", 1]
    ]],
    
    // Installation objectives - mix of infantry and heavy vehicles
    ["o_installation", [
        ["infantry", 4], 
        ["mechanized", 2],
        ["armor", 1]
    ]],
    
    // Neutral installation objectives
    ["n_installation", [
        ["infantry", 3], 
        ["mechanized", 1]
    ]],
    
    // Anti-air objectives - AA vehicles and infantry
    ["o_antiair", [
        ["infantry", 2],
        ["motorized", 1],
        ["air", 1]
    ]],
    
    // Service objectives - light vehicles and infantry
    ["o_service", [
        ["infantry", 2],
        ["motorized", 2]
    ]],
    
    // Power plant objectives - infantry defense
    ["loc_Power", [
        ["infantry", 3],
        ["motorized", 1]
    ]],
    
    // Ruins objectives - light infantry presence
    ["loc_Ruin", [
        ["infantry", 1]
    ]],
    
    // Recon objectives - small infantry and light vehicles
    ["o_recon", [
        ["infantry", 2],
        ["motorized", 1],
        ["helicopter", 1]
    ]],
    
    // Infantry objectives - heavier infantry presence
    ["o_inf", [
        ["infantry", 4],
        ["motorized", 1]
    ]]
];

/*
 * Group Type Unit/Vehicle Counts
 * Defines how many physical units/vehicles should be in each type of group
 */
OPFOR_Group_Counts = [
    ["infantry", 10],          // Number of individual soldiers
    ["motorized", 2],         // Number of armed vehicles (MRAP, GMG, etc.)
    ["mechanized", 2],        // Number of APCs/IFVs
    ["armor", 2],             // Number of tanks
    ["helicopter", 1],        // Number of helicopters
    ["jet", 1],               // Number of jets
    ["air", 1],               // Number of aircraft
    ["artillery", 1]         // Number of artillery pieces (Probably always keep this at 1)
];

/*
 * Configure activation distance for the virtualization system
 * This is the distance in meters that a player needs to be from a virtual group for it to physically spawn in the game
 */ 
OPFOR_Virtualization_Distance = 2000;