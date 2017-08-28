#include "Animations.h"

Animation2::Animation2(Arduboy2 &arduboy){
  ardu = &arduboy;   
  currentFrame = 0;
  playing = true;
  speed = 15;
  color = BLACK;
}

void Animation2::play(int x, int y){
  //ardu->drawBitmap(64, 32, PlayerUP1, 16, 16, WHITE); 
  //ardu->drawBitmap(x,y,bitmap1,bitmapwidth,bitmapheight,color);   
  
//  if (ardu->everyXFrames(speed) && currentFrame == length  && playing == true) {
//    currentFrame = 1;  
//  }
  
  if (playing == true) {
    if (currentFrame == 0) {
      ardu->drawBitmap(x,y,bitmap1,bitmapwidth,bitmapheight,color);   
    } else if (currentFrame == 1) {
      ardu->drawBitmap(x,y,bitmap2,bitmapwidth,bitmapheight,color); 
    }
       
  }  

//  if (ardu->everyXFrames(speed) && currentFrame != length + 1 && playing == true) {
//    currentFrame += 1;    
//  }
  if (ardu->everyXFrames(speed) && playing == true) {
    currentFrame += 1;
    currentFrame %= 2;    
  }
}

void Animation2::setSpeed(int newspeed){
  speed = newspeed;  
}

