#include "CSwitch.h"
#include <iostream>

using namespace std;

//Constructor for CSwitch, sets state to 0
CSwitch::CSwitch() {
	cout << "CSwitch DEFAULT constructor called...\n\n";
	state = 0;
}

//Destructor for CSwitch, does nothing
CSwitch::~CSwitch() {
	cout << "CSwitch destructor being called...\n";
}

//Prints the state of the switch (on/off)
void CSwitch::print(void) {
	string output_string = "Off";
	if (state == 1) {
		output_string = "On";
	}
	cout << output_string << "\n";
}

//Output: returns the integer state of the switch
int CSwitch::getState() {
	return (state);
}

//turns on the switch
void CSwitch::turnon(void) {
	state = 1;
}

//turns off the switch
void CSwitch::turnoff(void) {
	state = 0;
}