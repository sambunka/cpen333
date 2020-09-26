#include <stdio.h>
#include "CBulb.h"
#include "CSwitch.h"
#include "CLamp3Bulb.h"
#include "CPullLamp.h"

int main(void) {
	//Exercise 1
	cout << "Starting Exercise 1....................\n";
	CBulb bulb1 (0, 50);
	cout << "Creating Bulb and initializing with state = 0, power = 50\n";

	bulb1.on();
	cout << "turning bulb on then using Print function:\n";

	bulb1.print();

	bulb1.off();
	cout << "turning buld off then using Print function: \n";
	bulb1.print();

	cout << "getting state of bulb using getstate: \n" << bulb1.getstate() << "\n";

	cout << "turning bulb on, printing power, turning off, then printing power again using getPower:\n";
	bulb1.on();
	//bulb1.setstate(1);
	cout << bulb1.getPower() << "\n";
	//bulb1.setstate(0);
	bulb1.off();
	cout << bulb1.getPower() << "\n";

	
	
	//Exercise 2
	cout << "\n\n Starting exercise 2...\n";

	CSwitch switch1;

	cout << "Printing state after constructor: " << switch1.getState() << "\n";

	switch1.turnon();

	cout << "Printing state after turnon: " << switch1.getState() << "\n";

	cout << "Tuning off then printing state:\n";
	switch1.turnoff();

	cout << switch1.getState() << "\n";

	cout << "using print function to print state:\n";
	switch1.print();

	
	
	//Exercise 3 and 4
	cout << "\n\nstarting exercise 3 (and 4, use the same test code)...\n";
	CLamp3Bulb bigLamp(60, 120, 180);
	cout << "initiliazing Lamp with 60, 120, and 180 Watt bulbs\n";

	cout << "turning lamp on...\n";
	bigLamp.LampOn();

	cout << "lamp power: " << bigLamp.getPower();

	cout << "\nturning lamp off...\n";
	bigLamp.LampOff();

	cout << "Lamp state via getState: " << bigLamp.getState();

	cout << "\nLamp state via print:\n";

	bigLamp.print();

	
	
	//Exercise 5
	
	cout << "\n\nStarting exercise 5...\nturning on original lamp before copying\n";

	bigLamp.LampOn();

	CLamp3Bulb bigLampCopy(bigLamp);

	bigLamp.LampOff();

	cout << "Turning off old lamp and printing state of new lamp...\n";

	bigLampCopy.print();

	cout << "Printing state of old lamp (note they are different indicating deep copy is correct):\n";

	bigLamp.print();

	
	
	//Exercise 6
	cout << "\n\nStarting Exercise 6...\n";
	cout << "creating pull lamp with 100 watt bulbs:\n";
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