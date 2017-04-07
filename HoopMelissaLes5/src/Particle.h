#pragma once

#include "ofMain.h"
class Particle
{
public:		
	
	void init(ofPoint startlocation);
	void move();
	void draw();
	void setColors(ofColor outer, ofColor inner);
	ofPoint location; //x+ypositie
	int radius;

	ofColor innerColor;
	ofVec2f speed; //x+ysnelheid
	long lifetime; //lange int 
	//double = lange float
	ofColor outerColor;
	Particle(); //constructor



};

