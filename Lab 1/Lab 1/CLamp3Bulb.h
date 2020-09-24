#include <iostream>
#include "CBulb.h"
#include "CSwitch.h"

using namespace std;
#pragma once
#ifndef   __CLamp3Bulb__
#define   __CLamp3Bulb__

// code for your CLamp3Bulb class
class CLamp3Bulb {
private:
	int state;
	CSwitch* switch1;
	CBulb* bulbs[3];

public:
	CLamp3Bulb(int w1, int w2, int w3);
	~CLamp3Bulb();
	CLamp3Bulb(CLamp3Bulb& LampToCopy);
	void print(void);
	//void setstate(int s);
	int getState();
	int getPower(void);
	void LampOn(void);
	void LampOff(void);
	CBulb* exchange(CBulb* newBulb, int bulbNum);
};
#endif