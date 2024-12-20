#include "Accessory.h"

//void Accessory::loadAccessories() {
//    loadSprite("Sumaiya_Sprites/accessory", ".png");
//}

ofImage* Accessory::getAccessories_N()
{
    return accessories_N;
}

void Accessory::loadAccessories_N()
{
    loadSpriteAlt(accessories_N, 6, "Naomi_Sprites/accessory_", ".png");
}

void Accessory::cycleAccessories(int maxIndex) {
    cycleSprites(maxIndex);
}
