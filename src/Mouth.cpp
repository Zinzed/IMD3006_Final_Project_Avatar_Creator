#include "Mouth.h"

//void Mouth::loadMouthes() {
//    loadSprite("Sumaiya_Sprites/mouth", ".png");
//}

ofImage* Mouth::getMouthes_N()
{
    return mouthes_N;
}

void Mouth::loadMouthes_N()
{
    loadSpriteAlt(mouthes_N, 14, "Naomi_Sprites/mouth_", ".png");
}

void Mouth::cycleMouthes(int maxIndex) {
    cycleSprites(maxIndex);
}
