#include "SortDown.h"
#include "SortUp.h"
#include <ctime>
#include <cmath>
#include <iostream>
using namespace std;
int main() {
	
	int array[10];

	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		array[i] = rand()%10 + 1;
		cout << array[i] << " ";
	}
	cout << endl;

	Sort *sorted[] = { new SortUp, new SortDown };

	sorted[0]->sort(array, 10);
	for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}

	cout << endl;

	sorted[1]->sort(array, 10);
	for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;
}