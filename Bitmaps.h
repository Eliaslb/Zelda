#ifndef _Bitmaps_h_
#define _Bitmaps_h_

//Bitmaps how to
//Pixlr ändra storlek
//Lunapic Monochrome
//Piskel inn och spara ned

const int PLAYERSIZE = 16;
const int PLAYERWIDTH = 16;
const int SCREENX = 128;
const int SCREENY = 64;

//Player
//Göra Frame_t till alla bitmaps

const unsigned char PlayerUP1[] PROGMEM  = { //1 or 2  defines animationstate
  0x00, 0x00, 0xf0, 0x88, 0xf8, 0xf7, 0xfb, 0xcb, 0xb, 0xfa, 0xf4, 0xf8, 0x88, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xc, 0x73, 0xff, 0xef, 0xef, 0xef, 0xef, 0xef, 0xb7, 0xbf, 0xff, 0x4e, 0x00, 0x00, 
};

//0xff, 0xff, 0xf, 0x77, 0x7, 0x8, 0x4, 0x34, 0xf4, 0x5, 0xb, 0x7, 0x77, 0xf, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x8c, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x48, 0x40, 0x00, 0xb1, 0xff, 0xff,   

const unsigned char PlayerUP2[] PROGMEM  = { //1 or 2  defines animationstate
  0x00, 0x00, 0xf0, 0x88, 0xf8, 0xf4, 0xfa, 0xb, 0xb, 0xcb, 0xda, 0xf6, 0xf8, 0x88, 0xf0, 0x00, 0x00, 0x3c, 0x6e, 0xff, 0xbf, 0xbb, 0xff, 0xff, 0xff, 0xee, 0xef, 0xe7, 0xfd, 0x73, 0xc, 0x00, 
};

//0xff, 0xff, 0xf, 0x77, 0x7, 0xb, 0x5, 0xf4, 0xf4, 0x34, 0x25, 0x9, 0x7, 0x77, 0xf, 0xff, 0xff, 0xc3, 0x91, 0x00, 0x40, 0x44, 0x00, 0x00, 0x00, 0x11, 0x10, 0x18, 0x2, 0x8c, 0xf3, 0xff, 

const unsigned char PlayerDOWN1[] PROGMEM  = { //1 or 2  defines animationstate
  0x00, 0x78, 0xc4, 0x3e, 0x7f, 0x6c, 0xf4, 0x74, 0x71, 0xf1, 0x62, 0x6c, 0x3c, 0xc4, 0x78, 0x00, 0xc, 0x52, 0xfb, 0xff, 0xae, 0xac, 0xad, 0xcc, 0xcc, 0xdd, 0xe4, 0xe6, 0xe7, 0x5f, 0xe, 0x00,   
};

//0xff, 0x87, 0x3b, 0xc1, 0x80, 0x93, 0xb, 0x8b, 0x8e, 0xe, 0x9d, 0x93, 0xc3, 0x3b, 0x87, 0xff, 0xf3, 0xad, 0x4, 0x00, 0x51, 0x53, 0x52, 0x33, 0x33, 0x22, 0x1b, 0x19, 0x18, 0xa0, 0xf1, 0xff,   

const unsigned char PlayerDOWN2[] PROGMEM  = { //1 or 2  defines animationstate
  0x00, 0x78, 0xc4, 0x3c, 0x6e, 0xf3, 0xf1, 0x75, 0x75, 0xf5, 0x6f, 0x7e, 0xc4, 0x78, 0x00, 0x00, 0x00, 0xe, 0x5f, 0xe7, 0xe6, 0xfd, 0xfd, 0xcc, 0xcc, 0xad, 0xae, 0xff, 0xff, 0x52, 0xc, 0x00,   
};

//0xff, 0x87, 0x3b, 0xc3, 0x91, 0xc, 0xe, 0x8a, 0x8a, 0xa, 0x90, 0x81, 0x3b, 0x87, 0xff, 0xff, 0xff, 0xf1, 0xa0, 0x18, 0x19, 0x2, 0x2, 0x33, 0x33, 0x52, 0x51, 0x00, 0x00, 0xad, 0xf3, 0xff,   

