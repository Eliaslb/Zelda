#ifndef Enemies_h
#define Enemies_h

#include <Arduboy2.h>
#include "Bitmaps.h"
#include "Player.h"

class Enemy {
  public:
    void draw();

    void action(); //What happens all the time, like fighting when near player

    void death();

    void attack();

    void move();

    void setPos(int x, int y);
    int getX();
    int getY();
    
    void decHP(int amount);
    void incHP(int amount);

    void setVisibility(bool visible);
  
  private:
    int x;
    int y;

    byte direction;

    byte movement;

    bool visible = true; //If you can see the enemy

    byte damage; //How much damage it can attack with
    byte hp; //How much HP it has

    Rect hitbox;
};

class OctorockBlack : public Enemy{
public:
  OctorockBlack(Arduboy2 &arduboy, Player &player);
  void draw();
  void action();

  void setPos(int x, int y);
  int getX();
  int getY();

  void decHP(int amount);
  void incHP(int amount);

  void visibilityInvert(); 
  
private:
  Arduboy2 *ardu;
  Player *player;

  int x;
  int y;

  int direction;

  int movement;

  bool visible = true; //If you can see the enemy

  int damage;
  int hp;

  Rect hitbox;
};


#endif //_Enemies_h
