#ifndef Items_h
#define Items_h

#include <Arduboy2.h>
#include "Bitmaps.h"
#include "Player.h"

#define ItemAmount 1 //Total amount of items
#define Inv_Rupees 1 //How many slots it will take
#define Inv_Arrows 1 //How many slots arrows will take

typedef struct {
  int id;
  String name;
  uint8_t *Icon;  //8x8 icon
  bool inInventory;
  int amount; //How many of one item
  bool isUseable; //If you can equip the item
} Inventory_t;

class Inventory {
public:
  Inventory(Arduboy2 &arduboy);
  void setItemState(int item, bool state); //Set if player has got the item or not
private:
  Arduboy2 *ardu;
  Inventory_t Backpack[ItemAmount + Inv_Rupees + Inv_Arrows]; //Rupees = 0; Arrows = 1;
  Inventory_t SlotA[1];
  Inventory_t SlotB[1];
};



//Items


//-------------------------------------------[ Boots ]----------------------------------------------
class SpeedBoots {
public:
  SpeedBoots(Arduboy2 &arduboy, Player &p);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;
  Player *player;
};


//Iron boots
//In water temple, switches under the water can be pressed with theese boots

class IronBoots {
public:
  IronBoots(Arduboy2 &arduboy, Player &p);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;
  Player *player;
};


//-------------------------------------------[ Armors ]----------------------------------------------

//Gerudo Armor
//Faster attackspeed?

class GerudoArmor {
public:
  GerudoArmor(Arduboy2 &arduboy, Player &p);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;
  Player *player;
};


//Zora Armor
//Faster swimspeed?

class ZoraArmor {
public:
  ZoraArmor(Arduboy2 &arduboy, Player &p);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;
  Player *player;
};


//Goron Armor
//Transform into rock? 
//With higher travelspeed?
//Take less damage from fire

class GoronArmor {
public:
  GoronArmor(Arduboy2 &arduboy, Player &p);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;
  Player *player;
};


//Rito Armor
//Less falldamage?
//Better flying?

class RitoArmor { 
public:
  RitoArmor(Arduboy2 &arduboy, Player &p);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;
  Player *player;
};


//-------------------------------------------[ Masks ]----------------------------------------------

//Deku Mask
//Able to fly for short time if shot out of flower

class DekuMask { 
public:
  DekuMask(Arduboy2 &arduboy, Player &p);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;
  Player *player;
};


//Goron Mask
//Become a goron

class GoronMask { 
public:
  GoronMask(Arduboy2 &arduboy, Player &p);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;
  Player *player;
};


//Zora Mask
//Become a zora

class ZoraMask { 
public:
  ZoraMask(Arduboy2 &arduboy, Player &p);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;
  Player *player;
};


//-------------------------------------------[ Misc ]----------------------------------------------

//Bottle

class Bottle {
public:
  Bottle(Arduboy2 &arduboy, Player &p);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;
  Player *player;
};


//Bomb

class Bomb {
public:
  Bomb(Arduboy2 &arduboy, Player &p);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;
  Player *player;
};


//Boomerang

class Boomerang {
public:
  Boomenrang(Arduboy2 &arduboy, Player &p);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;
  Player *player;
};


//Hookshot

class Hookshot {
public:
  Hookshot(Arduboy2 &arduboy, Player &p);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;
  Player *player;
};


//Farores Wind
//When use get coordinates: Mode get
//When use set coordinates: Mode set


class FaroresWind {
public:
  FaroresWind(Arduboy2 &arduboy, Player &p);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;
  Player *player;
  int x;
  int y;
  bool placed;
};


//Goron bracelet
//Able to lift big rocks blocking paths

class GoronBracelet {
public:
  GoronBracelet(Arduboy2 &arduboy, Player &p);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;
  Player *player;
};


//Ocarina
//Play songs for different happenings

class Ocarina {
public:
  Ocarina(Arduboy2 &arduboy);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;

//Songs

};


//Mirror
//Get back to the start of dungeon

class MagicMirror {
public:
  MagicMirror(Arduboy2 &arduboy);
  void use(); //Use the item in game
  
private:
  Arduboy2 *ardu;

};


//-------------------------------------------[ Bows ]----------------------------------------------





//-------------------------------------------[ Swords ]----------------------------------------------

#endif //_Items_h
