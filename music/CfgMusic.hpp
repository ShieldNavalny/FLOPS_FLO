// Класс музыки. Пример классов для динамической музыки: - Shield 
//class Track_Name
//{
////name = "Track Name (Best left in Comment mode)";
//sound[] = {"bf_Adapt\music\track_name.ogg",1.0,1.0};
//duration=length of audio in seconds;
//parameters[]    = {"parameter"}; 
//};
//
//here are the list of parameters that can be used to create arrays

//-- for infantry --
//during daylight "daytime"
//during night "nighttime"
//during rain "rain"
//during fog "fog"
//during skydiving "skydive"
//during scuba diving "scubadive"


//-- for vehicles --
//for cars "car"
//for tanks "tank"
//for boats "boat"
//for submarines "submarine"
//for helicopters "helicopter"
//for planes "plane"

//-- for combat -- might do more
//for infantry combat "infantrycombat"
//for fog infantry combat "infantryfogcombat"
//for get away or vehicle combat "vehiclecombat

// Импорт оригинальных композиций A3 и A1/A2/A2OA
import Track_P_14 from CfgMusic;
import LeadTrack01c_F from CfgMusic;
import LeadTrack04a_F from CfgMusic;
import LeadTrack06_F from CfgMusic;
import LeadTrack02_F from CfgMusic;
import LeadTrack03_F from CfgMusic;
import LeadTrack05_F from CfgMusic;
import AmbientTrack04a_F from CfgMusic;
import LeadTrack04_F from CfgMusic;
import AmbientTrack01_F from CfgMusic;
import AmbientTrack01a_F from CfgMusic;
import AmbientTrack01b_F from CfgMusic;
import AmbientTrack03_F from CfgMusic;
import AmbientTrack04_F from CfgMusic;
import BackgroundTrack01_F from CfgMusic;
import BackgroundTrack01a_F from CfgMusic;
import BackgroundTrack02_F from CfgMusic;
import LeadTrack01_F_EPA from CfgMusic;
import LeadTrack03_F_EPA from CfgMusic;
import EventTrack01_F_EPA from CfgMusic;
import EventTrack02_F_EPA from CfgMusic;
import EventTrack02a_F_EPA from CfgMusic;
import EventTrack03_F_EPA from CfgMusic;
import EventTrack03a_F_EPA from CfgMusic;
import LeadTrack01_F_EPB from CfgMusic;
import LeadTrack01a_F_EPB from CfgMusic;
import LeadTrack02_F_EPB from CfgMusic;
import LeadTrack02a_F_EPB from CfgMusic;
import LeadTrack03_F_EPB from CfgMusic;
import LeadTrack03a_F_EPB from CfgMusic;
import LeadTrack04_F_EPB from CfgMusic;
import EventTrack01_F_EPB from CfgMusic;
import EventTrack01a_F_EPB from CfgMusic;
import EventTrack02_F_EPB from CfgMusic;
import EventTrack02a_F_EPB from CfgMusic;
import EventTrack03_F_EPB from CfgMusic;
import EventTrack04_F_EPB from CfgMusic;
import EventTrack04a_F_EPB from CfgMusic;
import EventTrack03a_F_EPB from CfgMusic;
import AmbientTrack01_F_EPB from CfgMusic;
import LeadTrack01_F_EPC from CfgMusic;
import LeadTrack02_F_EPC from CfgMusic;
import LeadTrack03_F_EPC from CfgMusic;
import LeadTrack04_F_EPC from CfgMusic;
import LeadTrack05_F_EPC from CfgMusic;
import EventTrack01_F_EPC from CfgMusic;
import EventTrack02_F_EPC from CfgMusic;
import EventTrack02b_F_EPC from CfgMusic;
import EventTrack03_F_EPC from CfgMusic;
import BackgroundTrack01_F_EPC from CfgMusic;
import BackgroundTrack02_F_EPC from CfgMusic;
import BackgroundTrack03_F_EPC from CfgMusic;
import Defcon from CfgMusic;
import LeadTrack01_F_Mark from CfgMusic;
import LeadTrack02_F_Bootcamp from CfgMusic;
import LeadTrack02_F_Mark from CfgMusic;
import LeadTrack01_F_EXP from CfgMusic;
import LeadTrack03_F_EXP from CfgMusic;
import AmbientTrack01_F_EXP from CfgMusic;
import AmbientTrack02_F_EXP from CfgMusic;
import LeadTrack01_F_Jets from CfgMusic;
import LeadTrack02_F_Jets from CfgMusic;
import EventTrack01_F_Jets from CfgMusic;
import LeadTrack01_F_Malden from CfgMusic;
import LeadTrack02_F_Malden from CfgMusic;
import AmbientTrack02_F_Orange from CfgMusic;
import EventTrack01_F_Orange from CfgMusic;
import AmbientTrack01_F_Orange from CfgMusic;
import AmbientTrack01a_F_Tacops from CfgMusic;
import AmbientTrack01b_F_Tacops from CfgMusic;
import AmbientTrack02a_F_Tacops from CfgMusic;
import AmbientTrack02b_F_Tacops from CfgMusic;
import AmbientTrack03a_F_Tacops from CfgMusic;
import AmbientTrack04a_F_Tacops from CfgMusic;
import AmbientTrack04b_F_Tacops from CfgMusic;
import EventTrack01a_F_Tacops from CfgMusic;
import EventTrack01b_F_Tacops from CfgMusic;
import EventTrack02a_F_Tacops from CfgMusic;
import EventTrack02b_F_Tacops from CfgMusic;
import EventTrack03a_F_Tacops from CfgMusic;
import EventTrack03b_F_Tacops from CfgMusic;
import LeadTrack01_F_Tank from CfgMusic;
import LeadTrack02_F_Tank from CfgMusic;
import LeadTrack03_F_Tank from CfgMusic;
import LeadTrack05_F_Tank from CfgMusic;
import LeadTrack06_F_Tank from CfgMusic;
import Music_Menu_Contact from CfgMusic;
import Music_Theme_Contact from CfgMusic;
import Music_Probe_Discovered from CfgMusic;
import Music_Arrival from CfgMusic;
import Music_Roaming_Night from CfgMusic;
import Music_Roaming_Night_02 from CfgMusic;
import Music_Roaming_Day from CfgMusic;
import Music_Roaming_Day_02 from CfgMusic;
import Music_Battle_Alien from CfgMusic;
import Music_Battle_Human from CfgMusic;
import Music_Russian_Theme from CfgMusic;
import AmbientTrack04b_F from CfgMusic;
import Music_Outro2_Ending from CfgMusic;
import Music_Intro_02_Emp_Tension_01 from CfgMusic;
import Music_Hostile_Drone_Close_01 from CfgMusic;
import LeadTrack02a_F_EXP from CfgMusic;
import LeadTrack05_F_EXP from CfgMusic;
import LeadTrack03_F_Jets from CfgMusic;
import LeadTrack04_F_EPA from CfgMusic;
import AmbientTrack04_F_EXP from CfgMusic;

