#include "OtherObs.h"

int main() {
	Subject sub;
	DivObs obs1(&sub, 2);
	DivObs obs2(&sub, 3);
	MultObs obs3(&sub, 5);

	sub.setVal(20);
	
}