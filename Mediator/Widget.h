#pragma once
#ifndef WIDGET_H
#define WIDGET_H
#include <iostream>
using namespace std;
class FileSelectionDialog;

class Widget {

public:
	Widget(FileSelectionDialog *mediator, char *name)
	{
		_mediator = mediator;
		strcpy_s(_name, name);
	}
	virtual void changed();
	virtual void updateWidget() = 0;
	virtual void queryWidget() = 0;
protected:
	char _name[20];
private:
	FileSelectionDialog *_mediator;
};
#endif // !WIDGET_H



