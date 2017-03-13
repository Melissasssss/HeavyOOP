#include "ofApp.h"
#include "Particle.h"

Particle part1;


void ofApp::setup(){
	ofSetBackgroundColor(ofColor::black);
	//part1[i] = Particle();
	//part1[].init();
	

}


void ofApp::update(){
	
	//part1.move();
}


void ofApp::draw(){
	for (int i = 0; i < MAXPARTICLES; i++) {
		part1[i] -> draw();
	}
	//part1.draw();
}


void ofApp::keyPressed(int key){
	if (key == ' ') {
		for (int i = 0; i < MAXPARTICLES; i++) {
			part1[i] = new Particle();
			part1[i] -> init();
			setRandomColor(part1[i]);
		}
	}
}

void ofApp::setRandomColor(Particle* particle) {
	float random = ofRandom(1,10);
	if (random > 3 && random  < 7) {
		particle -> setColors(ofColor(227, 47, 27, 127), ofColor(247, 140, 129, 15));
	}
	else if (random >= 7) {
		particle -> setColors(ofColor(150, 47, 27, 127), ofColor(100, 140, 129, 15));
	}
}
