#pragma once
#include "Sprite.h"
class Accessory :
    public Sprite
{
protected:
    int currentAccessoryIndex = 0;
public:
    Accessory() : Sprite(10) {} // initialize with 10 sprites
    void loadAccessories();
    void cycleAccessories();
};