//REACTION FORCES IMPORT (COMMENT OUT IF YOU DON'T HAVE ONE)
import TitleTrack01_RF from CfgMusic;
import music_action_full_RF from CfgMusic;
import AmbientTrack02c_RF from CfgMusic;
import music_combat_full_RF from CfgMusic;
import music_darkaction_full_RF from CfgMusic;
import music_hero_full_RF from CfgMusic;
import AmbientTrack01_RF from CfgMusic;
import AmbientTrack02a_RF from CfgMusic;
import AmbientTrack02b_RF from CfgMusic;
import music_atmospheric_full_RF from CfgMusic;
import music_calm_full_RF from CfgMusic;
import music_night_full_RF from CfgMusic;
import jukebox_calm02_RF from CfgMusic;
import jukebox_calm03_RF from CfgMusic;

//Aegis Mod import (COMMENT OUT IF YOU DON'T HAVE ONE)
import LeadTrack01_F_Aegis from CfgMusic;
import LeadTrack03_F_Aegis from CfgMusic;
import LeadTrack02_F_Aegis from CfgMusic;

//Lxws (Wester Sahara) (COMMENT OUT IF YOU DON'T HAVE ONE) 
import LeadTrack01_lxWS from CfgMusic;
import jukebox_e1_lxWS from CfgMusic;
import jukebox_e3_lxWS from CfgMusic;
import jukebox_e2_lxWS from CfgMusic;
import jukebox_t1_lxWS from CfgMusic;
import jukebox_t2_lxWS from CfgMusic;


