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

	buttonControl.loadButtonImages();
	buttonControl.boolInitStates();
	buttonControl.setBoundingBoxes();

	clothesBtn_BB_N.set(550, 730, 375, 75);
	accessoriesBtn_BB_N.set(315, 885, 375, 75);

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

	float centerX = ofGetWidth() / 2.0;
	float centerY = ofGetHeight() / 2.0;

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
	if (buttonControl.showSumaiyasStyle)
	{
		//insert your sprites here :)
	}

	//*****I dont think we'll need everything below this comment but keeping it just in case*****//
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

void ofApp::keyPressed(int key){

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
	//if (buttonControl.clothesBtn_N.inside(x, y) && buttonControl.enableNaomiBtns);
	//{
	//	cout << "Clothes button pressed" << endl;
	//	//clothes_N.cycleClothes(7);
	//}
	///*if (buttonControl.accessoriesBtn_N.inside(x, y) && buttonControl.enableNaomiBtns);
	//{
	//	accessories_N.cycleAccessories(6);
	//} */
}

void ofApp::naomiCycleAdditionalBtns(int x, int y)
{
	if (clothesBtn_BB_N.inside(x, y) && buttonControl.enableNaomiBtns)
	{
		clothes_N.cycleClothes(7);
	}
	if (accessoriesBtn_BB_N.inside(x, y) && buttonControl.enableNaomiBtns)
	{
		accessories_N.cycleAccessories(6);
	}
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

	buttonControl.mousePressed(x, y, button);
	naomiCycleBtns(x, y);
	naomiCycleAdditionalBtns(x, y);
	//headATones_N.cycleHeadATones(8);		
}
