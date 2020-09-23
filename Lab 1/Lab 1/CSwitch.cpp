#include "CSwitch.h"
#include <iostream>

using namespace std;

CSwitch::CSwitch() {
	cout << "CSwitch DEFAULT constructor called...\n\n";
	state = 0;
}

CSwitch::~CSwitch() {
	cout << "Turning off bulb (destructor)...\n";
}

void CSwitch::print(void) {
	string output_string = "Off";
	if (state == 1) {
		output_string = "On";
	}
	cout << output_string << "\n";
}

int CSwitch::getState() {
	return (state);
}

void CSwitch::turnon(void) {
	state = 1;
}

void CSwitch::turnoff(void) {
	state = 0;
}