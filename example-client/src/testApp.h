#pragma once

#include "ofMain.h"
#include "ofxBonjour.h"

using namespace ofxBonjour;

class testApp : public ofBaseApp{
    
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        void discoveredServices( vector<NSNetService*> & services );
        void gotServiceData( Service & service );
    
        Client bonjourClient;
};
