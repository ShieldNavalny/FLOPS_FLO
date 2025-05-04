//Arma 3 Music Script
//Made by Niklas Brettschneider

//Events to check the fight add
//Get all the shots within a 69m range.
_eventForShotFiredNear = player addEventHandler ["FiredNear", {_this execVM "Music\shotFiredNear.sqf"}];
_eventForTakingDamage = player addEventHandler ["Dammaged", {_this execVM "Music\damageTaken.sqf"}];



_eventForExplosionsNearby = player addEventHandler ["Explosion", {_this execVM "Music\explosionNear.sqf"}];
_eventForMissileIncoming = player addEventHandler ["IncomingMissile", {_this execVM "Music\missileIncoming.sqf"}];

//Commented out because only close shots should be taken.
//_eventForShotFired = player addEventHandler ["Fired", {_this execVM "Music\shotFiredNear.sqf"}];


waitUntil {!isNull player};
while {true} do {
  waitUntil {sleep 5; alive player};
  waitUntil {sleep 5; !alive player};
};


//todo: consider something like long vehicle rides, maybe also show a menu for the players ...