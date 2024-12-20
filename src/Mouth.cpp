#include "Mouth.h"

//void Mouth::loadMouthes() {
//    loadSprite("Sumaiya_Sprites/mouth", ".png");
//}

ofImage* Mouth::getMouthes_N()
{
    return mouthes_N;
}

ofImage* Mouth::getMouthes_S()
{
    return mouthes_S;
}

void Mouth::loadMouthes_N()
{
    loadSpriteAlt(mouthes_N, 14, "Naomi_Sprites/mouth_", ".png");
}

void Mouth::loadMouthes_S()
{
    loadSpriteAlt(mouthes_S, 5, "Sumaiya_Sprites/mouth", ".png");
}

void Mouth::cycleMouthes(int maxIndex) {
    cycleSprites(maxIndex);
}