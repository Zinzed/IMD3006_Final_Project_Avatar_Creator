#include "Nose.h"

//void Nose::loadNoses() {
//    loadSprite("Sumaiya_Sprites/nose", ".png");
//}

ofImage* Nose::getNoses_N()
{
    return noses_N;
}

ofImage* Nose::getNoses_S()
{
    return noses_S;
}

void Nose::loadNoses_N()
{
    loadSpriteAlt(noses_N, 6, "Naomi_Sprites/nose_", ".png");
}

void Nose::loadNoses_S()
{
    loadSpriteAlt(noses_S, 5, "Sumaiya_Sprites/nose", ".png");
}

void Nose::cycleNoses(int maxIndex) {
    cycleSprites(maxIndex);
}