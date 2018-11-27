#pragma once
#ifndef BLU_H
#define BLU_H

#include "Color.h"

class Blu :public Color {
public:
	void accept(Visitor*);
	void sky() {
		cout << "I see blue" << endl;
	}

};

#endif // !BLU_H

void Blu::accept(Visitor *v) {
	v->visit(this);
}