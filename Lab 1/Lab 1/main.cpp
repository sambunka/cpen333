#include <stdio.h>
#include "CBulb.h"
#include "CSwitch.h"

int main(void) {
	CBulb bulb1 (1, 50);

	bulb1.on();

	bulb1.print();

	bulb1.off();

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


}