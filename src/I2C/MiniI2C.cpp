
#include "MiniI2C.h"

void MiniI2C::begin(uint8_t ver, uint8_t ch){
    HTColor._ver = ver;
    HTColor._ch = ch;
    HTCompass._ver = ver;
    HTCompass._ch = ch;
    PIXY._ver = ver;
    PIXY._ch = ch;
}