#include "Scroll.h"

Scroll::Scroll(Arduboy2 &arduboy){
  ardu = &arduboy;   
  int x = 0; 
  int y = 0;
}

int Scroll::OffsetX() {
  return x;  
}

int Scroll::OffsetY() {
  int y;  
}

int Scroll::GetX() {
  return x;  
}

int Scroll::GetY() {
  return y;  
}

void Scroll::IncX() {
  x++;  
}

void Scroll::DecX() {
  x--;  
}

void Scroll::IncY() {
  y++;  
}

void Scroll::DecY() {
  y--; 
}

