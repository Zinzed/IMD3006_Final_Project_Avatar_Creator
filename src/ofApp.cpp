#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	m_gui.setup();

	isReset = false;

	isHeadAToneVisible = true;
	isHeadBToneVisible = false;

	//loading sprites
	headATones_S.loadHeadATones();
	headBTones_S.loadHeadBTones();
	eyes_S.loadEyes();
	eyebrows_S.loadEyebrows();
	noses_S.loadNoses();
	mouthes_S.loadMouthes();
	clothes_S.loadClothes();
	hairstyles_S.loadHairstyles();
	accessories_S.loadAccessories();
	
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {

	//white bg
	ofBackground(255);

	float centerX = ofGetWidth() / 2.0;
	float centerY = ofGetHeight() / 2.0;

	//drawing sprites

	//to ensure only one head shape is drawn at a time
	if (isHeadAToneVisible) {
		headATones_S.draw(headATones_S.getCurrentIndex(), centerX, centerY);
	}
	else {
		headBTones_S.draw(headBTones_S.getCurrentIndex(), centerX, centerY);
	}
	
	eyes_S.draw(eyes_S.getCurrentIndex(), centerX, centerY);
	eyebrows_S.draw(eyebrows_S.getCurrentIndex(), centerX, centerY);
	noses_S.draw(noses_S.getCurrentIndex(), centerX, centerY);
	mouthes_S.draw(mouthes_S.getCurrentIndex(), centerX, centerY);
	clothes_S.draw(clothes_S.getCurrentIndex(), centerX, centerY);
	hairstyles_S.draw(hairstyles_S.getCurrentIndex(), centerX, centerY);
	accessories_S.draw(accessories_S.getCurrentIndex(), centerX, centerY);



	m_gui.begin();

	//buttons to cycle through each category 
	if (ImGui::Button("Head A Tones", ofVec2f(ImGui::GetWindowSize().x, 30.0f))) {
		headATones_S.cycleHeadATones();
		isHeadAToneVisible = true;
		isHeadBToneVisible = false;
	}

	if (ImGui::Button("Head B Tones", ofVec2f(ImGui::GetWindowSize().x, 30.0f))) {
		headBTones_S.cycleHeadBTones();
		isHeadAToneVisible= false;
		isHeadBToneVisible = true;
	}

	if (ImGui::Button("Eyes", ofVec2f(ImGui::GetWindowSize().x, 30.0f))) {
		eyes_S.cycleEyes();
	}

	if (ImGui::Button("Eyebrows", ofVec2f(ImGui::GetWindowSize().x, 30.0f))) {
		eyebrows_S.cycleEyebrows();
	}

	if (ImGui::Button("Nose", ofVec2f(ImGui::GetWindowSize().x, 30.0f))) {
		noses_S.cycleNoses();
	}
	if (ImGui::Button("Mouth", ofVec2f(ImGui::GetWindowSize().x, 30.0f))) {
		mouthes_S.cycleMouthes();
	}
	if (ImGui::Button("Clothes", ofVec2f(ImGui::GetWindowSize().x, 30.0f))) {
		clothes_S.cycleClothes();
	}
	if (ImGui::Button("Hairstyles", ofVec2f(ImGui::GetWindowSize().x, 30.0f))) {
		hairstyles_S.cycleHairstyles();
	}

	if (ImGui::Button("Accessories", ofVec2f(ImGui::GetWindowSize().x, 30.0f))) {
		accessories_S.cycleAccessories();
	}

	/*if (ImGui::Button("Reset", ofVec2f(ImGui::GetWindowSize().x, 30.0f))) {
		isReset = true;
	}*/
	m_gui.end();

	

}
