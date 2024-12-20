#pragma once
#include "Sprite.h"
class Clothing : public Sprite
{
    private:
        //sprite arrays
        ofImage clothes_N[7];
        //ofImage clothes_S[?];
        //ofImage clothes_Z[?];

    public:
        Clothing() : Sprite(8) {} // initialize with 8 sprites
        //void loadClothes();

        //getter functions for arrays
        ofImage* getClothes_N();
        //ofImage* getClothes_S();
        //ofImage* getClothes_Z();

        //loads sprites into arrays
        void loadClothes_N();
        //void loadClothes_S();
        //void loadClothes_Z();

        void cycleClothes(int maxIndex);
};

