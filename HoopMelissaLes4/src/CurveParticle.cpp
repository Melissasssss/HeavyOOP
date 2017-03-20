#include "CurveParticle.h"

CurveParticle::CurveParticle() {
	curve = ofVec2f(ofRandom(-1, 3), ofRandom(-2, 2));

}

void CurveParticle::move() {
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
	location += speed;
	curve.rotate(2);
	location += curve;
}