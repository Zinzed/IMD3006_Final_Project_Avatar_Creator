#pragma once
#include "Sprite.h"
class HeadATone :
    public Sprite
{
protected:
    int currentHeadAToneIndex = 0;
public:
    HeadATone() : Sprite(8) {} // initialize with 8 sprites
    void loadHeadATones();
    void cycleHeadATones();
};

