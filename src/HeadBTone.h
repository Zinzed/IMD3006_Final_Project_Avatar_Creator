#pragma once
#include "Sprite.h"
class HeadBTone : public Sprite
{
private:
    //sprite arrays
    ofImage headBTone_N[8];
    ofImage headBTone_S[8];
    //ofImage headBTone_Z[8];

public:
    HeadBTone() : Sprite(8) {} // initialize with 8 sprites
    //void loadHeadBTones();

    //getter functions for arrays
    ofImage* getHeadBTones_N();
    ofImage* getHeadBTones_S();
    //ofImage* getHeadBTones_Z();

    //loads sprites into arrays
    void loadHeadBTones_N();
    void loadHeadBTones_S();
    //void loadHeadBTones_Z();

    void cycleHeadBTones(int maxIndex);
};
