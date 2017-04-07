#include "Particle.h"

Particle::Particle() {
}

void Particle::init() {
	lifetime = 0;
	maxLifetime = ofRandom(100);

	radius = ofRandom(10, 50);

	location.x = sin(ofGetElapsedTimeMillis()*0.5 / 150)*200 + ofGetWidth() / 2;
	location.y = cos(ofGetElapsedTimeMillis()*0.5 / 150)*200 + ofGetHeight() / 2;

	speed.x = ofRandom(-2, 2);
	speed.y = ofRandom(-2, 2);

	innerColor = ofColor(31, 127, 255, 127);
	outerColor = ofColor(128, 255, 255, 15);
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

	lifetime++;
	ofLog() << "the lifetime is " << lifetime;
}

const void Particle::draw() {
	ofSetColor(outerColor);
	ofDrawCircle(location, radius * 2);

	ofSetColor(innerColor);
	ofDrawCircle(location, radius);

	ofSetColor(ofColor::white);
	ofDrawCircle(location, radius * 0.25);
}

bool Particle::isDead() {
	if (lifetime > maxLifetime)
	{
		//ofLog()<< "isded" << 12;
		init();
		return true;
	}
}