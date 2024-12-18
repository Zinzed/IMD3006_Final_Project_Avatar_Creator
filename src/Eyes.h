
#include "Sprite.h"
class Eyes :
    public Sprite
{
protected:
    int currentEyesIndex = 0;
public:
    Eyes() : Sprite(7) {} // initialize with 7 sprites
    void loadEyes();
    void cycleEyes();
};
