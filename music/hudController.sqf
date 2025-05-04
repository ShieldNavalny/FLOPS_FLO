//Arma 3 Music Script
//Made by Niklas Brettschneider

//For turning on and off Hud
if (isMultiplayer) then
{

	if(debugging == 1) then
	{
		debugging = 0;
		player removeAction hudAction;
		hudAction = player addAction ["Music HUD On", "Music\hudController.sqf"];
	}

	else
	{
		if(debugging == 0) then
		{
			debugging = 1;
			player removeAction hudAction;
			hudAction = player addAction ["Music HUD Off", "Music\hudController.sqf"];
		};
	};
}
else
{
	if(debugging == 1) then
	{
		debugging = 0;
		player removeAction hudAction;
		hudAction = player addAction ["Music HUD On", "Music\hudController.sqf"];

	}

	else
	{
		if(debugging == 0) then
		{
			debugging = 1;
			player removeAction hudAction;
			hudAction = player addAction ["Music HUD Off", "Music\hudController.sqf"];

		};
	};
};