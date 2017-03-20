#include "Emitter.h"

void Emitter::start()
{
	locationEmi.x = radius*cos(ofGetElapsedTimef()) + ofGetWidth() / 2;
	locationEmi.y = radius*sin(ofGetElapsedTimef()) + ofGetHeight() / 2;
	radius = 150;

	for (int i = 0; i < MAXPARTICLES; i++) {
		part1.push_back(Particle());
		//part1 = new Particle();
		part1.push_back->init();
		//setRandomColor(part1[i]);
	}

	for (int i = 0; i < MAXPARTICLES; i++) {
		part2.push_back(CurveParticle());
		//part2 = new Particle();
		part2.push_back.init(locationEmi);
		//setRandomColor(part2[i]);
	}
}


void Emitter::update()
{

	locationEmi.x = radius*cos(ofGetElapsedTimef()) + ofGetWidth() / 2;
	locationEmi.y = radius*sin(ofGetElapsedTimef()) + ofGetHeight() / 2;
	
	vector<Particle>::iterator i = part1.begin();
	while (i != part1.end()) {
		i->move();
		i++;
	}

	/*vector<CurveParticle>::iterator i = part2.begin();
	while (i != part2.end()) {
		i->move();
		i++;
	}

	for (int i = 0; i < MAXPARTICLES; i++) {
		part1[i]->move();
	}
	for (int i = 0; i < MAXPARTICLES; i++) {
		part2[i]->move();
	}*/
}

void Emitter::draw() {
	ofDrawCircle(locationEmi.x, locationEmi.y, radius);
	vector<Particle>::iterator i = part1.begin();
	while (i != part1.end()) {
		i->draw();
		i++;
	} 
	/*vector<CurveParticle>::iterator i = part2.begin();
	while (i != part2.end()) {
		i->draw();
		i++;
	}
	
	for (int i = 0; i < MAXPARTICLES; i++) {
		part1[i]->draw();
	}

	for (int i = 0; i < MAXPARTICLES; i++) {
		part2[i]->draw();
	}*/


}



void Emitter::keyPressed(int key) {
	vector<Particle>::iterator i = part1.begin();
	while (i != part1.end()) {
		i->init(locationEmi);
		i++;
	}
}

	/*if (key == ' ') {
		for (int i = 0; i < MAXPARTICLES; i++) {
			part1[i] = new Particle();
			part1[i]->init(locationEmi);
			setRandomColor(part1[i]);
		}
	}
}*/

void Emitter::setRandomColor(Particle& particle) {
	float random = ofRandom(1, 10);
	if (random > 3 && random < 7) {
		particle.setColors(ofColor(227, 47, 27, 127), ofColor(247, 140, 129, 15));
	}
	else if (random >= 7) {
		particle.setColors(ofColor(150, 47, 27, 127), ofColor(100, 140, 129, 15));
	}
}