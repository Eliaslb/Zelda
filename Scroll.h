#ifndef Scroll_h
#define Scroll_h

#include <Arduboy2.h>

class Scroll {
public:
  Scroll(Arduboy2 &arduboy);
  int OffsetX(); //Returns scroll pos for drawing with scroll
  int OffsetY();

  void IncX();
  void DecX();
  void IncY();
  void DecY();

  int GetX(); //Same as OffsetX(), but it's more readable if you use OffsetX() when you draw
  int GetY(); //Same as OffsetY(), but it's more readable if you use OffsetY() when you draw
private:
  Arduboy2 *ardu;
  int x;
  int y;
};

#endif //_Scroll_h
