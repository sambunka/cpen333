#include "CBulb.h"
#include <iostream>

using namespace std;

//Description: constructor function which takes 
//Inputs: two integers, the initial state of the bulb and the wattage
CBulb::CBulb(int s, int w) {
	cout << "CBulb constructor called...\n";
	state = s;
	watts = w;
}

//default constructor function, initilases to 0
CBulb::CBulb() {
	cout << "CBulb DEFAULT constructor called...\n\n";
	watts = 0;
	state = 0;
}

//destructor function
CBulb::~CBulb() {
	cout << "CBulb destructor being called...\n";
}

//Prints the state of the bulb as a word (on/off)
void CBulb::print(void) {
	string output_string = "Off";
	if (state == 1) {
		output_string = "On";
	}
	cout << output_string << "\n";
}

//CBulb::setstate(int s) {
//	state = s;
//}

//Output: returns the state (1/on 0/off) of the bulb
int CBulb::getstate() {
	return (state);
}

//Description: gets the power being consumed by the bulb in watts. 
//Output: the power of the bulb in watts. Will return 0 if the lamp is off
int CBulb::getPower(void) {
	int power = 0;

	if (state) {
		power = watts;
	}

	return power;
}

//sets power consumption of cbulb in watts
//input: the int wattage of the bulb
void CBulb::setwatts(int w) {
	watts = w;
}

//turns cbulb on
void CBulb::on(void) {
	state = 1;
}

//Turns CBUlb off
void CBulb::off(void) {
	state = 0;
}