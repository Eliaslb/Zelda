#include "Maps.h"

M_test::M_test(Arduboy2 &arduboy, Player &p, OctorockBlack &octorockBlack){
  ardu = &arduboy; 
  player = &p;
  this->octorockBlack = &octorockBlack;
}

void M_test::init(){
  scrollx = 1;
  scrolly = 7;
  
}

void M_test::room1(){

  //Interactions

  //Doors

  //Enemies
  
  //Walls
  ardu->drawBitmap(scrollx,scrolly,StoneWall1,16,16,BLACK);
  ardu->drawBitmap(scrollx+16,scrolly,StoneWall1,16,16,BLACK);
  ardu->drawBitmap(scrollx+32,scrolly,StoneWall1,16,16,BLACK);
  ardu->drawBitmap(scrollx+48,scrolly,StoneWall1,16,16,BLACK);
  ardu->drawBitmap(scrollx+64,scrolly,StoneWall1,16,16,BLACK);
  ardu->drawBitmap(scrollx+80,scrolly,StoneWall1,16,16,BLACK);
  ardu->drawBitmap(scrollx+96,scrolly,StoneWall1,16,16,BLACK);
  ardu->drawBitmap(scrollx+112,scrolly,StoneWall1,16,16,BLACK);
  ardu->drawBitmap(scrollx,scrolly+100,StoneWall1,16,16,BLACK);  
}

void M_test::incScrollX(){
  scrollx += 1;
}

void M_test::incScrollY(){
  scrolly += 1;
}

void M_test::decScrollX(){
  scrollx -= 1;
}

void M_test::decScrollY(){
  scrolly -= 1;
}

byte M_test::GetScrollX(){
  return scrollx;
}

byte M_test::GetScrollY(){
  return scrolly;
}

