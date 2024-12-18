#pragma once
#include "Sprite.h"
class Mouth :
    public Sprite
{
protected:
    int currentMouthIndex = 0;
public:
    Mouth() : Sprite(5) {} // initialize with 5 sprites
    void loadMouthes();
    void cycleMouthes();
};

