OLDGRP = group player;

removeAllActions player;

player setDamage 0;
[true] remoteExec ["showHud", player];
player stop false;
player enableAI "all";
[player, false] remoteExec ["setCaptive", 0, false];
["GetOutMan"] remoteExec ["removeAllEventHandlers", player, false];

// Clear player's inventory
removeAllWeapons player;
removeAllItems player;
//removeAllAssignedItems player;
//removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

(_this select 1) setPos [0,0,0];
deleteVehicle (_this select 1);

// Удалить старый EH, если был
if (!isNil {player getVariable "fatigueEH"}) then {
    removeMissionEventHandler ["EachFrame", player getVariable "fatigueEH"];
};

// Добавить новый
private _eh = addMissionEventHandler ["EachFrame", {
    if (alive player) then {
        player setFatigue ((getFatigue player) max 0 - 0.01);
    };
}];
player setVariable ["fatigueEH", _eh];

player enableStamina true;
player setFatigue 0;
player setAnimSpeedCoef 1;
player setUnitTrait ["loadCoef", 1.4];
player setCustomAimCoef 0.65;

sleep 1;

ShowHUD [true, true, true, true, true, true, true, true, true, true];