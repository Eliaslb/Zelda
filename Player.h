#ifndef Player_h
#define Player_h

#include <Arduboy2.h>
#include "Bitmaps.h"
#include "Animations.h"

const unsigned char BODY_BITMAP[] PROGMEM = { 0x3c, 0x7e, 0xff, 0xff, 0xff, 0xff, 0x7e, 0x3c };

class Player {
public:
    Player(Arduboy2 &arduboy, Animation2 &PlayerLEFTanim1, Animation2 &PlayerRIGHTanim1, Animation2 &PlayerUPanim1, Animation2 &PlayerDOWNanim1);

    void init(void); //Load Health, current position, items from EEprom
    
    void draw(void);

    void moveLeft(void);
    void moveRight(void);
    void moveUp(void);     
    void moveDown(void);
    void Idle(void);
    
    void Slash(void);
    void SlashSpin(void);
    void UseItem(void);

    void setMovement(int newmove);
    void setMovespeed(int newspeed);
    void setDefaultMovespeed(int newspeed);

    bool isPlayerMaxY();
    bool isPlayerMinY();
    
    int GetX(void);
    int GetY(void);
    int GetMovement(void);
    int GetDirection(void);
    int GetDefaultMoveSpeed(void);
    
    int GetHealth(void);
    void IncHealth(int amount);
    void DecHealth(int amount); 

    void IncMaxhealth(int amount);
    int GetMaxHealth(void);
       
private:
    Arduboy2 *ardu;

    Animation2 *PlayerRIGHTanim;
    Animation2 *PlayerLEFTanim;
    Animation2 *PlayerUPanim;
    Animation2 *PlayerDOWNanim;
    
    int x;
    int y;
        
    uint8_t direction; //0 = Left, 1 = Up, 2 = Right, 3 = Down   
    uint8_t health; //Amount of half hearts
    uint8_t maxHealth;
    uint8_t movement; //0 = Walking; 1 = Slashing; 2 = Using special item; 3 = In menu; 4 = Idle;
    
    uint8_t moveSpeed = 1;
    uint8_t defaultMoveSpeed = 1;

    uint8_t defense = 1;
    
    uint8_t attackSpeed;
    uint8_t attackDamage;
};

#endif  // Player_h
