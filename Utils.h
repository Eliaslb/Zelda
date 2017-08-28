#ifndef Utils_h
#define Utils_h

//#include "Defines.h"
#include "Player.h"


class Timer {
public:
  Timer(Arduboy2 &arduboy);
  void IncTimer();
  void StopTimer();
  bool ElapsedTimeMT(); //Check if time has gone by, MT = More than, if timer is more than stoppedtimer
  bool ElapsedTimeEQ(); //Check if time has gone by, EQ = Equals, if timer is equal to stoppedtimer, so only once
  
  
private:
  Arduboy2 *ardu;
  int timer;
  int stoppedtimer;

};

//Alla hitboxar/object av typen ska vara i en lista så att for loop blir enklare
class Collision {
public:
  Collision(Arduboy2 &arduboy);
  void PlayerToEnemyCol();
  void SwordToEnemyCol();
  void PlayerToWallCol();
  void PlayerToInteractableCol(); //Door, Button, Pushable object
  
private:
  Arduboy2 *ardu;

};

typedef struct {
  Rect pos;
  bool active;
} Hitbox_t;


typedef struct {
  //int x; //Ska nog inte behövas om inte olika positioner på textbox
  //int y;
  String text;

  int showamount = 0; //Kan restricta antal men också ha oändlig
  int maxshowamount;
  
} Textbox_t;

class TextBox {
public:
  TextBox(Arduboy2 &arduboy);
  void make(String Text); //To make fast popup
  void display(Textbox_t tb);
private:
  Arduboy2 *ardu;

};


class CoreCheck {
public:
  CoreCheck(Arduboy2 &arduboy);
  int freeRam();
  
private:
  Arduboy2 *ardu;

};


typedef struct {
  String MenuChooses[5];
  int amountChooses; //How many too loop when writing
} Menu_t;

class Menu {
public:
  Menu(Arduboy2 &arduboy);
  DrawMenu(); //Physics and Drawing of menu_t
  
private:
  Arduboy2 *ardu;

};


#endif
