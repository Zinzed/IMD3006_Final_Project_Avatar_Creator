#include "Sprite.h"
#include "UI.h"


//void Sprite::loadSprite(ofImage spriteArray[], int arrayMax, string imagePath, string fileType) {
//	for (int i = 0; i < arrayMax; i++)
//	{
//		spriteArray[i].load(imagePath + ofToString(i + 1) + fileType);
//	}
//}

Sprite::Sprite(int size) : arraySize(size) {
    spriteArray = new ofImage[arraySize];
}

Sprite::~Sprite() {
    delete[] spriteArray;
}

//void Sprite::loadSprite(const string& imagePath, const string& fileType) {
//    for (int i = 0; i < arraySize; i++) {
//        spriteArray[i].load(imagePath + ofToString(i + 1) + fileType);
//    }
//}

void Sprite::loadSpriteAlt(ofImage spriteArray[], int arrayMax, string imagePath, string fileType)
{
    arraySize = arrayMax;

    for (int i = 0; i < arraySize; i++)
    {
        spriteArray[i].load(imagePath + ofToString(i + 1) + fileType);
        //cout << "Loaded sprite: " << imagePath + ofToString(i + 1) + fileType << endl;
    }
}

//void Sprite::draw(int index, float x, float y) {
//    if (index >= 0 && index < arraySize) {
//        spriteArray[index].draw(x - spriteArray[index].getWidth() / 2.0, y - spriteArray[index].getHeight() / 2.0);
//    }
//}

void Sprite::cycleSprites(int maxIndex) {

    //cout << "Cycling sprites. Current index before update: " << currentIndex << endl;
    currentIndex = (currentIndex + 1) % maxIndex;
    //cout << "Current index after update: " << currentIndex << endl;
}

void Sprite::drawSprites(ofImage spriteArray[], int maxIndex, float xPos, float yPos)
{
    //cout << "Drawing sprite at index: " << currentIndex << endl;
    if (currentIndex >= 0 && currentIndex < maxIndex) {
        spriteArray[currentIndex].draw(xPos, yPos);
    }
}

