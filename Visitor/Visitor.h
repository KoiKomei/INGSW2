#pragma once
#ifndef VISITOR_H
#define VISITOR_H
class Blu;
class Red;
class Visitor {
public:
	virtual void visit(Red*) = 0;
	virtual void visit(Blu*) = 0;

};

#endif // !VISITOR_H
