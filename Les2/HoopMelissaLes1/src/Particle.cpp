#include "Particle.h"
Particle::Particle() {

}

void Particle::init() {
	radius = ofRandom(5, 20);
	location.x = ofGetWidth() / 2;
	location.y = ofGetHeight() / 2;
	speed.x = ofRandom(-5, 5);
	speed.y = ofRandom(-5, 5);

	innerColor = ofColor(31,127,255,127);
	outerColor = ofColor(128,255,255,15);

}

void Particle::move() {
	if (location.x <= 0) {
		location.x = 0;
		speed.x = -speed.x;
	}
	else if (location.x >= ofGetWidth()) {
		location.x = ofGetWidth();
		speed.x = -speed.x;
	}

	if (location.y <= 0) {
		location.y = 0;
		speed.y = -speed.y;
	}
	else if (location.y >= ofGetHeight()) {
		location.y = ofGetHeight();
		speed.y = -speed.y;
	}

	location = location + speed;

}

void Particle::draw() {

	ofSetColor(innerColor);
	ofDrawCircle(location, radius);

	ofSetColor(outerColor);
	ofDrawCircle(location, radius * 2);

}

void Particle::setColors(ofColor outer, ofColor inner) {
	outerColor = outer;
	innerColor = inner;
}