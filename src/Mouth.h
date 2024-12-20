#pragma once
#include "Sprite.h"
class Mouth : public Sprite
{
    private:
        ofImage mouthes_N[14];
        //ofImage mouthes_S[?];
        //ofImage mouthes_Z[?];
    public:
        Mouth() : Sprite(5) {} // initialize with 5 sprites
        //void loadMouthes();

        //getter functions for arrays
        ofImage* getMouthes_N();
        //ofImage* getMouthes_S();
        //ofImage* getMouthes_Z();

        //loads sprites into arrays
        void loadMouthes_N();
        //void loadMouthes_S();
        //void loadMouthes_Z();

        void cycleMouthes(int maxIndex);
};

