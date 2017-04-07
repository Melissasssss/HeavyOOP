#include "ParticleReaper.h"

ParticleReaper::ParticleReaper()
{
}
void ParticleReaper::cleanup(vector<Particle*> particles)
{
	vector<Particle*>::iterator i = particles.begin();
	while (i != particles.end()) {

		bool ded = (*i)->isDead();

		if (ded = true)
		{
			i = particles.erase(i);
		}
		else
		{
			++i;
		}
	}
}

