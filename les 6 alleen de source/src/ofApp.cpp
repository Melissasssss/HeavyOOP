#include "ofApp.h"

void ofApp::setup() {
	ofBackground(ofColor::black);
	reaper = ParticleReaper();
	//Particle particles = Particle();
	for (int i = 0; i < MAX_PARTICLES; i++) {
		Particle* newParticle;
		newParticle = new Particle();
		newParticle->init();
		particles.push_back(newParticle);
	}
}

void ofApp::update() {

	vector<Particle*>::iterator i = particles.begin();
	while (i != particles.end()) {
		(*i)->move();
		i++;
	}

	reaper.cleanup(particles);
}

void ofApp::draw() {
	vector<Particle*>::iterator i = particles.begin();
	while (i != particles.end()) {
		(*i)->draw();
		i++;
	}
}

void ofApp::keyPressed(int key) {
	vector<Particle*>::iterator i = particles.begin();
	while (i != particles.end()) {
		(*i)->init();
		i++;
	}
}
