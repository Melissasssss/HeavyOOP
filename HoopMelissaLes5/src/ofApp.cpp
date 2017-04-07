#include "ofApp.h"
#include "Particle.h"

Particle part1;


void ofApp::setup(){
	ofSetBackgroundColor(ofColor::black);
	//part1[].init();

	emitter.start();
	

}


void ofApp::update(){
	emitter.update();
}


void ofApp::draw(){
	emitter.draw();
}


void ofApp::keyPressed(int key){

}

