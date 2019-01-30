#include "tweets.h"
#include "ofMain.h"

//--------------------------------------------------------------
void Tweets::setup(string _tweet, int _positionX, int _positionY) {
    this->tweet = _tweet;
    this->positionX = _positionX;
    this->positionY = _positionY;
}

void Tweets::draw() {
    ofDrawBitmapString(tweet, positionX, positionY);
}
