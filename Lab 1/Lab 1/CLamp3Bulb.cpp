#include "CLamp3Bulb.h"
#include <iostream>

using namespace std;

//Description: Class constructor for CLamp3Bulb. 
//Inputs: three integers representing the wattage of each of the bulbs in the lamp
CLamp3Bulb::CLamp3Bulb(int w1, int w2, int w3) {
	cout << "CLamp3Bulb constructor called...\n";
	int watts[3] = { w1, w2, w3 };
	for (int i = 0; i < 3; i++) {
		bulbs[i] = new CBulb(0, watts[i]);
	}

	switch1 = new CSwitch();
	state = 0;

}

//Description: Destructor for CLamp3Bulb class. deletes each of the pointed bulb and switch objects. 
CLamp3Bulb::~CLamp3Bulb() {
	cout << "CLamp3Bulb destructor being called...\n";

	for (int i = 0; i < 3; i++) {
		delete bulbs[i];
	}

	delete switch1;
}

//Description:Copy constructor, creates a deep copy of CLamp3Bulb objects
//Input: the object to copy
//Returns: Nothing
CLamp3Bulb::CLamp3Bulb(CLamp3Bulb &LampToCopy) {
	cout << "CLamp3Bulb copy constructor called...\n";
	state = LampToCopy.state;
	for (int i = 0; i < 3; i++) {
		bulbs[i] = new CBulb (*(LampToCopy.bulbs[i]));
	}

	switch1 = new CSwitch (*(LampToCopy.switch1));
}

//Prints state (on off = 1 0) of lamp to cout
void CLamp3Bulb::print(void) {
	string output_string = "Off";
	if (state == 1) {
		output_string = "On";
	}
	cout << output_string << "\n";
}

//Description: returns state variable
//Input: nothing
//output: an integer representing the state of the lamp
int CLamp3Bulb::getState() {
	return (state);
}

//Description: calculates the power being consumed by the lamp
//Input: nothing
//output: integer power in watts
int CLamp3Bulb::getPower(void) {
	int power = 0;

	if (state) {
		for (int i = 0; i < 3; i++) {
			power += bulbs[i]->getPower();
		}
	}

	return power;
}

//Turns lamp on by turning on each bulb
void CLamp3Bulb::LampOn(void) {
	for (int i = 0; i < 3; i++) {
		bulbs[i]->on();
	}

	switch1->turnon();
	state = 1;
}

//turns lamp off by turning off each bulb
void CLamp3Bulb::LampOff(void) {
	for (int i = 0; i < 3; i++) {
		bulbs[i]->off();
	}

	switch1->turnoff();
	state = 0;
}

//Description: Exchanges a numbered bulb with a new bulb
//Inputs: *CBulb, a pointer to the new bulb to be linked to in the lamp
//		   bulbNum, an int of the bulb you want to replace (0 to 2)
//outputs: a pointer to the old bulb object which was replaced
CBulb* CLamp3Bulb::exchange(CBulb* newBulb, int bulbNum) {
	CBulb* oldBulb;

	oldBulb = bulbs[bulbNum];

	bulbs[bulbNum] = newBulb;

	return (oldBulb);
}
