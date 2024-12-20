#include "HeadBTone.h"

//void HeadBTone::loadHeadBTones() {
//    loadSprite("Sumaiya_Sprites/HeadBTone", ".png");
//}

ofImage* HeadBTone::getHeadBTones_N()
{
    return headBTone_N;
}

ofImage* HeadBTone::getHeadBTones_S()
{
    return headBTone_S;
}

void HeadBTone::loadHeadBTones_N()
{
    loadSpriteAlt(headBTone_N, 8, "Naomi_Sprites/headShapeB_Tone", ".png");
}

void HeadBTone::loadHeadBTones_S()
{
    loadSpriteAlt(headBTone_S, 8, "Sumaiya_Sprites/HeadBTone", ".png");
}

void HeadBTone::cycleHeadBTones(int maxIndex) {
    cycleSprites(maxIndex);
}
