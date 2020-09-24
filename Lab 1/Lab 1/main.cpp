#include <stdio.h>
#include "CBulb.h"
#include "CSwitch.h"
#include "CLamp3Bulb.h"
#include "CPullLamp.h"

int main(void) {
	CBulb bulb1 (1, 50);
	cout << "bulb initialized with 1, 50\n";

	bulb1.on();
	cout << "turning bulb on\n";

	bulb1.print();

	bulb1.off();
	cout << "turning buld off\n";

	bulb1.print();

	bulb1.getstate();

	// Part h

	bulb1.on();
	//bulb1.setstate(1);
	cout << bulb1.getPower() << "\n";
	//bulb1.setstate(0);
	bulb1.off();
	cout << bulb1.getPower() << "\n";

	//Exercise 2

	cout << "\n\n Starting exercise 2...\n";

	CSwitch switch1;

	cout << "after constructor: " << switch1.getState() << "\n";

	switch1.turnon();

	cout << "after turnon: " << switch1.getState() << "\n";

	switch1.turnoff();

	cout << switch1.getState() << "\n";

	switch1.print();

	//Exercise 3 and 4
	cout << "\nstarting exercise 3 (and 4, use the same test code...\n";
	CLamp3Bulb bigLamp(60, 120, 180);
	cout << "initiliazing Lamp with 60, 120, and 180 Watt bulbs\n";

	cout << "turning lamp on...\n";
	bigLamp.LampOn();

	cout << "lamp power: " << bigLamp.getPower();

	cout << "\nturning lamp off...\n";
	bigLamp.LampOff();

	cout << "Lamp state via getState: " << bigLamp.getState();

	cout << "\nLamp state via print\n";

	bigLamp.print();

	//Exercise 5
	
	cout << "\n\nStarting exercise 5...\nturning on original lamp before copying\n";

	bigLamp.LampOn();

	CLamp3Bulb bigLampCopy(bigLamp);

	bigLamp.LampOff();

	cout << "Turning off old lamp and printing state of new lamp...\n";

	bigLampCopy.print();

	//Exercise 6
	cout << "Starting Exercise 6...\n";

	CPullLamp 	L1(100, 100, 100);	// create a Pull Lamp with 100 watt bulbs

	L1.CLamp3Bulb::LampOn();				// note use of inherited function
	printf("Power of Lamp 1 = %d\n", L1.getPower());	// print power

	CBulb* b1 = new CBulb(1, 50);			// create new 50 watt bulb
	b1 = L1.exchange(b1, 0);			// swap bulb 0 for 50 watt bulb

	delete b1;					// delete the old bulb

	printf("Power of Lamp 1 = %d\n", L1.getPower());	// print power (250 watts)
	L1.CLamp3Bulb::LampOff(); //WOULD use the inherited function but I can't do both, despite instructions. 

	printf("Power of Lamp 1 = %d\n", L1.getPower());	// print power

	CPullLamp 	L2(100, 100, 100);	// create a Pull Lamp with 100 watt bulbs

	L2.toggle();
	printf("Power of Lamp 2 = %d\n", L2.getPower());	// print power

	L2.toggle();
	printf("Power of Lamp 2 = %d\n", L2.getPower());	// print power




	

	cout << "\n\n\nDestructors:\n\n";





}