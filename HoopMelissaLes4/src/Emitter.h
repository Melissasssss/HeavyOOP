#pragma once
#include "Particle.h"
#include "CurveParticle.h"

#define MAXPARTICLES 2


class Emitter
{
public:

	void start();
	void update();
	void draw();
	//vector<Particle> particles; <- andere datastructuur
	Particle* part1[MAXPARTICLES];
	CurveParticle* part2[MAXPARTICLES];

	void setRandomColor(Particle* particle);
	void keyPressed(int key);

	ofPoint locationEmi;
	ofVec2f speedEmi; 
	int radius;

};

