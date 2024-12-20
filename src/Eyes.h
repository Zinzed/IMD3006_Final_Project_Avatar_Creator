
#include "Sprite.h"
class Eyes : public Sprite
{
    private:
        //sprite arrays
        ofImage Eyes_N[7];
        //ofImage Eyes_S[?];
        //ofImage Eyes_Z[?];

    public:
        Eyes() : Sprite(8) {} // initialize with 8 sprites

        //getter functions for arrays
        ofImage* getEyes_N();
        //ofImage* getEyes_S();
        //ofImage* getEyes_Z();

        //loads sprites into arrays
        void loadEyes_N();
        //void loadEyes_S();
        //void loadEyes_Z();

        void cycleEyes(int maxIndex);
};
