#ifndef Maps_h
#define Maps_h

#include <Arduboy2.h>
#include "Bitmaps.h"
#include "Player.h"
#include "Enemies.h"



class M_Overworld {
public:
  M_Overworld(Arduboy2 &arduboy);
  
private:
  Arduboy2 *ardu;
};


class M_test {
public:
  M_test(Arduboy2 &arduboy, Player &p, OctorockBlack &ocktorockBlack);

  void init(); //When entering dungeon first time
  
  void room1();
  void room2();

  void incScrollX();
  void decScrollX();
  void incScrollY();
  void decScrollY();

  byte GetScrollX();
  byte GetScrollY();

  bool touchingWall(int x, int y, int side);
private:
  Arduboy2 *ardu;
  Player *player;
  OctorockBlack *octorockBlack;
  byte scrollx; //Scrollpos on map
  byte scrolly;
  byte currentRoom;

  byte currentRoomWallLeft; //Each room sets this
  byte currentRoomWallRight;
  byte currentRoomWallUp;
  byte currentRoomWallDown;
};

#endif //_Maps_h
