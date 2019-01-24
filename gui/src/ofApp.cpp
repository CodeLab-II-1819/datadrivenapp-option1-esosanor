#include "ofApp.h"

//ofDrawRectangle(x, y, width, height);

//--------------------------------------------------------------
void ofApp::setup(){
    //called once
    myfont.load("fonts/Lush.ttf", 22);
}

//--------------------------------------------------------------
void ofApp::update(){
    //called 60 times a second

}

//--------------------------------------------------------------
void ofApp::draw(){
    //called 60 times a second
    
    ofSetColor(244, 244, 66); // yellow
    ofDrawRectangle(padding, padding, 400, 680); // left panel background colour
    ofSetColor(0, 0, 0); // colour for header
    myfont.drawString("Tweeter", 50, 100);
    
    ofSetColor(247, 247, 242); // white
    ofDrawRectangle(400, 20, 600, 680); // right panel background colour
   // ofSetColor(0, 0, 0); // colour for header - black
    
    ofSetColor(216, 214, 214); // colour for tweet display - grey
    ofDrawRectangle(500, 80, 400, 580);
    
    for (int i = 0; i < 10; i++) {
        ofSetColor(0,0,0); // colour for circle
        ofDrawCircle(70, 180 + i*50, 20); // position for circle
        ofSetColor(247, 247, 242); // colour for text
        ofDrawBitmapString(i+1, 65, 185+ i*50); // number
        ofSetColor(0, 0, 0, 255);
        ofDrawBitmapString(titles[i], 100, 185+ i*50); // options
        
        ofSetColor(0,0,0); // black
        ofDrawBitmapString("To choose an option type a number between 1 and 10 and press enter", 60, 130);
    
    
    }
    
    
    //ofDrawRectangle(x, y, width, height);
    //ofDrawRectangle(20, 20, 100, 30);
    
    //ofDrawBitmapString(Text, x, y);
    //ofDrawBitmapString("Hello World", 300, 300);
    
    //ofSetColor(red, green, blue);
    //ofSetColor(255, 0, 0);
   // ofDrawRectangle(20, 20, 100, 30);

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
