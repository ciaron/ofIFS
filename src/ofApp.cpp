#include "ofApp.h"

//----- my init function for selecting transforms  ---//
void ofApp::init() {
  count = 0;

  // initialise array of hit counts;
  points.resize(wh);
  std::fill(points.begin(), points.end(), 0);

  ix = ofRandom(min, max);
  iy = ofRandom(min, max);

  // see http://openframeworks.cc/ofBook/chapters/how_of_works.html
  pixels.allocate(width, height, OF_IMAGE_COLOR_ALPHA);
  pixels.set(0);

  tex.allocate(width, height, GL_RGBA);

}

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);

    width = ofGetWidth();
    height = ofGetHeight();
    wh = width * height;

    init();
}

//--------------------------------------------------------------
void ofApp::update(){
  /* replace the P5 version's calc() function; */

  points[ofRandom(1.0) * wh] = 1;

}

//--------------------------------------------------------------
void ofApp::draw(){
  ofEnableAlphaBlending();

  //screen.grabScreen(0, 0, width, height);
  //screen.setImageType(OF_IMAGE_COLOR_ALPHA);

  //unsigned char * screenPixels = screen.getPixels();
  //ofBackground(0);
  for (int n=0; n<width*height; n++){


      if (points[n] > 0) {
          pixels.setColor(n*4, ofColor(255,255,255, (int)(ofRandom(0,255))));
          //pixels.setColor(n*4, ofColor(0,255,0));

          //screenPixels[n*4] = 255;
          //screenPixels[(n*4)+1] = 255;
          //screenPixels[(n*4)+2] = 255;
          //screenPixels[(n*4)+3] = (int)(ofRandom(1.0)* 255);

      }
  }

  //screen.update();
  //screen.draw(0,0,width,height);
  tex.loadData(pixels);
  tex.draw(0,0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    // reset the gubbins
    cout << "resetting" << endl;
    init();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
