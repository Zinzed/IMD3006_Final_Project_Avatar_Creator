#include "UI.h"

void UI::loadButtonImages()
{
	buttons_N.load("Naomi_Buttons.png");
	buttons_S.load("Sumaiya_Buttons.png");
	//load other button images here
}

void UI::boolInitStates()
{
	showStartScreen = true;
	showInstrucScreen = false;
	showChoiceScreen = false;
	showNaomisStyle = false;
	showSumaiyasStyle = false;
	showZinebsStyle = false;

	enableStartBtns = true;
	enableInstrucBtns = false;
	enableChoiceBtns = false;
	enableNaomiBtns = false;
	enableSumaiyaBtns = false;
	enableZinebBtns = false;
}

void UI::setBoundingBoxes()
{
	//General button bounding boxes


	//Naomi button bounding boxes
	backBtn_BB_N.set(70, 55, 100, 100);
	headAToneBtn_BB_N.set(70, 265, 375, 75);
	headBToneBtn_BB_N.set(550, 265, 375, 75);
	eyesBtn_BB_N.set(70, 420, 375, 75);
	eyebrowsBtn_N.set(550, 420, 375, 75);
	noseBtn_N.set(70, 575, 375, 75);
	mouthBtn_N.set(550, 575, 375, 75);
	hairstyleBtn_N.set(70, 730, 375, 75);
	clothesBtn_N.set(550, 730, 375, 75);
	accessoriesBtn_N.set(315, 885, 375, 75);

	//Sumaiya button bounding boxes
	backBtn_BB_S.set(52, 58, 89, 89);
	headAToneBtn_BB_S.set(75, 221, 460, 100);
	headBToneBtn_BB_S.set(75, 356, 460, 100);
	eyesBtn_BB_S.set(75, 490, 460, 100);
	noseBtn_S.set(75, 625, 460, 100);
	mouthBtn_S.set(75, 762, 460, 100);
	eyebrowsBtn_S.set(1382, 221, 460, 100);
	hairstyleBtn_S.set(1382, 356, 460, 100);
	clothesBtn_S.set(1382, 490, 460, 100);
	accessoriesBtn_S.set(1382, 625, 460, 100);

	//Zineb button bounding boxes
}

void UI::drawNaomiStyleBtns()
{
	buttons_N.draw(0, 0);
}

void UI::drawSumaiyaStyleBtns()
{
	buttons_S.draw(0, 0);
}

void UI::mousePressed(int x, int y, int button)
{
	if (backBtn_BB_N.inside(x, y) && enableNaomiBtns)
	{
		//if the back button is pressed, show the choice screen 
		//and enable the choice screen's buttons

		showStartScreen = false;
		showInstrucScreen = false;
		showChoiceScreen = true;
		showNaomisStyle = false;
		showSumaiyasStyle = false;
		showZinebsStyle = false;

		enableStartBtns = false;
		enableInstrucBtns = false;
		enableChoiceBtns = true;
		enableNaomiBtns = false;
		enableSumaiyaBtns = false;
		enableZinebBtns = false;
	}

	if (backBtn_BB_S.inside(x, y) && enableSumaiyaBtns)
	{

		showStartScreen = false;
		showInstrucScreen = false;
		showChoiceScreen = true;
		showNaomisStyle = false;
		showSumaiyasStyle = false;
		showZinebsStyle = false;

		enableStartBtns = false;
		enableInstrucBtns = false;
		enableChoiceBtns = true;
		enableNaomiBtns = false;
		enableSumaiyaBtns = false;
		enableZinebBtns = false;
	}
}