const unsigned char PlayerLEFT1[] PROGMEM  = { //1 or 2  defines animationstate
  0x8, 0x8, 0xd8, 0x5c, 0x3b, 0xf3, 0x27, 0x6d, 0xfb, 0x3b, 0xf, 0xff, 0xfc, 0x78, 0x30, 0x00, 0x00, 0x00, 0x00, 0x81, 0xff, 0xee, 0xfe, 0xa6, 0xa7, 0xbe, 0xbf, 0xff, 0xb8, 0x00, 0x00, 0x00,   
};

//0xf7, 0xf7, 0x27, 0xa3, 0xc4, 0xc, 0xd8, 0x92, 0x4, 0xc4, 0xf0, 0x00, 0x3, 0x87, 0xcf, 0xff, 0xff, 0xff, 0xff, 0x7e, 0x00, 0x11, 0x1, 0x59, 0x58, 0x41, 0x40, 0x00, 0x47, 0xff, 0xff, 0xff,   

const unsigned char PlayerLEFT2[] PROGMEM  = { //1 or 2  defines animationstate
  0xce, 0xb8, 0x74, 0xe4, 0xc6, 0x4f, 0xdb, 0xfb, 0x73, 0x13, 0xf3, 0xfe, 0xfc, 0xfc, 0x38, 0x00, 0x00, 0xc2, 0xa6, 0xb4, 0xbd, 0xa4, 0xa4, 0xff, 0xfc, 0xe4, 0xbf, 0xbd, 0x89, 0xf0, 0x00, 0x00,   
};

//0x31, 0x47, 0x8b, 0x1b, 0x39, 0xb0, 0x24, 0x4, 0x8c, 0xec, 0xc, 0x1, 0x3, 0x3, 0xc7, 0xff, 0xff, 0x3d, 0x59, 0x4b, 0x42, 0x5b, 0x5b, 0x00, 0x3, 0x1b, 0x40, 0x42, 0x76, 0xf, 0xff, 0xff,   

const unsigned char PlayerRIGHT1[] PROGMEM  = { //1 or 2  defines animationstate
  0x10, 0x30, 0x78, 0xfc, 0xfe, 0xf, 0x1b, 0xfb, 0x7d, 0x2f, 0x76, 0x72, 0x3e, 0xdc, 0x58, 0x8, 0x00, 0x00, 0x00, 0x5c, 0x7f, 0xdf, 0xde, 0xd7, 0xd3, 0xfe, 0x7e, 0x7f, 0x7f, 0x40, 0x00, 0x00,   
};

//0xef, 0xcf, 0x87, 0x3, 0x1, 0xf0, 0xe4, 0x4, 0x82, 0xd0, 0x89, 0x8d, 0xc1, 0x23, 0xa7, 0xf7, 0xff, 0xff, 0xff, 0xa3, 0x80, 0x20, 0x21, 0x28, 0x2c, 0x1, 0x81, 0x80, 0x80, 0xbf, 0xff, 0xff,   

const unsigned char PlayerRIGHT2[] PROGMEM  = { //1 or 2  defines animationstate
  0x00, 0x38, 0xfc, 0xfc, 0xfe, 0x16, 0x76, 0xfa, 0xda, 0x4e, 0xe6, 0x74, 0xb8, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x78, 0xc4, 0x5f, 0xff, 0xfe, 0xff, 0xf2, 0xd2, 0xde, 0xd3, 0x61, 0x00, 0x00, 0x00, 
};

//0xef, 0xcf, 0x87, 0x3, 0x1, 0xf0, 0xe4, 0x4, 0x82, 0xd0, 0x89, 0x8d, 0xc1, 0x23, 0xa7, 0xf7, 0xff, 0xff, 0xff, 0xa3, 0x80, 0x20, 0x21, 0x28, 0x2c, 0x1, 0x81, 0x80, 0x80, 0xbf, 0xff, 0xff,   


//Hud
const unsigned char Hud_Heart[] PROGMEM  = { 
  
};

const unsigned char Hud_HalfHeart[] PROGMEM  = { 
  
};

const unsigned char Hud_Key[] PROGMEM  = { 
  
};


//Tiles

//Checker Floor Gray and White

const unsigned char StoneWall1[] PROGMEM = {
  0x4c, 0xcc, 0x4c, 0xfc, 0xcc, 0xcc, 0x4c, 0x7c, 0x4c, 0xcc, 0x4c, 0xfc, 0xcc, 0xcc, 0x4c, 0x7c, 0xf2, 0xf3, 0xf3, 0xf3, 0xd3, 0xf3, 0xf2, 0xfe, 0xf2, 0xf3, 0xf3, 0xf3, 0xd3, 0xf3, 0xf2, 0xfe,   
};

