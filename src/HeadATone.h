#pragma once
#include "Sprite.h"
class HeadATone : public Sprite
{
    private:
        //sprite arrays
        ofImage headATones_N[8];
        //ofImage headATones_S[8];
        //ofImage headATones_Z[8];

    public:
        HeadATone() : Sprite(8) {} // initialize with 8 sprites

        //getter functions for arrays
        ofImage* getHeadATones_N();
        //ofImage* getHeadATones_S();
        //ofImage* getHeadATones_Z();

        //loads sprites into arrays
        void loadHeadATones_N();
        //void loadHeadATones_S();
        //void loadHeadATones_Z();

        //cycle head tones
        void cycleHeadATones(int maxIndex);

        
        
};

