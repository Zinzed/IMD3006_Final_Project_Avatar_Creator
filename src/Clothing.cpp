#include "Clothing.h"

//void Clothing::loadClothes() {
//    loadSprite("Sumaiya_Sprites/clothing", ".png");
//}

ofImage* Clothing::getClothes_N()
{
    return clothes_N;
}

void Clothing::loadClothes_N()
{
    loadSpriteAlt(clothes_N, 7, "Naomi_Sprites/clothes_", ".png");
}

void Clothing::cycleClothes(int maxIndex) {
    cycleSprites(maxIndex);
}
