#include "ofApp.h"

//----- my init function for selecting transforms  ---//
void ofApp::init() {
  count = 0;

  // initialise array of hit counts;
  points.resize(wh);
  std::fill(points.begin(), points.end(), 0);

  ix = ofRandom(1.0);
  iy = ofRandom(1.0);
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
  /* replace the P5 calc() function; */

  points[ofRandom(1.0) * wh] = 1;

}

//--------------------------------------------------------------
void ofApp::draw(){

  screen.grabScreen(0, 0, width, height);
  screen.setImageType(OF_IMAGE_COLOR_ALPHA);

  unsigned char * screenPixels = screen.getPixels();

  for (int n=0; n<width*height; n++){

      if (points[n] > 0) {

          screenPixels[n*4] = 255;
          screenPixels[(n*4)+1] = 255;
          screenPixels[(n*4)+2] = 255;
          screenPixels[(n*4)+3] = (int)(ofRandom(1.0)* 255);

      }
  }

  screen.update();
  screen.draw(0,0,width,height);
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
