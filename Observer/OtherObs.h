#pragma once
#ifndef OTHEROBS_H
#define OTHEROBS_H
#include "ObSub.h"


class DivObs :public Observer {

public:
	DivObs(Subject *model, int div) {
		(*model).attach(this);
		m_div = div;
	}
	void update(int value) {
		cout << value << " div " << m_div << " is " << value / m_div << endl;
	}


private:
	int m_div;

};

class MultObs : public Observer{

public:
	MultObs(Subject *model, int mult) {
		(*model).attach(this);
		m_mult = mult;
	}
	void update(int value) {
		cout << value << " mult " << m_mult << " is " << value * m_mult << endl;
	}


private:
	int m_mult;

};
#endif // !OTHEROBS_H
