#pragma once
#include "Sprite.h"
class Eyebrows : public Sprite
{
    private:
        //sprite arrays
        ofImage Eyebrows_N[7];
        //ofImage Eyebrows_S[?];
        //ofImage Eyebrows_Z[?];
    public:
        Eyebrows() : Sprite(5) {} // initialize with 5 sprites
        //void loadEyebrows();

        //getter functions for arrays
        ofImage* getEyebrows_N();
        //ofImage* getEyebrows_S();
        //ofImage* getEyebrows_Z();

        //loads sprites into arrays
        void loadEyebrows_N();
        //void loadEyebrows_S();
        //void loadEyebrows_Z();

        void cycleEyebrows(int maxIndex);
};

