#pragma once
#include "ofMain.h"
#include "Particle.h"

class CurveParticle : public Particle {
public:
	CurveParticle();
	void move();
	ofVec2f curve;



};