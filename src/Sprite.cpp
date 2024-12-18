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

void Sprite::loadSprite(const string& imagePath, const string& fileType) {
    for (int i = 0; i < arraySize; i++) {
        spriteArray[i].load(imagePath + ofToString(i + 1) + fileType);
    }
}

void Sprite::draw(int index, float x, float y) {
    if (index >= 0 && index < arraySize) {
        spriteArray[index].draw(x - spriteArray[index].getWidth() / 2.0, y - spriteArray[index].getHeight() / 2.0);
    }
}

void Sprite::cycleSprites() {
    currentIndex = (currentIndex + 1) % arraySize;
}

int Sprite::getCurrentIndex() const {
    return currentIndex;
}

void Sprite::setCurrentIndex(int index) {
    if (index >= 0 && index < arraySize) {
        currentIndex = index;
    }
}
//void Sprite::loadHeadATones(string head1, string head2, string head3, string head4, string head5, string head6, string head7, string head8) {
//	//loadSprite(headATones_S, 8, "Sumaiya_Sprites/headATone", ".png");
//
//	/*headATones_S[0].load(head1);
//	headATones_S[1].load(head2);
//	headATones_S[2].load(head3);
//	headATones_S[3].load(head4);
//	headATones_S[4].load(head5);
//	headATones_S[5].load(head6);
//	headATones_S[6].load(head7);
//	headATones_S[7].load(head8);*/
//
//	for (int i = 0; i < 8; i++)
//	{
//		headATones_S[i].load("Sumaiya_Sprites/headATone" + ofToString(i + 1) + ".png");
//	}
//
//
//
//}
//void Sprite::loadHeadBTones(string head1, string head2, string head3, string head4, string head5, string head6, string head7, string head8) {
//
//	//loadSprite(headBTones_S, 8, "Sumaiya_Sprites/headBTone", ".png");
//	/*headBTones_S[0].load(head1);
//	headBTones_S[1].load(head2);
//	headBTones_S[2].load(head3);
//	headBTones_S[3].load(head4);
//	headBTones_S[4].load(head5);
//	headBTones_S[5].load(head6);
//	headBTones_S[6].load(head7);
//	headBTones_S[7].load(head8);*/
//
//	for (int i = 0; i < 8; i++)
//	{
//		headBTones_S[i].load("Sumaiya_Sprites/headBTone" + ofToString(i + 1) + ".png");
//	}
//}
//void Sprite::loadEyes(string eyes1, string eyes2, string eyes3, string eyes4, string eyes5, string eyes6, string eyes7) {
//
//	//loadSprite(headBTones_S, 8, "Sumaiya_Sprites/headBTone", ".png");
//	/*eyes_S[0].load(eyes1);
//	eyes_S[1].load(eyes2);
//	eyes_S[2].load(eyes3);
//	eyes_S[3].load(eyes4);
//	eyes_S[4].load(eyes5);
//	eyes_S[5].load(eyes6);
//	eyes_S[6].load(eyes7);*/
//	for (int i = 0; i < 7; i++)
//	{
//		eyes_S[i].load("Sumaiya_Sprites/eyes" + ofToString(i + 1) + ".png");
//	}
//}
//void Sprite::loadEyebrows(string eyebrows1, string eyebrows2, string eyebrows3, string eyebrows4, string eyebrows5) {
//	/*eyebrows_S[0].load(eyebrows1);
//	eyebrows_S[1].load(eyebrows2);
//	eyebrows_S[2].load(eyebrows3);
//	eyebrows_S[3].load(eyebrows4);
//	eyebrows_S[4].load(eyebrows5);*/
//
//	for (int i = 0; i < 5; i++)
//	{
//		eyebrows_S[i].load("Sumaiya_Sprites/eyebrows" + ofToString(i + 1) + ".png");
//	}
//}
//void Sprite::loadNoses(string nose1, string nose2, string nose3, string nose4, string nose5) {
//	/*noses_S[0].load(nose1);
//	noses_S[1].load(nose2);
//	noses_S[2].load(nose3);
//	noses_S[3].load(nose4);
//	noses_S[4].load(nose5);*/
//
//	for (int i = 0; i < 5; i++)
//	{
//		noses_S[i].load("Sumaiya_Sprites/nose" + ofToString(i + 1) + ".png");
//	}
//}
//void Sprite::loadMouthes(string mouth1, string mouth2, string mouth3, string mouth4, string mouth5) {
//	/*mouthes_S[0].load(mouth1);
//	mouthes_S[1].load(mouth2);
//	mouthes_S[2].load(mouth3);
//	mouthes_S[3].load(mouth4);
//	mouthes_S[4].load(mouth5);*/
//
//	for (int i = 0; i < 5; i++)
//	{
//		mouthes_S[i].load("Sumaiya_Sprites/mouth" + ofToString(i + 1) + ".png");
//	}
//}
//void Sprite::loadClothes(string clothing1, string clothing2, string clothing3, string clothing4, string clothing5, string clothing6, string clothing7, string clothing8) {
//	/*clothes_S[0].load(clothing1);
//	clothes_S[1].load(clothing2);
//	clothes_S[2].load(clothing3);
//	clothes_S[3].load(clothing4);
//	clothes_S[4].load(clothing5);
//	clothes_S[5].load(clothing6);
//	clothes_S[6].load(clothing7);
//	clothes_S[7].load(clothing8);*/
//
//	for (int i = 0; i < 8; i++)
//	{
//		clothes_S[i].load("Sumaiya_Sprites/clothing" + ofToString(i + 1) + ".png");
//	}
//}
//void Sprite::loadHairstyles(string hair1, string hair2, string hair3, string hair4, string hair5, string hair6, string hair7) {
//	/*hairstyles_S[0].load(hair1);
//	hairstyles_S[1].load(hair2);
//	hairstyles_S[2].load(hair3);
//	hairstyles_S[3].load(hair4);
//	hairstyles_S[4].load(hair5);
//	hairstyles_S[5].load(hair6);
//	hairstyles_S[6].load(hair7);*/
//
//	for (int i = 0; i < 7; i++)
//	{
//		hairstyles_S[i].load("Sumaiya_Sprites/hair" + ofToString(i + 1) + ".png");
//	}
//}
//void Sprite::loadAccessories(string accessory1, string accessory2, string accessory3, string accessory4, string accessory5, string accessory6, string accessory7, string accessory8, string accessory9, string accessory10) {
//	/*accessories_S[0].load(accessory1);
//	accessories_S[1].load(accessory2);
//	accessories_S[2].load(accessory3);
//	accessories_S[3].load(accessory4);
//	accessories_S[4].load(accessory5);
//	accessories_S[5].load(accessory6);
//	accessories_S[6].load(accessory7);
//	accessories_S[7].load(accessory8);
//	accessories_S[8].load(accessory9);
//	accessories_S[9].load(accessory10);*/
//
//	for (int i = 0; i < 10; i++)
//	{
//		accessories_S[i].load("Sumaiya_Sprites/accessory" + ofToString(i + 1) + ".png");
//	}
//}
//
//void Sprite::drawSprites() {
//
//	float centerX = ofGetWidth() / 2.0;
//	float centerY = ofGetHeight() / 2.0;
//
//	/*headATones_S[0].draw(centerX - headATones_S[0].getWidth() / 2.0, centerY - headATones_S[0].getHeight() / 2.0);
//	eyes_S[0].draw(centerX - eyes_S[0].getWidth() / 2.0, centerY - eyes_S[0].getHeight() / 2.0);
//	eyebrows_S[0].draw(centerX - eyebrows_S[0].getWidth() / 2.0, centerY - eyebrows_S[0].getHeight() / 2.0);
//	noses_S[0].draw(centerX - noses_S[0].getWidth() / 2.0, centerY - noses_S[0].getHeight() / 2.0);
//	mouthes_S[0].draw(centerX - mouthes_S[0].getWidth() / 2.0, centerY - mouthes_S[0].getHeight() / 2.0);
//	hairstyles_S[0].draw(centerX - hairstyles_S[0].getWidth() / 2.0, centerY - hairstyles_S[0].getHeight() / 2.0);
//	clothes_S[0].draw(centerX - clothes_S[0].getWidth() / 2.0, centerY - clothes_S[0].getHeight() / 2.0);
//	accessories_S[0].draw(centerX - accessories_S[0].getWidth() / 2.0, centerY - accessories_S[0].getHeight() / 2.0);*/
//	//(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
//
//	headATones_S[currentHeadAToneIndex].draw(centerX - headATones_S[currentHeadAToneIndex].getWidth() / 2.0, centerY - headATones_S[currentHeadAToneIndex].getHeight() / 2.0);
//	headBTones_S[currentHeadBToneIndex].draw(centerX - headBTones_S[currentHeadBToneIndex].getWidth() / 2.0, centerY - headBTones_S[currentHeadBToneIndex].getHeight() / 2.0);
//	eyes_S[currentEyesIndex].draw(centerX - eyes_S[currentEyesIndex].getWidth() / 2.0, centerY - eyes_S[currentEyesIndex].getHeight() / 2.0);
//	eyebrows_S[currentEyebrowsIndex].draw(centerX - eyebrows_S[currentEyebrowsIndex].getWidth() / 2.0, centerY - eyebrows_S[currentEyebrowsIndex].getHeight() / 2.0);
//	noses_S[currentNoseIndex].draw(centerX - noses_S[currentNoseIndex].getWidth() / 2.0, centerY - noses_S[currentNoseIndex].getHeight() / 2.0);
//	mouthes_S[currentMouthIndex].draw(centerX - mouthes_S[currentMouthIndex].getWidth() / 2.0, centerY - mouthes_S[currentMouthIndex].getHeight() / 2.0);
//	clothes_S[currentClothingIndex].draw(centerX - clothes_S[currentClothingIndex].getWidth() / 2.0, centerY - clothes_S[currentClothingIndex].getHeight() / 2.0);
//	hairstyles_S[currentHairstyleIndex].draw(centerX - hairstyles_S[currentHairstyleIndex].getWidth() / 2.0, centerY - hairstyles_S[currentHairstyleIndex].getHeight() / 2.0);
//	accessories_S[currentAccessoryIndex].draw(centerX - accessories_S[currentAccessoryIndex].getWidth() / 2.0, centerY - accessories_S[currentAccessoryIndex].getHeight() / 2.0);
//	//(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
//}
//	
//
//
//void Sprite::cycleSprites(int& currentIndex, int arraySize) {
//	currentIndex = (currentIndex + 1) % arraySize;
//}
//
//void Sprite::cycleHeadATones() {
//	cycleSprites(currentHeadAToneIndex, 8);
//}
//void Sprite::cycleHeadBTones() {
//	cycleSprites(currentHeadBToneIndex, 8);
//}
//
//void Sprite::cycleEyes() {
//	cycleSprites(currentEyesIndex, 7); //size of eyes array
//}
//
//void Sprite::cycleEyebrows() {
//	cycleSprites(currentEyesIndex, 5); //size of array
//}
//void Sprite::cycleNoses() {
//	cycleSprites(currentNoseIndex, 5);
//
//}
//void Sprite::cycleMouthes() {
//	cycleSprites(currentMouthIndex, 5);
//
//}
//void Sprite::cycleClothes() {
//	cycleSprites(currentClothingIndex, 8);
//}
//void Sprite::cycleHairstyles() {
//	cycleSprites(currentHairstyleIndex, 7);
//}
//void Sprite::cycleAccessories() {
//	cycleSprites(currentAccessoryIndex, 10);
//}
