#ifndef Animations_h
#define Animations_h

#include <Arduboy2.h>
#include "Bitmaps.h"

class Animation2 {
public:
  Animation2(Arduboy2 &arduboy);
  void play(int x, int y);
  void setSpeed(int newspeed);
  
  byte speed;
  byte length = 2;
  bool playing;
  byte currentFrame;
  
  uint8_t *bitmap1;
  uint8_t *bitmap2;
  
  byte bitmapwidth = 16;
  byte bitmapheight = 16;  
  byte color;
private:
  Arduboy2 *ardu;

};

#endif //_Animations_h
