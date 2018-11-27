#pragma once
#ifndef COUNTVISITOR_H
#define COUNTVISITOR_H
#include "Visitor.h"

class CountVisitor :public Visitor {
public:
	CountVisitor() {
		rednum = blunum = 0;
	}
	void visit(Red*) {
		++rednum;
	}
	void visit(Blu*) {
		++blunum;
	}

	void reportnum() {
		cout << "Reds: " << rednum << ", Blues: " << blunum << endl;
	}


private:
	int rednum, blunum;
};

#endif // !COUNTVISITOR_H
