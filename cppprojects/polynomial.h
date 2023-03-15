#pragma once
#ifndef polynomial_h

#endif // !polynomial_h
#define polynomial_h
#include <iostream>
#include <string>
using namespace std;
class poly;

class poly {
public:
	void poly1d() {
		double x, num;
		cout << "Enter x and coeffecient(e.g x+5 = 1 spacebar 5, x-5 = 1 spacebar -5)";
		cin >> x >> num;
		if (num < 0) {
		cout << x << "x" << " - " << num << "\n";
		}
		else {
			cout << x << "x" << " + " << num << "\n";
		}
	}
}
;
