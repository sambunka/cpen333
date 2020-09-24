#include "CLamp3Bulb.h"
#include <iostream>

using namespace std;

CLamp3Bulb::CLamp3Bulb(int w1, int w2, int w3) {
	cout << "CLamp3Bulb constructor called...\n";
	int watts[3] = { w1, w2, w3 };
	for (int i = 0; i < 3; i++) {
		bulbs[i] = new CBulb();
		bulbs[i]->setwatts(watts[i]);
	}

	switch1 = new CSwitch();
	state = 0;

}

CLamp3Bulb::~CLamp3Bulb() {
	cout << "CLamp3Bulb destructor being called...\n";

	for (int i = 0; i < 3; i++) {
		delete bulbs[i];
	}

	delete switch1;
}

CLamp3Bulb::CLamp3Bulb(CLamp3Bulb &LampToCopy) {
	cout << "CLamp3Bulb copy constructor called...\n";
	state = LampToCopy.state;
	for (int i = 0; i < 3; i++) {
		bulbs[i] = new CBulb (*(LampToCopy.bulbs[i]));
	}

	switch1 = new CSwitch (*(LampToCopy.switch1));
	
}

void CLamp3Bulb::print(void) {
	string output_string = "Off";
	if (state == 1) {
		output_string = "On";
	}
	cout << output_string << "\n";
}

int CLamp3Bulb::getState() {
	return (state);
}

int CLamp3Bulb::getPower(void) {
	int power = 0;

	if (state) {
		for (int i = 0; i < 3; i++) {
			power += bulbs[i]->getPower();
		}
	}

	return power;
}

void CLamp3Bulb::LampOn(void) {
	for (int i = 0; i < 3; i++) {
		bulbs[i]->on();
	}

	switch1->turnon();
	state = 1;
}

void CLamp3Bulb::LampOff(void) {
	for (int i = 0; i < 3; i++) {
		bulbs[i]->off();
	}

	switch1->turnoff();
	state = 0;
}

CBulb* CLamp3Bulb::exchange(CBulb* newBulb, int bulbNum) {
	CBulb* oldBulb;

	oldBulb = bulbs[bulbNum];

	bulbs[bulbNum] = newBulb;

	return (oldBulb);
}
