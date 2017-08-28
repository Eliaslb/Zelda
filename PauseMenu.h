#ifndef PauseMenu_h
#define PauseMenu_h

#include <Arduboy2.h>
#include "Bitmaps.h"

//16x8,  8 rutor, 16 pixlar
typedef struct {
  byte x;
  byte y;
  bool walkable;
  bool cursorOn;
  unsigned char Icon[] PROGMEM;
}Grid_t;

const byte InvGridX = 8;
const byte InvGridY = 4;

class PauseMenu {
public:
  PauseMenu(Arduboy2 &arduboy);
  void draw();
  
  void cursorLeft();
  void cursorRight();
  void cursorUp();
  void cursorDown();
  
private:
  Arduboy2 *ardu;
  byte page; //Map or inventory
  Grid_t InventoryGrid[8][4]; //32 items and armor select
  byte x; //Cordinates in array, not screen
  byte y;
};

#endif //_PauseMenu_h
