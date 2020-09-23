#include <iostream>

using namespace std;
#pragma once
#ifndef   __CBulb__
#define   __CBulb__

// code for your CBulb class
class CBulb {
private:
	int state, watts;

public:
	CBulb(int s, int w);
	CBulb();
	~CBulb();
	void print(void);
	//void setstate(int s);
	int getstate();
	int getPower(void);
	void setwatts(int w);
	void on(void);
	void off(void);
};
#endif