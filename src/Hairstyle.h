#pragma once
#include "Sprite.h"
class Hairstyle :
    public Sprite
{
protected:
    int currentHairstyleIndex = 0;
public:
    Hairstyle() : Sprite(7) {} // initialize with 7 sprites
    void loadHairstyles();
    void cycleHairstyles();
};

