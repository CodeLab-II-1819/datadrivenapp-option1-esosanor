#pragma once

#include "ofMain.h"
#include "string"

class Tweets {
public:
    string tweet;
    int positionX;
    int positionY;
    
    void setup(string _tweet, int _positionX, int _positionY);
    void draw();
};

