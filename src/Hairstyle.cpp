#include "Hairstyle.h"

//void Hairstyle::loadHairstyles() {
//    loadSprite("Sumaiya_Sprites/hair", ".png");
//}

ofImage* Hairstyle::getHairstyles_N()
{
    return Hairstyles_N;
}

void Hairstyle::loadHairstyles_N()
{
    loadSpriteAlt(Hairstyles_N, 24, "Naomi_Sprites/hairstyle_", ".png");
}

void Hairstyle::cycleHairstyles(int maxIndex) {
    cycleSprites(maxIndex);
}
