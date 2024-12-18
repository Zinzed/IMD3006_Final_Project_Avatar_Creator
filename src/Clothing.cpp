#include "Clothing.h"

void Clothing::loadClothes() {
    loadSprite("Sumaiya_Sprites/clothing", ".png");
}

void Clothing::cycleClothes() {
    cycleSprites();
}