class CfgMusic
{
	class Empty
	{
		name = "Empty Sound";
		sound[] = {"Sounds\empty.ogg",1.0,1.0};
		duration=1;
	};
	class Dynamic_Track_P_14: Track_P_14
	{	
		parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine"};
		sound[]=
		{
			"@a3\Music_F_Oldman\music\radio\pop\Track_P_14.ogg",
			1,
			1
		};
	};
	class Dynamic_LeadTrack01c_F: LeadTrack01c_F
	{	
		parameters[] = {"boat", "tank", "helicopter", "plane", "skydive", "car"};
		sound[]=
		{
			"@a3\music_f\Music\LeadTrack01c_F.ogg",
			1,
			1
		};
	};
	class Dynamic_LeadTrack02_F: LeadTrack02_F
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f\Music\LeadTrack02_F.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack03_F: LeadTrack03_F
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f\Music\LeadTrack03_F.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack05_F: LeadTrack05_F
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f\Music\LeadTrack05_F.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack04a_F: AmbientTrack04a_F
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f\Music\ambientTrack04a_F.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack04_F:  LeadTrack04_F
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f\Music\LeadTrack04_F.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack04a_F:  LeadTrack04a_F
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f\Music\LeadTrack04a_F.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack06_F: LeadTrack06_F
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f\Music\LeadTrack06_F.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack01_F: AmbientTrack01_F
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f\Music\ambientTrack01_F.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack01a_F: AmbientTrack01a_F
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f\Music\ambientTrack01a_F.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack01b_F: AmbientTrack01b_F
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f\Music\ambientTrack01b_F.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack03_F: AmbientTrack03_F
	{    
    	parameters[] = {"daytime", "car", "tank"};
    	sound[]=
    	{
       		"@a3\music_f\Music\ambientTrack03_F.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack04_F: AmbientTrack04_F
	{    
    	parameters[] = {"nighttime", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f\Music\ambientTrack04_F.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_BackgroundTrack01_F: BackgroundTrack01_F
	{    
    	parameters[] = {"scubadive", "submarine"};
    	sound[]=
    	{
       		"@a3\music_f\Music\BackgroundTrack01_F.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_BackgroundTrack01a_F: BackgroundTrack01a_F
	{    
    	parameters[] = {"scubadive", "submarine"};
    	sound[]=
    	{
       		"@a3\music_f\Music\BackgroundTrack01a_F.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_BackgroundTrack02_F: BackgroundTrack02_F
	{    
    	parameters[] = {"vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f\Music\BackgroundTrack02_F.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack01_F_EPA: LeadTrack01_F_EPA
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_epa\Music\LeadTrack01_F_EPA.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack03_F_EPA: LeadTrack03_F_EPA
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_epa\Music\LeadTrack03_F_EPA.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack01_F_EPA: EventTrack01_F_EPA
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_epa\Music\EventTrack01_F_EPA.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack02_F_EPA: EventTrack02_F_EPA
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_epa\Music\EventTrack02_F_EPA.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack02a_F_EPA: EventTrack02a_F_EPA
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_epa\Music\EventTrack02a_F_EPA.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack03_F_EPA: EventTrack03_F_EPA
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_epa\Music\EventTrack03_F_EPA.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack03a_F_EPA: EventTrack03a_F_EPA
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_epa\Music\EventTrack03a_F_EPA.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack01_F_EPB: LeadTrack01_F_EPB
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\LeadTrack01_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack01a_F_EPB: LeadTrack01a_F_EPB
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\LeadTrack01a_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack02_F_EPB: LeadTrack02_F_EPB
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\LeadTrack02_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack02a_F_EPB: LeadTrack02a_F_EPB
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\LeadTrack02a_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack03_F_EPB: LeadTrack03_F_EPB
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\LeadTrack03_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack03a_F_EPB: LeadTrack03a_F_EPB
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\LeadTrack03a_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack04_F_EPB: LeadTrack04_F_EPB
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\LeadTrack04_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack01_F_EPB: EventTrack01_F_EPB
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\EventTrack01_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack01a_F_EPB: EventTrack01a_F_EPB
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\EventTrack01a_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack02_F_EPB: EventTrack02_F_EPB
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\EventTrack02_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack02a_F_EPB: EventTrack02a_F_EPB
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\EventTrack02a_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack03_F_EPB: EventTrack03_F_EPB
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\EventTrack03_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack04_F_EPB: EventTrack04_F_EPB
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\EventTrack04_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack04a_F_EPB: EventTrack04a_F_EPB
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\EventTrack04a_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack03a_F_EPB: EventTrack03a_F_EPB
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\EventTrack03a_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack01_F_EPB: AmbientTrack01_F_EPB
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_epb\Music\EventTrack03a_F_EPB.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack01_F_EPC: LeadTrack01_F_EPC
	{    
    	parameters[] = {"nighttime", "rain", "fog", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_EPC\Music\LeadTrack01_F_EPC.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack02_F_EPC: LeadTrack02_F_EPC
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_EPC\Music\LeadTrack02_F_EPC.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack03_F_EPC: LeadTrack03_F_EPC
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_EPC\Music\LeadTrack03_F_EPC.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack04_F_EPC: LeadTrack04_F_EPC
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_EPC\Music\LeadTrack04_F_EPC.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack05_F_EPC: LeadTrack05_F_EPC
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_EPC\Music\LeadTrack05_F_EPC.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack01_F_EPC: EventTrack01_F_EPC
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_EPC\Music\EventTrack01_F_EPC.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack02_F_EPC: EventTrack02_F_EPC
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_EPC\Music\EventTrack02_F_EPC.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack02b_F_EPC: EventTrack02b_F_EPC
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_EPC\Music\EventTrack02b_F_EPC.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack03_F_EPC: EventTrack03_F_EPC
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_EPC\Music\EventTrack03_F_EPC.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_BackgroundTrack01_F_EPC: BackgroundTrack01_F_EPC
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_EPC\Music\BackgroundTrack01_F_EPC.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_BackgroundTrack02_F_EPC: BackgroundTrack02_F_EPC
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_EPC\Music\BackgroundTrack02_F_EPC.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_BackgroundTrack03_F_EPC: BackgroundTrack03_F_EPC
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_EPC\Music\BackgroundTrack03_F_EPC.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_Defcon: Defcon
	{    
    	parameters[] = {"nighttime", "rain", "fog", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"A3\Missions_F_EPA\data\music\defcon.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack02_F_Bootcamp: LeadTrack02_F_Bootcamp
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_Bootcamp\Music\LeadTrack02_F_Bootcamp.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack01_F_Mark: LeadTrack01_F_Mark
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_f_Mark\Music\LeadTrack01_F_Mark.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack02_F_Mark: LeadTrack02_F_Mark
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_f_Mark\Music\LeadTrack02_F_Mark.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack01_F_EXP: LeadTrack01_F_EXP
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_exp\Music\LeadTrack01_F_EXP.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack03_F_EXP: LeadTrack03_F_EXP
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\music_f_exp\Music\LeadTrack03_F_EXP.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack01_F_EXP: AmbientTrack01_F_EXP
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_exp\Music\ambientTrack01_F_EXP.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack02_F_EXP: AmbientTrack02_F_EXP
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\music_f_exp\Music\ambientTrack02_F_EXP.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack01_F_Jets: LeadTrack01_F_Jets
	{    
    	parameters[] = {"helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\Music_F_Jets\Music\LeadTrack01_F_Jets.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack02_F_Jets: LeadTrack02_F_Jets
	{    
    	parameters[] = {"helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\Music_F_Jets\Music\LeadTrack02_F_Jets.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack01_F_Jets: EventTrack01_F_Jets
	{    
    	parameters[] = {"helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\Music_F_Jets\Music\EventTrack01_F_Jets.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack01_F_Malden: LeadTrack01_F_Malden
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_F_Argo\Music\LeadTrack01_F_Malden.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack02_F_Malden: LeadTrack02_F_Malden
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_F_Argo\Music\LeadTrack02_F_Malden.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack02_F_Orange: AmbientTrack02_F_Orange
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\Music_F_Orange\Music\ambientTrack02_F_Orange.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack01_F_Orange: EventTrack01_F_Orange
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\Music_F_Orange\Music\EventTrack01_F_Orange.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack01_F_Orange: AmbientTrack01_F_Orange
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\Music_F_Orange\Music\ambientTrack01_F_Orange.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack01a_F_Tacops: AmbientTrack01a_F_Tacops
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\Music_F_Tacops\Music\ambientTrack01a_F_Tacops.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack02a_F_Tacops: AmbientTrack02a_F_Tacops
	{    
    	parameters[] = {"nighttime", "rain", "fog"};
    	sound[]=
    	{
       		"@a3\Music_F_Tacops\Music\ambientTrack02a_F_Tacops.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack02b_F_Tacops: AmbientTrack02b_F_Tacops
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\Music_F_Tacops\Music\ambientTrack02b_F_Tacops.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack03a_F_Tacops: AmbientTrack03a_F_Tacops
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\Music_F_Tacops\Music\ambientTrack03a_F_Tacops.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack04a_F_Tacops: AmbientTrack04a_F_Tacops
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\Music_F_Tacops\Music\ambientTrack04a_F_Tacops.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_AmbientTrack04b_F_Tacops: AmbientTrack04b_F_Tacops
	{    
    	parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine", "car", "tank", "boat", "submarine", "helicopter", "plane"};
    	sound[]=
    	{
       		"@a3\Music_F_Tacops\Music\ambientTrack04b_F_Tacops.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack01a_F_Tacops: EventTrack01a_F_Tacops
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_F_Tacops\Music\EventTrack01a_F_Tacops.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack01b_F_Tacops: EventTrack01b_F_Tacops
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_F_Tacops\Music\EventTrack01b_F_Tacops.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack02a_F_Tacops: EventTrack02a_F_Tacops
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_F_Tacops\Music\EventTrack02a_F_Tacops.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack02b_F_Tacops: EventTrack02b_F_Tacops
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_F_Tacops\Music\EventTrack02b_F_Tacops.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack03a_F_Tacops: EventTrack03a_F_Tacops
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_F_Tacops\Music\EventTrack03a_F_Tacops.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_EventTrack03b_F_Tacops: EventTrack03b_F_Tacops
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_F_Tacops\Music\EventTrack03b_F_Tacops.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack01_F_Tank: LeadTrack01_F_Tank
	{    
    	parameters[] = {"vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_F_Tank\LeadTrack01_F_Tank.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack02_F_Tank: LeadTrack02_F_Tank
	{    
    	parameters[] = {"vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_F_Tank\LeadTrack02_F_Tank.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack03_F_Tank: LeadTrack03_F_Tank
	{    
    	parameters[] = {"tank"};
    	sound[]=
    	{
       		"@a3\Music_F_Tank\LeadTrack03_F_Tank.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack05_F_Tank: LeadTrack05_F_Tank
	{    
    	parameters[] = {"vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_F_Tank\LeadTrack05_F_Tank.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack06_F_Tank: LeadTrack06_F_Tank
	{    
    	parameters[] = {"tank"};
    	sound[]=
    	{
       		"@a3\Music_F_Tank\LeadTrack06_F_Tank.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_Music_Roaming_Night: Music_Roaming_Night
	{    
    	parameters[] = {"nighttime"};
    	sound[]=
    	{
       		"@a3\Music_F_Enoch\Music\Night_Eyes_Zero_One.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_Music_Roaming_Night_02: Music_Roaming_Night_02
	{    
    	parameters[] = {"nighttime"};
    	sound[]=
    	{
       		"@a3\Music_F_Enoch\Music\Night_Eyes_Zero_Two.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_Music_Music_Outro2_Ending: Music_Outro2_Ending
	{    
    	parameters[] = {"nighttime"};
    	sound[]=
    	{
       		"@a3\Music_F_Enoch\Music\Music_Outro2_Ending.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_Music_Roaming_Day: Music_Roaming_Day
	{    
    	parameters[] = {"rain", "fog"};
    	sound[]=
    	{
       		"@a3\Music_F_Enoch\Music\Sunrise_Zero_One.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_Music_Roaming_Day_02: Music_Roaming_Day_02
	{    
    	parameters[] = {"rain", "fog"};
    	sound[]=
    	{
       		"@a3\Music_F_Enoch\Music\Sunrise_Zero_Two.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_Music_Intro_02_Emp_Tension_01: Music_Intro_02_Emp_Tension_01
	{    
    	parameters[] = {"nighttime","rain", "fog"};
    	sound[]=
    	{
       		"@a3\Music_F_Enoch\Music\Music_Intro_02_Emp_Tension_01.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_Music_Hostile_Drone_Close_01: Music_Hostile_Drone_Close_01
	{    
    	parameters[] = {"nighttime","rain", "fog"};
    	sound[]=
    	{
       		"@a3\Music_F_Enoch\Music\Music_Hostile_Drone_Close_01.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_Music_Battle_Alien: Music_Battle_Alien
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_F_Enoch\Music\Contact.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_Music_Battle_Human: Music_Battle_Human
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_F_Enoch\Music\Infighting.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_Music_Russian_Theme: Music_Russian_Theme
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@a3\Music_F_Enoch\Music\Sharper_Claws.ogg",
       		1,
        	1
    	};
	};
	//
	//LXWS (Wester Sahara music) IF YOU DON'T HAVE ONE OR COMPAT - COMMENT OUT THE BLOCK
	//
		class Dynamic_LeadTrack01_lxWS: LeadTrack01_lxWS
	{    
    	parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
    	sound[]=
    	{
       		"@lxWS\music_f_lxWS\music\LeadTrack01_lxWS.ogg",
       		1,
        	1
    	};
	};
	class Dynamic_jukebox_e1_lxWS: jukebox_e1_lxWS
	{    
    	parameters[] = {"daytime", "tank", "helicopter", "plane", "skydive", "car"};
    	sound[]=
    	{
       		"@lxWS\music_f_lxWS\music\jukebox\e1.wss",
       		1,
        	1
    	};
	};
	class Dynamic_jukebox_e3_lxWS: jukebox_e3_lxWS
	{    
    	parameters[] = {"daytime", "tank", "helicopter", "plane", "skydive", "car"};
    	sound[]=
    	{
       		"@lxWS\music_f_lxWS\music\jukebox\e3.wss",
       		1,
        	1
    	};
	};
	class Dynamic_jukebox_e2_lxWS: jukebox_e2_lxWS
	{    
    	parameters[] = {"daytime", "tank", "helicopter", "plane", "skydive", "car"};
    	sound[]=
    	{
       		"@lxWS\music_f_lxWS\music\jukebox\e2.wss",
       		1,
        	1
    	};
	};
	class Dynamic_jukebox_t1_lxWS: jukebox_t1_lxWS
	{    
    	parameters[] = {"nighttime", "tank", "helicopter", "plane", "skydive", "car"};
    	sound[]=
    	{
       		"@lxWS\music_f_lxWS\music\tension\t1.wss",
       		1,
        	1
    	};
	};
	class Dynamic_jukebox_t2_lxWS: jukebox_t2_lxWS
	{    
    	parameters[] = {"daytime", "tank", "helicopter", "plane", "skydive", "car"};
    	sound[]=
    	{
       		"@lxWS\music_f_lxWS\music\tension\t2.wss",
       		1,
        	1
    	};
	};
	class Dynamic_LeadTrack02a_F_EXP: LeadTrack02a_F_EXP
	{
		parameters[] = {"infantrycombat"};
	};
	class Dynamic_LeadTrack05_F_EXP: LeadTrack05_F_EXP
	{
		parameters[] = {"infantrycombat"};
	};
	class Dynamic_LeadTrack03_F_Jets: LeadTrack03_F_Jets
	{
		parameters[] = {"plane","helicopter"};
	};
	class Dynamic_LeadTrack03_F_Aegis: LeadTrack03_F_Aegis
	{
		parameters[] = {"plane","helicopter"};
	};
	class Dynamic_LeadTrack02_F_Aegis: LeadTrack02_F_Aegis
	{
		parameters[] = {"plane","helicopter"};
	};
	class Dynamic_LeadTrack04_F_EPA: LeadTrack04_F_EPA
	{
		parameters[] = {"nighttime", "skydive", "car", "tank", "boat", "helicopter", "plane"};
	};
	class Dynamic_AmbientTrack04_F_EXP: AmbientTrack04_F_EXP
	{
		parameters[] = {"daytime"};
	};
	class Dynamic_LeadTrack01_F_Aegis: LeadTrack01_F_Aegis
	{
		parameters[] = {"daytime"};
	};
	//
	// REACTION FORCES MUSIC! IF YOU DON'T HAVE ONE COMMENT OUT THE BLOCK
	//
	class Dynamic_TitleTrack01_RF: TitleTrack01_RF
	{
		parameters[] = {"infantrycombat"};
	};
	class Dynamic_music_action_full_RF: music_action_full_RF
	{
		parameters[] = {"infantrycombat", "nighttime", "rain"};
	};
	class Dynamic_AmbientTrack02c_RF: AmbientTrack02c_RF
	{
		parameters[] = {"infantrycombat", "nighttime", "rain"};
	};
	class Dynamic_music_combat_full_RF: music_combat_full_RF
	{
		parameters[] = {"infantrycombat"};
	};
	class Dynamic_music_darkaction_full_RF: music_darkaction_full_RF
	{
		parameters[] = {"infantrycombat", "nighttime", "rain", "fog"};
	};
	class Dynamic_music_hero_full_RF: music_hero_full_RF
	{
		parameters[] = {"vehiclecombat"};
	};
	// REACTION FORCES - AMBIENTS
	class Dynamic_AmbientTrack01_RF: AmbientTrack01_RF
	{
		parameters[] = {"daytime", "nighttime"};
	};
	class Dynamic_AmbientTrack02a_RF: AmbientTrack02a_RF
	{
		parameters[] = {"nighttime"};
	};
	class Dynamic_AmbientTrack02b_RF: AmbientTrack02b_RF
	{
		parameters[] = {"nighttime"};
	};
	class Dynamic_music_atmospheric_full_RF: music_atmospheric_full_RF
	{
		parameters[] = {"daytime", "nighttime"};
	};
	class Dynamic_music_calm_full_RF: music_calm_full_RF
	{
		parameters[] = {"nighttime", "rain"};
	};
	class Dynamic_music_night_full_RF: music_night_full_RF
	{
		parameters[] = {"nighttime", "rain", "fog", "scubadive"};
	};
	class Dynamic_jukebox_calm02_RF: jukebox_calm02_RF
	{
		parameters[] = {"nighttime", "rain"};
	};
	class Dynamic_jukebox_calm03_RF: jukebox_calm03_RF
	{
		parameters[] = {"nighttime", "rain"};
	};
};