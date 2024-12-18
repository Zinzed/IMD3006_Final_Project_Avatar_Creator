#pragma once

#include "ofMain.h"
#include "Sprite.h"
#include "HeadATone.h"
#include "HeadBTone.h"
#include "Eyes.h"
#include "Eyebrows.h"
#include "Nose.h"
#include "Mouth.h"
#include "Clothing.h"
#include "Hairstyle.h"
#include "Accessory.h"
#include "ofxImGui.h"

class ofApp : public ofBaseApp {

public:

	//sprites 
	HeadATone headATones_S;
	HeadBTone headBTones_S;
	Eyes eyes_S;
	Eyebrows eyebrows_S;
	Nose noses_S;
	Mouth mouthes_S;
	Hairstyle hairstyles_S;
	Clothing clothes_S;
	Accessory accessories_S;

	ofxImGui::Gui m_gui;

	bool isReset;
	bool isHeadAToneVisible;
	bool isHeadBToneVisible;


	void setup();
	void update();
	void draw();

};
