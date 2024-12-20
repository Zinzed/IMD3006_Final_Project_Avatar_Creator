#pragma once
#include "ofMain.h"

class Sprite
{

protected:
    ofImage* spriteArray; // pointer to dynamically allocated array

public:
    int arraySize = 0;        // sprite array size
    int currentIndex = 0; // tracks current sprite index

    Sprite(int size); // constructor
    virtual ~Sprite(); // destructor for cleanup

    //void loadSprite(const string& imagePath, const string& fileType);
    void loadSpriteAlt(ofImage spriteArray[], int arrayMax, string imagePath, string fileType);
    //virtual void draw(int index, float x, float y);
    void cycleSprites(int maxIndex);
    void drawSprites(ofImage spriteArray[], int maxIndex, float xPos, float yPos);
    /*int getCurrentIndex() const;
    void setCurrentIndex(int index);*/
};
