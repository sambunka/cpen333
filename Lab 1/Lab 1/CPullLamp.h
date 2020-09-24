#pragma once
#include "CLamp3Bulb.h"
#include <iostream>

using namespace std;

class CPullLamp : public CLamp3Bulb {
 private:
	 void LampOn() {}
	 void LampOff() {}
 public:
	 CPullLamp(int w1, int w2, int w3);
	 void toggle(void);

};