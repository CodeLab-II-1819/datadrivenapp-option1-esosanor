#pragma once

#include "ofMain.h"
#include "tweets.h"
#include "string"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		
    ofTrueTypeFont myfont;
    string titles[10] = {"Total number of tweets", "Money", "Politics", "Paris", "DreamWorks", "Uber", "Love", "Tweets with Images", "University",  "Pizza"};
    
    int padding = 20;
    
    Tweets tweets[7];
    
};
