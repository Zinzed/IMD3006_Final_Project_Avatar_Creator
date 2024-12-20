#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	//m_gui.setup();

	isReset = false;

	isHeadAToneVisible = true;
	isHeadBToneVisible = false;

	//Sumaiya stuff
	headATones_S.loadHeadATones_S();
	headBTones_S.loadHeadBTones_S();
	eyes_S.loadEyes_S();
	eyebrows_S.loadEyebrows_S();
	noses_S.loadNoses_S();
	mouthes_S.loadMouthes_S();
	clothes_S.loadClothes_S();
	hairstyles_S.loadHairstyles_S();
	accessories_S.loadAccessories_S();

	buttonControl.loadButtonImages();
	buttonControl.boolInitStates();
	buttonControl.setBoundingBoxes();

	//Naomi stuff
	//clothesBtn_BB_N.set(550, 730, 375, 75);
	//accessoriesBtn_BB_N.set(315, 885, 375, 75);

	headAVisible_N = true;
	headBVisible_N = false;

	headATones_N.loadHeadATones_N();
	headBTones_N.loadHeadBTones_N();
	eyes_N.loadEyes_N();
	eyebrows_N.loadEyebrows_N();
	hairstyles_N.loadHairstyles_N();
	noses_N.loadNoses_N();
	mouthes_N.loadMouthes_N();
	clothes_N.loadClothes_N();
	accessories_N.loadAccessories_N();

	TEMPstart.load("StartScreenTemp_DELETE_LATER.png");
	TEMPoptions.load("OptionsTemp_DELETE_LATER.png");

}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {

	//white bg
	ofBackground(255);

	//float centerX = ofGetWidth() / 2.0;
	//float centerY = ofGetHeight() / 2.0;

	//drawing sprites
	float centerX = ofGetWidth() / 2.0;
	float centerY = ofGetHeight() / 2.0;


	if (buttonControl.showStartScreen)
	{
		TEMPstart.draw(0, 0);
	}
	if (buttonControl.showChoiceScreen)
	{
		TEMPoptions.draw(0, 0);
	}
	if (buttonControl.showNaomisStyle)
	{
		buttonControl.drawNaomiStyleBtns();
		if (headAVisible_N && !headBVisible_N)
		{
			headATones_N.drawSprites(headATones_N.getHeadATones_N(), 8, 0, 0);
		}
		else if (!headAVisible_N && headBVisible_N)
		{
			headBTones_N.drawSprites(headBTones_N.getHeadBTones_N(), 8, 0, 0);
		}
		eyes_N.drawSprites(eyes_N.getEyes_N(), 7, 0, 0);
		eyebrows_N.drawSprites(eyebrows_N.getEyebrows_N(), 7, 0, 0);
		hairstyles_N.drawSprites(hairstyles_N.getHairstyles_N(), 24, 0, 0);
		noses_N.drawSprites(noses_N.getNoses_N(), 6, 0, 0);
		mouthes_N.drawSprites(mouthes_N.getMouthes_N(), 14, 0, 0);
		clothes_N.drawSprites(clothes_N.getClothes_N(), 7, 0, 0);
		accessories_N.drawSprites(accessories_N.getAccessories_N(), 6, 0, 0);
	}
	//insert your sprites here :)
	if (buttonControl.showSumaiyasStyle)
	{
		ofPushMatrix();

		ofSetColor(255);
		ofScale(1.5);
		int x = 340;
		int y = 80;

		
		if (isHeadAToneVisible && !isHeadBToneVisible)
		{
			
			headATones_S.drawSprites(headATones_S.getHeadATones_S(), 8, x,y);
		}
		else if (!isHeadAToneVisible && isHeadBToneVisible)
		{
			headBTones_S.drawSprites(headBTones_S.getHeadBTones_S(), 8,x, y);
		}
		eyes_S.drawSprites(eyes_S.getEyes_S(), 7, x, y);
		eyebrows_S.drawSprites(eyebrows_S.getEyebrows_S(), 5, x, y);
		noses_S.drawSprites(noses_S.getNoses_S(), 5, x, y);
		mouthes_S.drawSprites(mouthes_S.getMouthes_S(), 5, x, y);
		clothes_S.drawSprites(clothes_S.getClothes_S(), 8, x, y);
		hairstyles_S.drawSprites(hairstyles_S.getHairstyles_S(), 7, x, y);
		accessories_S.drawSprites(accessories_S.getAccessories_S(), 10, x, y);

		ofPopMatrix();

		buttonControl.drawSumaiyaStyleBtns();
		
	}



}