const unsigned char StoneWall2[] PROGMEM = {
    
};

const unsigned char StoneWall3[] PROGMEM = {
  
};

const unsigned char StoneWall4[] PROGMEM = {
  
};

const unsigned char StoneWallCorner1[] PROGMEM = {
  
};

const unsigned char StoneWallCorner2[] PROGMEM = {
  
};

const unsigned char StoneWallCorner3[] PROGMEM = {
  
};

const unsigned char StoneWallCorner4[] PROGMEM = {
  
};

//Items

const unsigned char SwordUP[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0xff, 0xff, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,   
};

const unsigned char SwordDOWN[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x8, 0x8, 0xff, 0xff, 0x8, 0x8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7, 0x7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   
};

const unsigned char SwordLEFT[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xe0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x7, 0x1, 0x1, 0x1,   
};

const unsigned char SwordRIGHT[] PROGMEM = {
  0x80, 0x80, 0x80, 0xe0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x7, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00,   
};

//Enemies

const unsigned char OctoRockBlackLeft1[] PROGMEM = { //1 or 2 defines animationstate
  
};

const unsigned char OctoRockBlackLeft2[] PROGMEM = { //1 or 2 defines animationstate
  
};

const unsigned char OctoRockBlackRight1[] PROGMEM = { //1 or 2 defines animationstate
  
};

const unsigned char OctoRockBlackRight2[] PROGMEM = { //1 or 2 defines animationstate
  
};

const unsigned char OctoRockBlackUp1[] PROGMEM = { //1 or 2 defines animationstate
  
};

const unsigned char OctoRockBlackUp2[] PROGMEM = { //1 or 2 defines animationstate
  
};

const unsigned char OctoRockBlackDown1[] PROGMEM = { //1 or 2 defines animationstate
  
};

const unsigned char OctoRockBlackDown2[] PROGMEM = { //1 or 2 defines animationstate
  
};


//Gray requires function to draw grayscale

const unsigned char OctoRockGrayLeft1[] PROGMEM = { //1 or 2 defines animationstate
  
};

const unsigned char OctoRockGrayLeft2[] PROGMEM = { //1 or 2 defines animationstate
  
};

const unsigned char OctoRockGrayRight1[] PROGMEM = { //1 or 2 defines animationstate
  
};

const unsigned char OctoRockGrayRight2[] PROGMEM = { //1 or 2 defines animationstate
  
};

const unsigned char OctoRockGrayUp1[] PROGMEM = { //1 or 2 defines animationstate
  
};

const unsigned char OctoRockGrayUp2[] PROGMEM = { //1 or 2 defines animationstate
  
};

const unsigned char OctoRockGrayDown1[] PROGMEM = { //1 or 2 defines animationstate
  
};

const unsigned char OctoRockGrayDown2[] PROGMEM = { //1 or 2 defines animationstate
  
};


//Items

const unsigned char Bitmap_Bottle[] PROGMEM = { 
  
};

const unsigned char Bitmap_GerudoArmor[] PROGMEM = { 
  
};

const unsigned char Bitmap_GoronArmor[] PROGMEM = { 
  
};

const unsigned char Bitmap_RitoArmor[] PROGMEM = { 
  
};

const unsigned char Bitmap_ZoraArmor[] PROGMEM = { 
  
};

const unsigned char Bitmap_Ocarina[] PROGMEM = { 
  
};

const unsigned char Bitmap_SpeedBoots[] PROGMEM = { 
  
};

const unsigned char Bitmap_IronBoots[] PROGMEM = { 
  
};

const unsigned char Bitmap_GoronBracelet[] PROGMEM = { 
  
};

const unsigned char Bitmap_Bomb[] PROGMEM = { 
  
};

const unsigned char Bitmap_DekuMask[] PROGMEM = { 
  
};

const unsigned char Bitmap_GoronMask[] PROGMEM = { 
  
};

const unsigned char Bitmap_ZoraMask[] PROGMEM = { 
  
};

const unsigned char Bitmap_Boomerang[] PROGMEM = { 
  
};

const unsigned char Bitmap_Hookshot[] PROGMEM = { 
  
};

const unsigned char Bitmap_FaroresWind[] PROGMEM = { 
  
};

const unsigned char Inv_Selected[] PROGMEM = {
  0xf8, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xf8, 0x1f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x1f, 
};

#endif //_Bitmaps_h
