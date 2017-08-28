#include "Enemies.h"

OctorockBlack::OctorockBlack(Arduboy2 &arduboy, Player &player) {
  this->ardu = &arduboy;
  this->player = &player;
}

void OctorockBlack::draw() {
  if (direction == 0) {
      
  } else if (direction == 1) {
    
  } else if (direction == 2) {
    
  } else if (direction == 3) {
    
  }
}

void OctorockBlack::action() {
    if(x < player->GetX()) { x++; }
    if(x > player->GetX()) { x--; }
    if(y < player->GetY()) { y++; }
    if(y > player->GetY()) { y--; }
}

