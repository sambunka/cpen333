#include "CBulb.h"
#include <iostream>

using namespace std;

CBulb::CBulb(int s, int w) {
	cout << "CBulb constructor called...\n";
	state = s;
	watts = w;
}

CBulb::CBulb() {
	cout << "CBulb DEFAULT constructor called...\n\n";
	watts = 0;
	state = 0;
}


CBulb::~CBulb() {
	cout << "CBulb destructor being called...\n";
}

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

int CBulb::getstate() {
	return (state);
}

int CBulb::getPower(void) {
	int power = 0;

	if (state) {
		power = watts;
	}

	return power;
}

void CBulb::setwatts(int w) {
	watts = w;
}

void CBulb::on(void) {
	state = 1;
}

void CBulb::off(void) {
	state = 0;
}