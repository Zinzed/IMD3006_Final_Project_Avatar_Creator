#pragma once
#include "Sprite.h"
class Nose : public Sprite
{
    private:
        //sprite arrays
        ofImage noses_N[6];
        //ofImage noses_S[?];
        //ofImage noses_Z[?];

    public:
        Nose() : Sprite(5) {} // initialize with 5 sprites
        //void loadNoses();

        //getter functions for arrays
        ofImage* getNoses_N();
        //ofImage* getNoses_S();
        //ofImage* getNoses_Z();

        //loads sprites into arrays
        void loadNoses_N();
        //void loadNoses_S();
        //void loadNoses_Z();

        void cycleNoses(int maxIndex);
};

