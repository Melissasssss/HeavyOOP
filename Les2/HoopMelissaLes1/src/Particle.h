#pragma once

#include "ofMain.h"
class Particle
{
private:		
	ofPoint location; //x+ypositie
	int radius;

	ofColor innerColor;
	ofVec2f speed; //x+ysnelheid
	long lifetime; //lange int 
	ofColor outerColor;

public: 
	Particle(); //constructor

	void init();
	void move();
	void draw();
	void setColors(ofColor outer, ofColor inner);


};

