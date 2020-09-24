#include "CLamp3Bulb.h"
#include "CPullLamp.h"
#include <iostream>

using namespace std;

CPullLamp::CPullLamp(int w1, int w2, int w3):CLamp3Bulb(w1, w2, w3){
	cout << "CPullLamp constructor called\n";
}

void CPullLamp::toggle(void) {
	if (getState() == 0)	// if lamp is off (another inherited function)
		CLamp3Bulb::LampOn();	// turn on CPulledLamp using base class function
	else
		CLamp3Bulb::LampOff();

}