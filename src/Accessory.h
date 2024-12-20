#pragma once
#include "Sprite.h"
class Accessory : public Sprite
{
private:
    //sprite arrays
    ofImage accessories_N[6];
    ofImage accessories_S[10];
    //ofImage accessories_Z[?];

public:
    Accessory() : Sprite(10) {} // initialize with 10 sprites
    //void loadAccessories();

    //getter functions for arrays
    ofImage* getAccessories_N();
    ofImage* getAccessories_S();
    //ofImage* getAccessories_Z();

    //loads sprites into arrays
    void loadAccessories_N();
    void loadAccessories_S();
    //void loadAccessories_Z();

    void cycleAccessories(int maxIndex);
};
