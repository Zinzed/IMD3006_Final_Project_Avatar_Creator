#include "Eyebrows.h"

//void Eyebrows::loadEyebrows() {
//    loadSprite("Sumaiya_Sprites/eyebrows", ".png");
//}

ofImage* Eyebrows::getEyebrows_N()
{
    return Eyebrows_N;
}

ofImage* Eyebrows::getEyebrows_S()
{
    return Eyebrows_S;
}

void Eyebrows::loadEyebrows_N()
{
    loadSpriteAlt(Eyebrows_N, 7, "Naomi_Sprites/eyebrows_", ".png");
}

void Eyebrows::loadEyebrows_S()
{
    loadSpriteAlt(Eyebrows_S, 5, "Sumaiya_Sprites/eyebrows", ".png");
}

void Eyebrows::cycleEyebrows(int maxIndex) {

    cycleSprites(maxIndex);
}