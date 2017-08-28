#ifndef SaveLoad_h
#define SaveLoad_h

#include <Arduboy2.h>
#include "Bitmaps.h"
#include <EEPROM.h>


//What needs to be saved and loaded: MAXHP,CURRENTDUNGEON, ITEMS IN INVENTORY

//Save when: Complete Dungeon, Visit Fairy Fountain, Visit Links House

class SaveFiles {
public:
  SaveFiles(Arduboy2 &arduboy);
  
  void SaveFile1();
  void SaveFile2();
  void SaveFile3();

  void LoadFile1();
  void LoadFile2();
  void LoadFile3();

  void DeleteFile1();
  void DeleteFile2();
  void DeleteFile3();

  void CreatePassword(); //Checks what to be saved and makes a password out of that
  void LoadPassword();
  
private:
  Arduboy2 *ardu;
  int currentFile;

  //Save settings
  bool UseEEPROM; //If save to eeprom or password
  
};

#endif //_SaveLoad_h
