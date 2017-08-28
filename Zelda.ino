#include <Arduboy2.h>
#include "Utils.h"
#include "Defines.h"
#include "Bitmaps.h"
#include "Player.h"
#include "SaveLoad.h"
#include "Animations.h"
#include "Maps.h"
#include "Enemies.h"
#include "TileMaps.h"
#include "Scroll.h"
#include "PauseMenu.h"


Arduboy2 ardu;


//-------------------------------------------[ Animations ]----------------------------------------------
Animation2 PlayerUPanim(ardu);
Animation2 PlayerDOWNanim(ardu);
Animation2 PlayerLEFTanim(ardu);
Animation2 PlayerRIGHTanim(ardu);

//-------------------------------------------[ Textbox ]----------------------------------------------
TextBox TextBoxes(ardu);

//-------------------------------------------[ CoreCheck ]----------------------------------------------
CoreCheck CoreChecks(ardu);
Timer timer(ardu);
PauseMenu pm(ardu);

//-------------------------------------------[ Player ]----------------------------------------------
Player player(ardu, PlayerLEFTanim, PlayerRIGHTanim, PlayerUPanim, PlayerDOWNanim);

//-------------------------------------------[ Enemies ]----------------------------------------------
OctorockBlack octorockBlack(ardu, player);

//-------------------------------------------[ Maps ]----------------------------------------------
M_test testmap(ardu, player, octorockBlack);

Scroll Scroll(ardu);

TileMapReader TileMR(ardu, Scroll);


void setup() {
  // put your setup code here, to run once:
  ardu.begin();

  Serial.begin(9600);

  Serial.println("Arduboy initialized");

  Serial.println("Serial initialized");
  
  ardu.initRandomSeed(); 
   
  ardu.setFrameRate(FPS);

  Serial.print("FPS: ");
  Serial.println(FPS);
  
  //Anim setup
  PlayerUPanim.bitmap1 = PlayerUP1;
  PlayerUPanim.bitmap2 = PlayerUP2;

  PlayerDOWNanim.bitmap1 = PlayerDOWN1;
  PlayerDOWNanim.bitmap2 = PlayerDOWN2;

  PlayerLEFTanim.bitmap1 = PlayerLEFT1;
  PlayerLEFTanim.bitmap2 = PlayerLEFT2;

  PlayerRIGHTanim.bitmap1 = PlayerRIGHT1;
  PlayerRIGHTanim.bitmap2 = PlayerRIGHT2;

  Serial.println("Animation-setup finished");

  gamestate = GS_Menu;
  
  menustate = Title;

  Serial.println("Setup finished");

  Serial.println("Clearing screen...");
  
  ardu.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!ardu.nextFrame()) {
    return;
  }

  ardu.pollButtons();

  timer.IncTimer();
  
//-------------------------------------------[ Menu ]----------------------------------------------
  /*if (gamestate == GS_Menu){
    if (menustate == Title) {
      ardu.setCursor(56,32);
      ardu.print("ZELDA");   
      delay(6000);    
      menustate = Fileselect; 
    }

    if (menustate == Fileselect) {
      ardu.setCursor(32,16);
      ardu.print("File 1");  
      ardu.setCursor(32,32);
      ardu.print("File 2");
      ardu.setCursor(32,48);
      ardu.print("File 3");
    }
  }*/

//-------------------------------------------[ Inventory ]----------------------------------------------

  
//-------------------------------------------[ Keys ]----------------------------------------------
  
  if (ardu.pressed(UP_BUTTON)) {
    player.moveUp(); 
    //Change all dungeon scrollpos
    //testmap.setScrollY("-", 1); 
    testmap.incScrollY();

    Scroll.IncY();

    Serial.println("UP_BUTTON Was pressed");
    
  } else if (ardu.pressed(DOWN_BUTTON)) {
    player.moveDown();
    //Change all dungeon scrollpos
    //testmap.setScrollY("+", 1);
    testmap.decScrollY();

    Scroll.DecY();
    
    Serial.println("DOWN_BUTTON Was pressed");
    
  } else if (ardu.pressed(LEFT_BUTTON)) {
    player.moveLeft();
    //Change all dungeon scrollpos
    //testmap.setScrollX("-", 1);
    testmap.incScrollX();

    Scroll.IncX();

    Serial.println("LEFT_BUTTON Was pressed");
    
  } else if (ardu.pressed(RIGHT_BUTTON)) {
    player.moveRight();
    //Change all dungeon scrollpos
    //testmap.setScrollX("+", 1);
    testmap.decScrollX();

    Scroll.DecX();

    Serial.println("RIGHT_BUTTON Was pressed");
    
  } else if (ardu.pressed(A_BUTTON)){
    //Slash
    player.Slash();

    Serial.println("A_BUTTON Was pressed");
    
  } else if (ardu.pressed(B_BUTTON)){
    //Use item

    Serial.println("B_BUTTON Was pressed");
    
  } else if (ardu.notPressed(UP_BUTTON) || ardu.notPressed(DOWN_BUTTON) || ardu.notPressed(LEFT_BUTTON) || ardu.notPressed(RIGHT_BUTTON) || ardu.notPressed(A_BUTTON) || ardu.notPressed(B_BUTTON)) {
    //Idle
    player.Idle();
    
  } 
  

  


//-------------------------------------------[ Debug ]----------------------------------------------
  if (Debug_CPU == 1) {
      if (ardu.everyXFrames(120)) {
        Serial.print("CPU: ");
        Serial.println(ardu.cpuLoad());   
      }
  }

  if (Debug_Pos == 1) {
      if (ardu.everyXFrames(120)) {
        Serial.print("X: ");
        Serial.println(player.GetX()); 
         
        Serial.print("Y: ");
        Serial.println(player.GetY());
      }
  }

  if (Debug_RAM == 1) {
      if (ardu.everyXFrames(240)) {
        Serial.print("Ram: ");
        Serial.println(CoreChecks.freeRam());
      }
  }

  
//-------------------------------------------[ Drawing ]----------------------------------------------
  
  //Background
  ardu.fillRect(1,8,128,64,WHITE);
  
  //Map
  //testmap.room1();
  
  //Player  
  player.draw();

  
  //Hud
  ardu.drawFastHLine(1,8,128,BLACK);

  //Debug
  
//  ardu.setCursor(4,32);
//  ardu.print(player.GetMovement());
//  ardu.setCursor(10,32);
//  ardu.print(player.GetDirection());
//
//  ardu.setCursor(104,32);
//  ardu.print(player.GetX());
//  ardu.setCursor(116,32);
//  ardu.print(player.GetY());
//
//  ardu.setCursor(104,48);
//  ardu.print(testmap.GetScrollX());
//  ardu.setCursor(116,48);
//  ardu.print(testmap.GetScrollY());

  //TextBoxes.display(Testbox);

  int tilemaptest[3][3] = {
  {1,0,0}, 
  {1,0,0}, 
  {0,1,1}  
  };
  
  TileMR.drawTileMap(tilemaptest,3,3,1,1);
  //pm.draw();
  
  ardu.display(CLEAR_BUFFER);
}
