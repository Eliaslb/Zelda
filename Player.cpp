#include "Player.h"

Player::Player(Arduboy2 &arduboy, Animation2 &PlayerLEFTanim1, Animation2 &PlayerRIGHTanim1, Animation2 &PlayerUPanim1, Animation2 &PlayerDOWNanim1)
{
    this->ardu = &arduboy;
    
    this->PlayerLEFTanim = &PlayerLEFTanim1;
    this->PlayerRIGHTanim = &PlayerRIGHTanim1;
    this->PlayerUPanim = &PlayerUPanim1;
    this->PlayerDOWNanim = &PlayerDOWNanim1;
    
    x = 64;
    y = 32;
}

void Player::draw(void){
if (Player::GetMovement() == 0) {
    if (Player::GetDirection() == 0) {
      PlayerLEFTanim->play(Player::GetX(),Player::GetY());          
    } else if (Player::GetDirection() == 1) {
      PlayerUPanim->play(Player::GetX(),Player::GetY());  
    } else if (Player::GetDirection() == 2) {
      PlayerRIGHTanim->play(Player::GetX(),Player::GetY());
    } else if (Player::GetDirection() == 3) {
      PlayerDOWNanim->play(Player::GetX(),Player::GetY());
    }
    
  } else if (Player::GetMovement() == 4) {
    
    if (Player::GetDirection() == 0) {
      ardu->drawBitmap(Player::GetX(), Player::GetY(), PlayerLEFT1,16,16,BLACK);      
    } else if (Player::GetDirection() == 1) {
      ardu->drawBitmap(Player::GetX(), Player::GetY(), PlayerUP1,16,16,BLACK); 
    } else if (Player::GetDirection() == 2) {
      ardu->drawBitmap(Player::GetX(), Player::GetY(), PlayerRIGHT1,16,16,BLACK); 
    } else if (Player::GetDirection() == 3) {
      ardu->drawBitmap(Player::GetX(), Player::GetY(), PlayerDOWN1,16,16,BLACK); 
    } 
  } else if (Player::GetMovement() == 1) {
    if (Player::GetDirection() == 0) {
      ardu->drawBitmap(Player::GetX() - 13, Player::GetY() + 3, SwordLEFT,16,16,BLACK);  
      ardu->drawBitmap(Player::GetX(), Player::GetY(), PlayerLEFT2,16,16,BLACK);   
    } else if (Player::GetDirection() == 1) {
      ardu->drawBitmap(Player::GetX(), Player::GetY() - 14, SwordUP,16,16,BLACK);
      ardu->drawBitmap(Player::GetX(), Player::GetY(), PlayerUP2,16,16,BLACK);
    } else if (Player::GetDirection() == 2) {
      ardu->drawBitmap(Player::GetX() + 12, Player::GetY() + 2, SwordRIGHT,16,16,BLACK); 
      ardu->drawBitmap(Player::GetX(), Player::GetY(), PlayerRIGHT2,16,16,BLACK);
    } else if (Player::GetDirection() == 3) {
      ardu->drawBitmap(Player::GetX(), Player::GetY() + 14, SwordDOWN,16,16,BLACK);
      ardu->drawBitmap(Player::GetX(), Player::GetY(), PlayerDOWN2,16,16,BLACK); 
    }     
  }
  
}

void Player::init(void){
  
}

int Player::GetX(void){
  return x;  
}

int Player::GetY(void){
  return y;  
}

int Player::GetMovement(void){
  return movement;  
}

int Player::GetDirection(void){
  return direction;  
}

void Player::moveLeft(void){
  //x -= moveSpeed;
  direction = 0;
  movement = 0;  
  if (x > 4) {
    x -= moveSpeed;
  }
}

void Player::moveRight(void){
  //x += moveSpeed;
  direction = 2;
  movement = 0;
  if (x < 112) {
    x += moveSpeed;    
  }
}

void Player::moveUp(void){
  //y -= moveSpeed; 
  direction = 1;
  movement = 0;  
  if (y > 10) {
    y -= moveSpeed;    
  }
}

void Player::moveDown(void){
  //y += moveSpeed;
  direction = 3;
  movement = 0;  
  if (y < 48) {
    y += moveSpeed;    
  }
}

void Player::Idle(void){
  movement = 4;
}

void Player::Slash(void){
  movement = 1;
}



