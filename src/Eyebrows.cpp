#include "Eyebrows.h"

//void Eyebrows::loadEyebrows() {
//    loadSprite("Sumaiya_Sprites/eyebrows", ".png");
//}

ofImage* Eyebrows::getEyebrows_N()
{
    return Eyebrows_N;
}

void Eyebrows::loadEyebrows_N()
{
    loadSpriteAlt(Eyebrows_N, 7, "Naomi_Sprites/eyebrows_", ".png");
}

void Eyebrows::cycleEyebrows(int maxIndex) {

    cycleSprites(maxIndex);
}
