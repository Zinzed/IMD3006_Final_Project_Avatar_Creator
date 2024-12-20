#include "HeadBTone.h"

//void HeadBTone::loadHeadBTones() {
//    loadSprite("Sumaiya_Sprites/HeadBTone", ".png");
//}

ofImage* HeadBTone::getHeadBTones_N()
{
    return headBTone_N;
}

void HeadBTone::loadHeadBTones_N()
{
    loadSpriteAlt(headBTone_N, 8, "Naomi_Sprites/headShapeB_Tone", ".png");
}

void HeadBTone::cycleHeadBTones(int maxIndex) {
    cycleSprites(maxIndex);
}

