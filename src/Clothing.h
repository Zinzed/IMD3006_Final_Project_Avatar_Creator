#pragma once
#include "Sprite.h"
class Clothing :
    public Sprite
{
protected:
    int currentClothingIndex = 0;
public:
    Clothing() : Sprite(8) {} // initialize with 8 sprites
    void loadClothes();
    void cycleClothes();
};

