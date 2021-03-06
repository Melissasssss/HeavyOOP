#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleReaper.h"

#define MAX_PARTICLES 30

class ofApp : public ofBaseApp {

public:
	void setup();

	void update();

	void draw();

	void keyPressed(int key);

	vector<Particle*> particles;
	ParticleReaper reaper;
};