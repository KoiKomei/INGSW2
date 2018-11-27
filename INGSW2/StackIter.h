#pragma once
#ifndef STACKITER_H
#define STACKITER_H
#include "Stack.h"
class StackIter {
	private:
		const Stack &stk;
		int index;
public:
	StackIter(const Stack &s) : stk(s)
	{
		index = 0;
	}
	void operator++()
	{
		index++;
	}
	bool operator()()
	{
		return index != stk.sp + 1;
	}
	int operator *()
	{
		return stk.items[index];
	}


};

#endif // !STACKITER_H
