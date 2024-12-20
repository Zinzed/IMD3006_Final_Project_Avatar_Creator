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

#pragma once

#include "ofMain.h"
#include "UI.h"
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


class ofApp : public ofBaseApp
{

	public:
		void setup();
		void update();
		void draw();

		ofImage TEMPstart;
		ofImage TEMPoptions;

		//UI object
		UI buttonControl;

		//Sumaiya sprite objects
		HeadATone headATones_S;
		/*HeadBTone headBTones_S;
		Eyes eyes_S;
		Eyebrows eyebrows_S;
		Nose noses_S;
		Mouth mouthes_S;
		Hairstyle hairstyles_S;
		Clothing clothes_S;
		Accessory accessories_S;*/

		//Naomi sprite objects
		HeadATone headATones_N;
		HeadBTone headBTones_N;
		Eyes eyes_N;
		Eyebrows eyebrows_N;
		Nose noses_N;
		Mouth mouthes_N;
		Hairstyle hairstyles_N;
		Clothing clothes_N;
		Accessory accessories_N;

		bool headAVisible_N;
		bool headBVisible_N;

		//Zineb sprite objects
		HeadATone headATones_Z;
		/*HeadBTone headBTones_Z;
		Eyes eyes_Z;
		Eyebrows eyebrows_Z;
		Nose noses_Z;
		Mouth mouthes_Z;
		Hairstyle hairstyles_Z;
		Clothing clothes_Z;
		Accessory accessories_Z;*/

		/*ofImage headShapeA[8];
		ofImage headShapeB[8];

		ofImage eyes[7];
		ofImage eyebrows[7];
		ofImage clothes[7];

		ofImage noses[6];
		ofImage accessories[6];

		ofImage mouths[14];
		
		ofImage hairstyle[24];*/
		
		//two of the buttons were acting strange even though they were set up 
		//the same as the other ones, so I had to set up their bounding boxes here instead of in the
		//UI class. I tried other methods but this was the only one where it worked as expected
		ofRectangle clothesBtn_BB_N;
		ofRectangle accessoriesBtn_BB_N;

		void naomiCycleBtns(int x, int y);
		//I also had to make this additional function otherwise the same strange behaviour would occur
		void naomiCycleAdditionalBtns(int x, int y);

		bool isReset;
		bool isHeadAToneVisible;
		bool isHeadBToneVisible;

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
