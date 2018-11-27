#pragma once
#ifndef SORTDOWN_H
#define SORTDOWN_H
#include "Sort.h"
class SortDown :public Sort {
	int needSwap(int a, int b) {
		return (b > a);
	}

};

#endif // !SORTDOWN_H
