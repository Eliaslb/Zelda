#include "PauseMenu.h"

PauseMenu::PauseMenu(Arduboy2 &ardu) {
  this->ardu = &ardu; 
  //0, 16, 32, 64, 80, 96, 112, 128
  //0, 16, 32, 64 
  x = 1;
  y = 1;
}

void PauseMenu::cursorLeft() {
  InventoryGrid[x][y].cursorOn = false;
  x -= 1;
  
  if (InventoryGrid[x][y].walkable == true) {
    InventoryGrid[x][y].cursorOn = true;  
  } else {
    x += 1;
    InventoryGrid[x][y].cursorOn = true;
  }
    
}

void PauseMenu::cursorRight() {
  InventoryGrid[x][y].cursorOn = false;
  x += 1;
  
  if (InventoryGrid[x][y].walkable == true) {
    InventoryGrid[x][y].cursorOn = true;  
  } else {
    x -= 1;
    InventoryGrid[x][y].cursorOn = true;
  }  
}

void PauseMenu::cursorUp() {
  InventoryGrid[x][y].cursorOn = false;
  y -= 1;
  
  if (InventoryGrid[x][y].walkable == true) {
    InventoryGrid[x][y].cursorOn = true;  
  } else {
    y += 1;
    InventoryGrid[x][y].cursorOn = true;
  }  
}

void PauseMenu::cursorDown() {
  InventoryGrid[x][y].cursorOn = false;
  y += 1;
  
  if (InventoryGrid[x][y].walkable == true) {
    InventoryGrid[x][y].cursorOn = true;  
  } else {
    y -= 1;
    InventoryGrid[x][y].cursorOn = true;
  }  
}

void PauseMenu::draw() {
  for (int i = 0; i < InvGridX; i++) {
    for (int j = 0; j < InvGridY; i++) {
      ardu->drawBitmap(i*16,j*16,InventoryGrid[i][j].Icon,16,16,WHITE); 
      Serial.println("Första ritningen");
      Serial.println(i); 
      Serial.println(j);
      if (InventoryGrid[i][j].cursorOn == true) {
        ardu->drawBitmap(i*16,j*16,Inv_Selected,16,16,WHITE);
        Serial.println("Andra Ritningeng");  
        Serial.println(i); 
        Serial.println(j);
      }
    }
  }  
}

