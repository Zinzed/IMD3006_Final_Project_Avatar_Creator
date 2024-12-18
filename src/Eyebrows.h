#pragma once
#include "Sprite.h"
class Eyebrows :
    public Sprite
{
protected:
    int currentEyebrowsIndex = 0;
public:
    Eyebrows() : Sprite(5) {} // initialize with 5 sprites
    void loadEyebrows();

    void cycleEyebrows();
};

