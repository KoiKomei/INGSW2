#pragma once
#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
class Stack {
	private:
	int items[10];
	int sp;

public:
	friend class StackIter;
	Stack()
	{
		sp = -1;
	}
	void push(int in)
	{
		items[++sp] = in;
	}
	int pop()
	{
		return items[sp--];
	}
	bool isEmpty()
	{
		return (sp == -1);
	}

	
};

#endif // !STACK_H
