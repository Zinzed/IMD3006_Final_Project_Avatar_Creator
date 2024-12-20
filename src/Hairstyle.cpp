#include "Hairstyle.h"

//void Hairstyle::loadHairstyles() {
//    loadSprite("Sumaiya_Sprites/hair", ".png");
//}

ofImage* Hairstyle::getHairstyles_N()
{
    return Hairstyles_N;
}

ofImage* Hairstyle::getHairstyles_S()
{
    return Hairstyles_S;
}

void Hairstyle::loadHairstyles_N()
{
    loadSpriteAlt(Hairstyles_N, 24, "Naomi_Sprites/hairstyle_", ".png");
}

void Hairstyle::loadHairstyles_S()
{
    loadSpriteAlt(Hairstyles_S, 7, "Sumaiya_Sprites/hair", ".png");
}

void Hairstyle::cycleHairstyles(int maxIndex) {
    cycleSprites(maxIndex);
}