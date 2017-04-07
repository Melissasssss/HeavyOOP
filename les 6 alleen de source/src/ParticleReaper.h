#pragma once
#include "ofMain.h"
#include "Particle.h"

class ParticleReaper
{
public:
	ParticleReaper();
	void cleanup(vector<Particle*> particles);
};
