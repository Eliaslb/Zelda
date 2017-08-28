#include "TileMaps.h"
//#include "Defines.h"

TileMapReader::TileMapReader(Arduboy2 &arduboy, Scroll &scroll) {
    ardu = &arduboy; 
    mapscroll = &scroll; 
}

void TileMapReader::drawTileMap(int tilemap[][3],int rows, int columns, int startx, int starty) {
  for (int i = 0; i < rows; i++) {
    for (int k = 0; k < columns; k++) {
      if (tilemap[i][k] == 0) {
        ardu->fillRect(startx + mapscroll->OffsetX() + k*16, starty + mapscroll->OffsetY() + i*16,16,16,BLACK);    
      } else if (tilemap[i][k] == 1) {
        ardu->fillRect(startx + mapscroll->OffsetX() + k*16, starty + mapscroll->OffsetY() + i*16,16,16,WHITE);
      }
    }      
  }
}


