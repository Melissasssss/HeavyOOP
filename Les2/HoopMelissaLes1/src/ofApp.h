#pragma once

#include "ofMain.h"
#include "Particle.h"

#define MAXPARTICLES 150

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		
		//vector<Particle> particles; <- andere datastructuur
		Particle* part1[MAXPARTICLES];


		void setRandomColor(Particle* particle);

		
};
