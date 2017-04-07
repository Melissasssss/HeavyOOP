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

	const void draw(); //hier zit een constante omdat hij altijd hetzelfde tekent

	bool isDead();

};