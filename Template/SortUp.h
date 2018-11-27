#pragma once
#ifndef SORTUP_H
#define SORTUP_H
#include "Sort.h"

class SortUp : public Sort {

	int needSwap(int a, int b) {
		return (a > b);
	}

};

#endif // !SORTUP_H
