#pragma once
#ifndef STATEMACHINE_H
#define STATEMACHINE_H
#include <iostream>
using namespace std;

class State {
public:
	virtual void on(Machine* m) {
		cout << "Already ON" << endl;
	}
	virtual void off(Machine* m) {
		cout << "Already OFF" << endl;
	}

};

class Machine {
public:
	Machine() {
		current = new OFF();
		cout << endl;
	};
	void setCurrent(State *s) {
		current = s;
	}
	void on() { (*current).on(this); };
	void off() { (*current).off(this); };
private:
	class State* current;
};

#endif // !STATEMACHINE_H
