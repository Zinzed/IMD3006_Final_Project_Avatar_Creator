#pragma once
#include "Sprite.h"
class Hairstyle : public Sprite
{
    private:
        //sprite arrays
        ofImage Hairstyles_N[24];
        //ofImage Hairstyles_S[?];
        //ofImage Hairstyles_Z[?];

    public:
        Hairstyle() : Sprite(7) {} // initialize with 7 sprites
        //void loadHairstyles();
        
        //getter functions for arrays
        ofImage* getHairstyles_N();
        //ofImage* getHairstyles_S();
        //ofImage* getHairstyles_Z();
     

        //loads sprites into arrays
        void loadHairstyles_N();
        //void loadHairstyles_S();
        //void loadHairstyles_Z();

        void cycleHairstyles(int maxIndex);
};

