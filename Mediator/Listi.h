#pragma once
#ifndef LISTI_H
#define LISTI_H
#include "Widget.h"
class Listi : public Widget {
public:
	Listi(FileSelectionDialog *dir, char *name) : Widget(dir, name) {}
	void queryWidget()
	{
		cout << "   " << _name << " list queried" << endl;
	}
	void updateWidget()
	{
		cout << "   " << _name << " list updated" << endl;
	}
};
#endif // !LISTI_H
