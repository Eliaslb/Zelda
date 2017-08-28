#ifndef TileMaps_h
#define TileMaps_h

#include <Arduboy2.h>
//#include "Defines.h"
#include "Bitmaps.h"
#include "Scroll.h"

const int TileSizeX = 16;
const int TileSizeY = 16;

//typedef enum { //Tiles = 16x16
  //BlankWhite 
//} TileType_t;

class TileMapReader {
public:
  TileMapReader(Arduboy2 &arduboy, Scroll &scroll);
  void drawTileMap(int tilemap[][3],int rows, int columns, int startx, int starty); //Rows and columns = Size of tilemap, startx,starty = starting drawpos
private:
  Arduboy2 *ardu;
  Scroll *mapscroll;
  int currentTileSet;
};

#endif //_TileMaps_h



//TileSets

typedef enum {
  Debug,
  Castle,
  Outside,
  Cave  
} AllTileSets_t;

typedef enum {
  BlackBlock,
  WhiteBlock  
} TS_Debug_t;

typedef enum {
  Wall1,
  Wall2,
  Wall3,
  Wall4  
}TS_Castle_t;

