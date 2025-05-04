// fnc_endEffects.sqf
// Локальная функция запуска финальных визуальных эффектов

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
	private _ppColor ppEffectEnable true;
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
