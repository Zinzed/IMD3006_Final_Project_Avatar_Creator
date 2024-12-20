#include "Eyes.h"

ofImage* Eyes::getEyes_N()
{
    return Eyes_N;
}

void Eyes::loadEyes_N()
{
    loadSpriteAlt(Eyes_N, 7, "Naomi_Sprites/eyes_", ".png");
}

void Eyes::cycleEyes(int maxIndex) {
    cycleSprites(maxIndex);
}
