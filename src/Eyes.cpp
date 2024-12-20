#include "Eyes.h"

ofImage* Eyes::getEyes_N()
{
    return Eyes_N;
}

ofImage* Eyes::getEyes_S()
{
    return Eyes_S;
}

void Eyes::loadEyes_N()
{
    loadSpriteAlt(Eyes_N, 7, "Naomi_Sprites/eyes_", ".png");
}

void Eyes::loadEyes_S()
{
    loadSpriteAlt(Eyes_S, 7, "Sumaiya_Sprites/eyes", ".png");
}

void Eyes::cycleEyes(int maxIndex) {
    cycleSprites(maxIndex);
}