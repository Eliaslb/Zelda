#ifndef Defines_h
#define Defines_h

//#include <Arduboy2.h>
//#include "Utils.h"

//-------------------------------------------[ Game Main ]----------------------------------------------

#define FPS 60

int gamestate;

enum Gamestate_e {
  GS_Playing,
  GS_Paused,
  GS_Menu, 
};


//-------------------------------------------[ Debug ]----------------------------------------------

const byte Debug_CPU = 1; //If debug ... is on
const byte Debug_RAM = 1;
const byte Debug_Cheat = 1;
const byte Debug_Hitbox = 1;
const byte Debug_Log = 1;
const byte Debug_Pos = 1;
const byte Debug_PlayerInfo = 1;


//-------------------------------------------[ Menu ]----------------------------------------------

int menustate;

enum Menuscreens_e {
  Title,
  FileSelect,
  Save,
  Remove
};


//-------------------------------------------[ Player ]----------------------------------------------

enum Playerstate_e {
  PS_Walking,
  PS_Slashing,
  PS_Item,
  PS_Inventory,  
  PS_Idle
};


//-------------------------------------------[ Map ]----------------------------------------------

enum Mapname_e {
  Overworld,
};

//-------------------------------------------[ Text ]----------------------------------------------

//Textbox_t Testbox;
//Testbox.text = "Hej, detta är en test textbox";
//Testbox.maxshowamount = 1;

//-------------------------------------------[ TileMaps ]----------------------------------------------

#define TILECOLUMNS 3

//const int TileSizeX = 16;
//const int TileSizeY = 16;
//
//typedef enum { //Tiles = 16x16
//  BlankWhite  
//} TileType_t;

#endif //_Defines_h



