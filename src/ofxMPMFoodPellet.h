#pragma once

class ofxMPMFoodPellet {

	public:

	float x;
	float y;
	int charges;
	float radius;
	bool active;

	ofxMPMFoodPellet(float inx, float iny, int inCharges = 25, float inRadius = 3.0f);
};
