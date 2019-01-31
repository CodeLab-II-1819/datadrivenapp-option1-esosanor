#pragma once

#include "ofMain.h"
#include "string"

class Tweets {
public:
    string tweet;
    string tweet2;
    string tweet3;
    
    int positionX;
    int positionY;
    
    void setup(string _tweet1, string _tweet2, string _tweet3, int _positionX, int _positionY);
    void draw();
};

