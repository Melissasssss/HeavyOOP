#pragma once

#include "ofMain.h"
#define MAX_LIFETIME 80

class Particle {

private:
	ofPoint location;
	int radius;
	ofVec2f speed;
	long lifetime;
	int maxLifetime;


	ofColor innerColor;
	ofColor outerColor;

public:
	Particle(); // constructor

	void init();

	void move();

	void draw();

	bool isDead();

};