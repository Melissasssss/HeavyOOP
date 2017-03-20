#pragma once
#include "Particle.h"
#include "CurveParticle.h"

#define MAXPARTICLES 10


class Emitter
{
public:

	void start();
	void update();
	void draw();
	//vector<Particle> particles; <- andere datastructuur
	vector<Particle> part1;
	vector<CurveParticle> part2;

	void setRandomColor(Particle& particle);
	void keyPressed(int key);

	ofPoint locationEmi;
	ofVec2f speedEmi; 
	int radius;

};

