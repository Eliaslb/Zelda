#include "SaveLoad.h"

SaveFiles::SaveFiles(Arduboy2 &arduboy){
  ardu = &arduboy;   
}

void SaveFiles::LoadFile1(){
  currentFile = 1;
}

void SaveFiles::LoadFile2(){
  currentFile = 2;
}

void SaveFiles::LoadFile3(){
  currentFile = 3;
}
