#pragma once
#ifndef ONOFF_H
#define ONOFF_H
#include "StateMachine.h"
class ON :public State {
public:
	ON() {
		cout << " ON constructor";
	}
	~ON() {
		cout << " ON destructor";
	}

	void off(Machine *m) {
		(*m).setCurrent(new OFF());
		delete this;
	}
};

class OFF : public State {
public:
	OFF() {
		cout << " OFF constructor";
	}
	~OFF() {
		cout << " OFF destructor";
	}

	void on(Machine *m) {1
		(*m).setCurrent(new ON());
		delete this;
	}


};

#endif // !ONOFF_H
