#pragma once
#include "Particle.h"

#define MAXPARTICLES 150

class Emitter
{
public:
	void Start();
	void Update();
	void Draw();
	Particle* part1[MAXPARTICLES];
	
	void setRandomColor(Particle* particle);
};

