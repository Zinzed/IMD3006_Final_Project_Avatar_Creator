#include "HeadATone.h"

//void HeadATone::loadHeadATones() {
//    loadSprite("Sumaiya_Sprites/HeadATone", ".png");
//}

ofImage* HeadATone::getHeadATones_N()
{
    return headATones_N; 
}

void HeadATone::loadHeadATones_N()
{
    loadSpriteAlt(headATones_N, 8, "Naomi_Sprites/headShapeA_Tone", ".png");
}

void HeadATone::cycleHeadATones(int maxIndex) {
    //cycleSprites();
    cycleSprites(maxIndex);
}