void ofApp::keyPressed(int key) {

	//TEMPORARY this logic will be controlled by the UI class later

	if (key == 'p')
	{
		buttonControl.showStartScreen = false;
		buttonControl.showInstrucScreen = false;
		buttonControl.showChoiceScreen = true;
		buttonControl.showNaomisStyle = false;
		buttonControl.showSumaiyasStyle = false;
		buttonControl.showZinebsStyle = false;

		buttonControl.enableStartBtns = false;
		buttonControl.enableInstrucBtns = false;
		buttonControl.enableChoiceBtns = true;
		buttonControl.enableNaomiBtns = false;
		buttonControl.enableSumaiyaBtns = false;
		buttonControl.enableZinebBtns = false;
	}

	if (key == 'n')
	{
		buttonControl.showStartScreen = false;
		buttonControl.showInstrucScreen = false;
		buttonControl.showChoiceScreen = false;
		buttonControl.showNaomisStyle = true;
		buttonControl.showSumaiyasStyle = false;
		buttonControl.showZinebsStyle = false;

		buttonControl.enableStartBtns = false;
		buttonControl.enableInstrucBtns = false;
		buttonControl.enableChoiceBtns = false;
		buttonControl.enableNaomiBtns = true;
		buttonControl.enableSumaiyaBtns = false;
		buttonControl.enableZinebBtns = false;
	}

	if (key == 's')
	{
		buttonControl.showStartScreen = false;
		buttonControl.showInstrucScreen = false;
		buttonControl.showChoiceScreen = false;
		buttonControl.showNaomisStyle = false;
		buttonControl.showSumaiyasStyle = true;
		buttonControl.showZinebsStyle = false;

		buttonControl.enableStartBtns = false;
		buttonControl.enableInstrucBtns = false;
		buttonControl.enableChoiceBtns = false;
		buttonControl.enableNaomiBtns = false;
		buttonControl.enableSumaiyaBtns = true;
		buttonControl.enableZinebBtns = false;
	}

}

void ofApp::naomiCycleBtns(int x, int y)
{
	if (buttonControl.headAToneBtn_BB_N.inside(x, y) && buttonControl.enableNaomiBtns)
	{
		headATones_N.cycleHeadATones(8);
		headAVisible_N = true;
		headBVisible_N = false;
	}
	if (buttonControl.headBToneBtn_BB_N.inside(x, y) && buttonControl.enableNaomiBtns)
	{
		headBTones_N.cycleHeadBTones(8);
		headAVisible_N = false;
		headBVisible_N = true;
	}
	if (buttonControl.eyesBtn_BB_N.inside(x, y) && buttonControl.enableNaomiBtns)
	{
		eyes_N.cycleEyes(7);
	}
	if (buttonControl.eyebrowsBtn_N.inside(x, y) && buttonControl.enableNaomiBtns)
	{
		eyebrows_N.cycleEyebrows(7);
	}
	if (buttonControl.hairstyleBtn_N.inside(x, y) && buttonControl.enableNaomiBtns)
	{
		hairstyles_N.cycleHairstyles(24);
	}
	if (buttonControl.noseBtn_N.inside(x, y) && buttonControl.enableNaomiBtns)
	{
		noses_N.cycleNoses(6);
	}
	if (buttonControl.mouthBtn_N.inside(x, y) && buttonControl.enableNaomiBtns)
	{
		mouthes_N.cycleMouthes(14);
	}
	if (buttonControl.clothesBtn_N.inside(x, y) && buttonControl.enableNaomiBtns)
	{
		clothes_N.cycleClothes(7);
	}
	if (buttonControl.accessoriesBtn_N.inside(x, y) && buttonControl.enableNaomiBtns)
	{
		accessories_N.cycleAccessories(6);
	} 
}

void ofApp::sumaiyaCycleBtns(int x, int y)
{
	if (buttonControl.headAToneBtn_BB_S.inside(x, y) && buttonControl.enableSumaiyaBtns)
	{
		//cout << "headA button was pressed!!!" << endl;
		headATones_S.cycleHeadATones(8);
		isHeadAToneVisible = true;
		isHeadBToneVisible = false;
	}
	if (buttonControl.headBToneBtn_BB_S.inside(x, y) && buttonControl.enableSumaiyaBtns)
	{
		headBTones_S.cycleHeadBTones(8);
		isHeadAToneVisible = false;
		isHeadBToneVisible = true;
	}
	if (buttonControl.eyesBtn_BB_S.inside(x, y) && buttonControl.enableSumaiyaBtns)
	{
		eyes_S.cycleEyes(7);
	}
	if (buttonControl.eyebrowsBtn_S.inside(x, y) && buttonControl.enableSumaiyaBtns)
	{
		eyebrows_S.cycleEyebrows(5);
	}
	if (buttonControl.hairstyleBtn_S.inside(x, y) && buttonControl.enableSumaiyaBtns)
	{
		hairstyles_S.cycleHairstyles(7);
	}
	if (buttonControl.noseBtn_S.inside(x, y) && buttonControl.enableSumaiyaBtns)
	{
		noses_S.cycleNoses(5);
	}
	if (buttonControl.mouthBtn_S.inside(x, y) && buttonControl.enableSumaiyaBtns)
	{
		mouthes_S.cycleMouthes(5);
	}

	if (buttonControl.clothesBtn_S.inside(x, y) && buttonControl.enableSumaiyaBtns)
	{
		clothes_S.cycleClothes(8);
	}
	if (buttonControl.accessoriesBtn_S.inside(x, y) && buttonControl.enableSumaiyaBtns)
	{
		accessories_S.cycleAccessories(10);
	} 
}
//void ofApp::naomiCycleAdditionalBtns(int x, int y)
//{
//	if (clothesBtn_BB_N.inside(x, y) && buttonControl.enableNaomiBtns)
//	{
//		clothes_N.cycleClothes(7);
//	}
//	if (accessoriesBtn_BB_N.inside(x, y) && buttonControl.enableNaomiBtns)
//	{
//		accessories_N.cycleAccessories(6);
//	}
//}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

	buttonControl.mousePressed(x, y, button);
	naomiCycleBtns(x, y);
	sumaiyaCycleBtns(x, y);
	//naomiCycleAdditionalBtns(x, y);
	//headATones_N.cycleHeadATones(8);		
}