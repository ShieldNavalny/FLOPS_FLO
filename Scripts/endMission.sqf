/*
Скрипт для завершения кампаний или миссий с помощью красивой полуинтерактивной кат-сцены.
Скрипт специально написан "одним файлом" хотя по хорошему функцию ниже надо выносить в CfgFunctions. Но хотелось оставить возможность переноса в любую другую миссию максимально быстро

В остальном надо заменить диалоги на необходимые и если хочется подставить озвучку. Также закомментировать блок связанный с динамической музыкой в начале скрипта если у вас ее нет

Скрипт сам вызывается через переменную endwin
Ее достаточно просто выполнить на сервер 

	Shield 
*/
/*
// Функция визуальных эффектов завершения миссии
params [];
[] spawn {
	// Очистка экранных эффектов
	{
		_x cutText ["", "plain"];
	} forEach ["RscStatic", "RscInterlacing", "RscNoise", "RscEnd"];

	showHUD false;

	// Эффекты статики
	"RscStatic" cutRsc ["RscStatic", "plain"];
	uisleep 0.01;
	"RscStatic" cutRsc ["RscStatic", "plain"];
	uisleep 0.5;
	"RscStatic" cutRsc ["RscStatic", "plain"];

	// Эффекты интерференции
	"RscInterlacing" cutRsc ["RscInterlacing", "plain"];
	uisleep 0.3;
	"RscStatic" cutRsc ["RscStatic", "plain"];

	// Цветокоррекция
	private _ppColor = ppEffectCreate ["colorCorrections", 1999];
	["BlackAndWhite"] call BIS_fnc_setPPeffectTemplate;
	uisleep 0.5;
	"RscStatic" cutRsc ["RscStatic", "plain"];

	// Хроматическая аберрация
	{
		_x ppEffectEnable true;
		_x ppEffectAdjust [0.02, 0.02, true];
		_x ppEffectCommit 0;
	} forEach [ppEffectCreate ["ChromAberration", 1500]];

	// Настройка цветокоррекции
	uisleep 0.1;
	_ppColor ppEffectEnable true;
	_ppColor ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [0.8, 0.8, 0.8, 0.65], [1, 1, 1, 1.0]];
	_ppColor ppEffectCommit 0;

	// Эффект пленки
	private _ppGrain = ppEffectCreate ["filmGrain", 2012];
	_ppGrain ppEffectEnable true;
	_ppGrain ppEffectAdjust [0.1, 1, 1, 0, 1];
	_ppGrain ppEffectCommit 0;

	// Показ уведомления об успехе
	uisleep 3.2;
	["TaskSucceeded", ["winTask", "Победить"]] call BIS_fnc_showNotification;

	// Запуск титров
	RscMissionEnd_end = "end1";
	RscMissionEnd_win = true;
	"RscMissionEnd" cutRsc ["RscMissionEnd", "plain"];
	uisleep 9;

	// Финальные визуальные эффекты
	RscNoise_color = [1,1,1,0];
	"RscNoise" cutrsc ["RscNoise","black"];
	"RscStatic" cutrsc ["RscStatic","plain"];
	uisleep 0.5;
	RscNoise_color = [1,1,1,1];
	"RscInterlacing" cutrsc ["RscInterlacing","plain"];
	uisleep 0.5;

	// Флаг завершения
	publicVariable "endEffectDone";
	endEffectDone = true;
};
*/

// Только сервер выполняет основной сценарий
if (!isServer) exitWith {};

