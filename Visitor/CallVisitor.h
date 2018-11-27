#pragma once
#ifndef CALLVISITOR_H
#define CALLVISITOR_H
#include "Visitor.h"
#include "Red.h"
#include "Blu.h"
class CallVisitor :public Visitor {

public:
	void visit(Red* r) {
		(*r).eye();
	}

	void visit(Blu *b) {
		(*b).sky();
	}
};

#endif // !CALLVISITOR_H
