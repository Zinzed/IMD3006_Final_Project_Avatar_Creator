#pragma once

#include "ofMain.h"
#include "HeadATone.h"

class UI
{
private:
	//sprite objects
	HeadATone headAControl;

	//general buttons
	//***insert the start, instructions and choice button images here***//

	//Naomi's buttons
	ofImage buttons_N;

	//bounding boxes for Naomi's buttons
	ofRectangle backBtn_BB_N;


	//Sumaiya's buttons
	//***insert your button image(s) here***//
	ofImage buttons_S;

	

	//Zineb's buttons
	//***insert your button image(s) here***//

	//bounding boxes for Zineb's buttons
	ofRectangle backBtn_BB_Z;
	ofRectangle headAToneBtn_BB_Z;
	ofRectangle headBToneBtn_BB_Z;
	ofRectangle eyesBtn_BB_Z;
	ofRectangle eyebrowsBtn_Z;
	ofRectangle noseBtn_Z;
	ofRectangle mouthBtn_Z;
	ofRectangle hairstyleBtn_Z;
	ofRectangle clothesBtn_Z;
	ofRectangle accessoriesBtn_Z;



public:

	//loads button images
	void loadButtonImages();

	//set the values for the button bounding boxes
	void setBoundingBoxes();

	//tracks what screen should be displayed
	bool showStartScreen;
	bool showInstrucScreen;
	bool showChoiceScreen;
	bool showNaomisStyle;
	bool showSumaiyasStyle;
	bool showZinebsStyle;

	//tracks when buttons should be enabled
	bool enableStartBtns;
	bool enableInstrucBtns;
	bool enableChoiceBtns;
	bool enableNaomiBtns;
	bool enableSumaiyaBtns;
	bool enableZinebBtns;

	//initial values for all booleans
	void boolInitStates();

	//functions for drawing buttons
	//void drawStartScreenBtns();
	//void drawInstrucScreenBtns();
	//void drawChoiceScreenBtns();
	void drawNaomiStyleBtns();
	void drawSumaiyaStyleBtns();
	//void drawZinebStyleBtns();

	ofRectangle headAToneBtn_BB_N;
	ofRectangle headBToneBtn_BB_N;
	ofRectangle eyesBtn_BB_N;
	ofRectangle eyebrowsBtn_N;
	ofRectangle noseBtn_N;
	ofRectangle mouthBtn_N;
	ofRectangle hairstyleBtn_N;
	ofRectangle clothesBtn_N;
	ofRectangle accessoriesBtn_N;

	//bounding boxes for Sumaiya's buttons
	ofRectangle backBtn_BB_S;
	ofRectangle headAToneBtn_BB_S;
	ofRectangle headBToneBtn_BB_S;
	ofRectangle eyesBtn_BB_S;
	ofRectangle noseBtn_S;
	ofRectangle mouthBtn_S;
	ofRectangle hairstyleBtn_S;
	ofRectangle eyebrowsBtn_S;
	ofRectangle clothesBtn_S;
	ofRectangle accessoriesBtn_S;

	//button logic
	void mousePressed(int x, int y, int button);
};
