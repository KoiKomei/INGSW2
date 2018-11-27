#pragma once
#ifndef EDIT_H
#define EDIT_H

#include "Widget.h"

class Edit :public Widget {
public:
	Edit(FileSelectionDialog *dir, char *name) : Widget(dir, name) {}
	void queryWidget()
	{
		cout << "   " << _name << " edit queried" << endl;
	}
	void updateWidget()
	{
		cout << "   " << _name << " edit updated" << endl;
	}
	
};

#endif // !EDIT_H
