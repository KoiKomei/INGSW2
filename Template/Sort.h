#pragma once
#ifndef SORT_H
#define SORT_H
class Sort {
public:
	void sort(int v[], int n) {
		for (int g = n / 2; g > 0; g /= 2) {
			for (int i = g; i < n; i++) {
				for (int j = i - g; j >= 0; j -= g) {
					if (needSwap(v[j], v[j + g])) {
						doSwap(v[j], v[j + g]);
					}
				}
			}
		}
	}

private:
	virtual int needSwap(int, int) = 0;
	void doSwap(int &a, int &b) {
		int t = a;
		a = b;
		b = t;
	}

};
#endif // !SORT_H


