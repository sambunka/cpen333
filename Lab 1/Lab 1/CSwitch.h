#include <iostream>

using namespace std;
#pragma once
#ifndef   __CSwitch__
#define   __CSwitch__

// code for your CBulb class
class CSwitch {
private:
	int state;

public:
	CSwitch();
	~CSwitch();
	void print(void);
	//void setstate(int s);
	int getState();
	void turnon(void);
	void turnoff(void);
};
#endif