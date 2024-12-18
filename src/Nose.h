#pragma once
#include "Sprite.h"
class Nose :
    public Sprite
{
protected:
    int currentNoseIndex = 0;
public:
    Nose() : Sprite(5) {} // initialize with 5 sprites
    void loadNoses();

    void cycleNoses();
};

