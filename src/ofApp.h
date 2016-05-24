#pragma once

#include "ofMain.h"

//#include <complex.h>
//complex<double> a, b, c, d;
//vector<complex<double>> tr;
//vector<complex<double>[]> transforms;

class ofApp : public ofBaseApp{

    int wh; // resolution, i.e. width*height;
    double x, y, ix, iy;
    double min = -1.0;
    double max = 1.0;

    int count;
    int nt = 3; // num transforms
    int np = 5000; // num points

    int width, height;

    vector<ofVec2f> transforms;
    vector<int> points;  // 'hit count' for pixels

    //ofImage screen;
    ofPixels pixels;
    ofTexture tex;

	public:
        void init();

		void setup();
		void update();
		void draw();

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
