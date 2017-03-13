#include "Emitter.h"

void Emitter::Start()
{
	for (int i = 0; i < MAXPARTICLES; i++) {
		part1[i] = new Particle();
		part1[i]->init();
		setRandomColor(part1[i]);
	}
}


void Emitter::Update()
{
	for (int i = 0; i < MAXPARTICLES; i++) {
		part1[i]->move();
	}
}

void Emitter::Draw() {

}
