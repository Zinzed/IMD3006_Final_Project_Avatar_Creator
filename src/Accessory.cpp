#include "Accessory.h"

//void Accessory::loadAccessories() {
//    loadSprite("Sumaiya_Sprites/accessory", ".png");
//}

ofImage* Accessory::getAccessories_N()
{
    return accessories_N;
}

ofImage* Accessory::getAccessories_S()
{
    return accessories_S;
}

void Accessory::loadAccessories_N()
{
    loadSpriteAlt(accessories_N, 6, "Naomi_Sprites/accessory_", ".png");
}

void Accessory::loadAccessories_S()
{
    loadSpriteAlt(accessories_S, 10, "Sumaiya_Sprites/accessory", ".png");
}

void Accessory::cycleAccessories(int maxIndex) {
    cycleSprites(maxIndex);
}