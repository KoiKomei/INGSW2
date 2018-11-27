#pragma once
#ifndef RED_H
#define RED_H
#include "Color.h"
class Red : public Color {
	
public:
	void accept(Visitor*);
	void eye() {
		cout << "I see Red" << endl;
	}

};

#endif // !RED_H

void Red::accept(Visitor *v) {
	v->visit(this);
}