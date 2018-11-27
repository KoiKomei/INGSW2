#pragma once
#ifndef COLOR_H
#define COLOR_H
#include <iostream>
using namespace std;
class Visitor;
class Color {

public:
	virtual void accept(Visitor*) = 0;

};

#endif // !COLOR_H
