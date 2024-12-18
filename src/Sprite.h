#pragma once
#include "ofMain.h"

class Sprite
{

protected:
    ofImage* spriteArray; // pointer to dynamically allocated array
    int arraySize;        // sprite array size
    int currentIndex = 0; // tracks current sprite index

public:
    Sprite(int size); // constructor
    virtual ~Sprite(); // destructor for cleanup

    void loadSprite(const string& imagePath, const string& fileType);
    virtual void draw(int index, float x, float y);
    void cycleSprites();
    int getCurrentIndex() const;
    void setCurrentIndex(int index);
};
//private:
//
//
//
//public:
//    int currentHeadAToneIndex = 0;
//    int currentHeadBToneIndex = 0;
//    int currentEyesIndex = 0;
//    int currentEyebrowsIndex = 0;
//    int currentNoseIndex = 0;
//    int currentMouthIndex = 0;
//    int currentClothingIndex = 0;
//    int currentHairstyleIndex = 0;
//    int currentAccessoryIndex = 0;
//
//
//    virtual void loadSprite(ofImage spriteArray[], int arrayMax, string imagePath, string fileType);
//
//    void loadHeadATones(string head1, string head2, string head3, string head4, string head5, string head6, string head7, string head8);
//    void loadHeadBTones(string head1, string head2, string head3, string head4, string head5, string head6, string head7, string head8);
//    void loadEyes(string eyes1, string eyes2, string eyes3, string eyes4, string eyes5, string eyes6, string eyes7);
//    void loadEyebrows(string eyebrows1, string eyebrows2, string eyebrows3, string eyebrows4, string eyebrows5);
//    void loadNoses(string nose1, string nose2, string nose3, string nose4, string nose5);
//    void loadMouthes(string mouth1, string mouth2, string mouth3, string mouth4, string mouth5);
//    void loadClothes(string clothing1, string clothing2, string clothing3, string clothing4, string clothing5, string clothing6, string clothing7, string clothing8);
//    void loadHairstyles(string hair1, string hair2, string hair3, string hair4, string hair5, string hair6, string hair7);
//    void loadAccessories(string accessory1, string accessory2, string accessory3, string accessory4, string accessory5, string accessory6, string accessory7, string accessory8, string accessory9, string accessory10);
//
//    void drawSprites();
//
//    void cycleSprites(int& currentIndex, int arraySize);
//
//    void cycleHeadATones();
//    void cycleHeadBTones();
//    void cycleEyes();
//    void cycleEyebrows();
//    void cycleNoses();
//    void cycleMouthes();
//    void cycleClothes();
//    void cycleHairstyles();
//    void cycleAccessories();

//};
