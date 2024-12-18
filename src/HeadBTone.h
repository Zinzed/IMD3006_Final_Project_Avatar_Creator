#pragma once
#include "Sprite.h"
class HeadBTone :
    public Sprite
{
protected:
    int currentHeadBToneIndex = 0;
public:
    HeadBTone() : Sprite(8) {} // initialize with 8 sprites
    void loadHeadBTones();
    void cycleHeadBTones();
};

