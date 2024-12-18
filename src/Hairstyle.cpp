#include "Hairstyle.h"

void Hairstyle::loadHairstyles() {
    loadSprite("Sumaiya_Sprites/hair", ".png");
}

void Hairstyle::cycleHairstyles() {
    cycleSprites();
}
