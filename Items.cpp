#include "Items.h"

Inventory::Inventory(Arduboy2 &arduboy){
  ardu = &arduboy;   
}

void Inventory::setItemState(int item, bool state){
  Backpack[item].inInventory == state;  
}

//Speed boots
SpeedBoots::SpeedBoots(Arduboy2 &arduboy, Player &p){
  ardu = &arduboy;   
  player = &p;
}

void SpeedBoots::use(){
    
}

