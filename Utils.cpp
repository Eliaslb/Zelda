#include "Utils.h"


//-------------------------------------------[ CoreCheck ]----------------------------------------------

CoreCheck::CoreCheck(Arduboy2 &arduboy){
  ardu = &arduboy;   
}

int CoreCheck::freeRam () {
  extern int __heap_start, *__brkval; 
  int v; 
  return (int) &v - (__brkval == 0 ? (int) &__heap_start : (int) __brkval); 
}


//-------------------------------------------[ Textbox ]----------------------------------------------

TextBox::TextBox(Arduboy2 &arduboy){
  ardu = &arduboy;   
}


void TextBox::make(String Text){
  int length = sizeof(Text); 

  String first10;
  String second10;
  String third10;
  String fourth10;
  
  if (length <= 10) {
    first10 = Text;  
  } else if (length <= 20) {
    first10 = Text.substring(0,10);  
    second10 = Text.substring(11,20);
  }

  
  int showed = 0; //Ska bort annars funkar inte, typ lägga i konstruktor

  if (showed == 0) {
    ardu->drawFastVLine(32,40,24,BLACK);
    ardu->drawFastVLine(98,40,24,BLACK);  
    ardu->drawFastHLine(34,40,64,BLACK);
    ardu->drawFastHLine(34,63,64,BLACK);
    ardu->fillRect(33,41,64,23);
    ardu->setCursor(33,41);
    ardu->print("HELLO Hello");

    if (ardu->pressed(A_BUTTON) || ardu->pressed(B_BUTTON)) {
      showed = 1;  
    }
  }
}



void TextBox::display(Textbox_t tb){
  int length = sizeof(tb.text); 

  String first10;
  String second10;
  String third10;
  String fourth10;
  
  if (length <= 10) {
    first10 = tb.text;  
  } else if (length <= 20) {
    first10 = tb.text.substring(0,10);  
    second10 = tb.text.substring(11,20);
  } else if (length <= 30) {
    first10 = tb.text.substring(0,10);  
    second10 = tb.text.substring(11,20);      
    third10 = tb.text.substring(21,30);
  } else if (length <= 40) {
    first10 = tb.text.substring(0,10);  
    second10 = tb.text.substring(11,20);     
    third10 = tb.text.substring(21,30);
    fourth10 = tb.text.substring(31,40);
  }

  if (tb.showamount != tb.maxshowamount) {
    ardu->drawFastVLine(32,40,24,BLACK);
    ardu->drawFastVLine(98,40,24,BLACK);  
    ardu->drawFastHLine(34,40,64,BLACK);
    ardu->drawFastHLine(34,63,64,BLACK);
    ardu->fillRect(33,41,64,23);
    ardu->setCursor(33,41);
    ardu->print(first10);
    ardu->setCursor(40,41);
    ardu->print(second10);
    ardu->setCursor(47,41);
    ardu->print(third10);
    ardu->setCursor(54,41);
    ardu->print(fourth10);
  } 
    if (ardu->pressed(A_BUTTON) || ardu->pressed(B_BUTTON)) {
      tb.showamount += 1;  
    }

  
}






Timer::Timer(Arduboy2 &arduboy){
  ardu = &arduboy; 
    
}

void Timer::IncTimer(){
  timer++;  
}

void Timer::StopTimer(){
  stoppedtimer = timer;  
}

bool Timer::ElapsedTimeMT(){
  if (timer > stoppedtimer) {
    return true;    
  } else {
    return false;
  }
}

bool Timer::ElapsedTimeEQ(){
  if (timer == stoppedtimer) {
    return true;    
  } else {
    return false;
  } 
}

