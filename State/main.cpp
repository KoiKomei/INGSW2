#include "ONOFF.h"

int main() {
	void(Machine:: *ptrs[])() =	{	  Machine::off, Machine::on	};
	Machine fsm;
	int num;
	while (1)
	{
		cout << "Enter 0/1: ";
		cin >> num;
		(fsm.*ptrs[num])();
	}
}