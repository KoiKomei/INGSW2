#pragma once
#ifndef OBSUB_H
#define OBSUB_H
#include <vector>
#include <iostream>
using namespace std;


class Observer {

public:
	virtual void update(int value) = 0;

};



class Subject {

public:
	void attach(Observer *obs) {
		m_views.push_back(obs);
	}

	void setVal(int value) {
		m_value = value;
		notify();
	}

	void notify() {
		for (int i = 0; i < m_views.size(); i++) {
			(*m_views[i]).update(m_value);
		}
	}
private:
	int m_value;
	vector<Observer*> m_views;
};

#endif // !OBSUB_H