[] spawn {
	// Ожидание сигнала запуска финала
	publicVariable "endwin";
	waitUntil { !isNil "endwin" };

	// Эффекты землетрясения
	setAccTime 1;
	[1] remoteExec ["BIS_fnc_earthquake", 0];
	sleep 1;
	[3] remoteExec ["BIS_fnc_earthquake", 0];
	sleep 6; 

	// Отключение музыки играющей сейчас и динамической музыки
	[] spawn {
		while {true} do {
			if ((player getVariable ["isMusicActive", -1]) isEqualTo -1) then {
				player setVariable ["isMusicActive", 0, true];
			};
			sleep 0.1;
		};
	};
	1 fadeMusic 0;
	sleep 1;

	// Создание скрытых юнитов для диалогов
	private _hqGrp = createGroup west;
	private _hqUnit = _hqGrp createUnit ["B_officer_F", [0,0,0], [], 0, "NONE"];
	_hqGrp setGroupIdGlobal ["Перекресток"];
	_hqUnit setVehicleVarName "hqUnit";
	missionNamespace setVariable ["hqUnit", _hqUnit];
	_hqUnit setName "Перекресток";
	_hqUnit hideObjectGlobal true;
	_hqUnit enableSimulationGlobal false;

	private _grp1 = createGroup west;
	private _unit1 = _grp1 createUnit ["B_Soldier_F", [0,0,0], [], 0, "NONE"];
	_grp1 setGroupIdGlobal ["Браво 2-2"];
	_unit1 setVehicleVarName "bravo22";
	missionNamespace setVariable ["bravo22", _unit1];
	_unit1 setName "Браво 2-2";
	_unit1 hideObjectGlobal true;
	_unit1 enableSimulationGlobal false;

	private _grp2 = createGroup west;
	private _unit2 = _grp2 createUnit ["B_Soldier_F", [0,0,0], [], 0, "NONE"];
	_grp2 setGroupIdGlobal ["Дельта 1-9"];
	_unit2 setVehicleVarName "delta19";
	missionNamespace setVariable ["delta19", _unit2];
	_unit2 setName "Дельта 1-9";
	_unit2 hideObjectGlobal true;
	_unit2 enableSimulationGlobal false;

	// Воспроизведение финальной музыки
	["LeadTrack06_F_EPC"] remoteExec ["playMusic", 0];
	// Сохраняем стартовое время
	private _startTime = time;

	// Массив событий: [время_в_секундах, код]
	private _events = [
		[8, {
			private _unit1 = missionNamespace getVariable "bravo22";
			private _hqUnit = missionNamespace getVariable "hqUnit";

			[_unit1, "Браво 2-2 Перекрестку. Нас тут сильно тряхнуло. Наблюдаем как группа CSAT спешно эвакуируют что-то на грузовом транспорте под прикрытием AAF. Приказы?"] remoteExec ["sideChat", 0];
			sleep 5;
			[_hqUnit, "Браво 2-2, можете вступить в бой и захватить транспорт?"] remoteExec ["sideChat", 0];
			sleep 5;
			[_unit1, "У нас есть пострадавшие от толчка но мы постараемся."] remoteExec ["sideChat", 0];
			sleep 5;
			[_hqUnit, "Понял вас, 2-2."] remoteExec ["sideChat", 0];
		}],
		[44, {
			private _unit1 = missionNamespace getVariable "bravo22";
			private _hqUnit = missionNamespace getVariable "hqUnit";
			private _unit2 = missionNamespace getVariable "delta19";

			[_unit1, "Это Браво 2-2, мы находимся под сильным огнем..."] remoteExec ["sideChat", 0];
			sleep 5;
			[_hqUnit, "2-2, удерживайте позиции. Направляю к вам воздушную поддержку. Позывной Дельта 1-9."] remoteExec ["sideChat", 0];
			sleep 6;
			[_unit2, "Дельта 1-9 в воздухе. Время прибытия на позицию - 45 секунд."] remoteExec ["sideChat", 0];
			sleep 6;
			[_hqUnit, "Всем отрядам — закрепиться и ожидать дальнейших распоряжений! У нас тут может быть проблема."] remoteExec ["sideChat", 0];
		}],
		[62, {
			private _pos = getPosASL (allPlayers select 0);

			jet1 = createVehicle ["B_Plane_Fighter_01_F", [_pos select 0, (_pos select 1) - 1000, 80], [], 0, "FLY"];
			jet2 = createVehicle ["B_Plane_Fighter_01_F", [(_pos select 0) + 50, (_pos select 1) - 1000, 80], [], 0, "FLY"];

			createVehicleCrew jet1;
			createVehicleCrew jet2;

			jet1 setDir 0;
			jet2 setDir 0;

			jet1 setVelocity [0, 300, 0];
			jet2 setVelocity [0, 300, 0];

			[] spawn {
				sleep 60;
				if (!isNull jet1) then { deleteVehicle jet1 };
				if (!isNull jet2) then { deleteVehicle jet2 };
			};
		}],
		[79, {
			private _unit1 = missionNamespace getVariable "bravo22";
			private _hqUnit = missionNamespace getVariable "hqUnit";
			private _unit2 = missionNamespace getVariable "delta19";

			[_unit1, "2-2 Перекрестку. AAF спешно отступают. Колонна CSAT двигается от лагеря на север. Дельта 1-9 вы их видите?"] remoteExec ["sideChat", 0];
			sleep 5;
			[_unit2, "Подтверждаем, видим колонну и отступающие войска AAF. Перекресток, запрашиваю разрешение открыть огонь."] remoteExec ["sideChat", 0];
			sleep 4;
			[_hqUnit, "Ожидайте."] remoteExec ["sideChat", 0];
			sleep 9.7;
			[_hqUnit, "Всем отрядам, прекратить огонь. AAF формально капитулировали, Акхантерос лично сообщил. CSAT также объявили прекращение огня."] remoteExec ["sideChat", 0];
			sleep 2;
			[_hqUnit, "Повторяю, всем отрядам. Прекратить огонь!"] remoteExec ["sideChat", 0];
			sleep 1;
			//[_hqUnit, "Керри, вас тоже это касается."] remoteExec ["sideChat", 0];

			{
				_x setFriend [west, 1];
				west setFriend [_x, 1];
			} forEach [east, independent, civilian];
		}],
		[94, {
			{
				_x setTaskState "SUCCEEDED";
				["TaskSucceeded", [_x]] remoteExec ["BIS_fnc_showNotification", 0];
			} forEach (player call BIS_fnc_tasksUnit);

			endEffectDone = false;
			publicVariable "endEffectDone";
			sleep 16.5;
			
			[] remoteExec ["FLO_fnc_endEffects", 0];
			waitUntil { endEffectDone };
			sleep 3;

			markasfinishedonsteam;
			activateKey format ["BIS_%1.%2_done", missionName, worldName];
			["END1"] remoteExec ["endMission", 0, true];
		}]
	];

	// Запуск событий
	{
		private _delay = _x select 0;
		private _code = _x select 1;
		[_startTime, _delay, _code] spawn {
			params ["_start", "_offset", "_fn"];
			waitUntil { time >= (_start + _offset) };
			call _fn;
		};
	} forEach _events;

};
