#include "tweets.h"
#include "ofMain.h"

//--------------------------------------------------------------
void Tweets::setup(string _tweet, string _tweet2, string _tweet3, int _positionX, int _positionY) {
    this->tweet = _tweet;
    this->tweet2 = _tweet2;
    this->tweet3 = _tweet3;
    
    this->positionX = _positionX;
    this->positionY = _positionY;
}

void Tweets::draw() {
    ofDrawBitmapString(tweet, positionX, positionY);
    ofDrawBitmapString(tweet2, positionX, positionY+20);
    ofDrawBitmapString(tweet3, positionX, positionY+40);
}
