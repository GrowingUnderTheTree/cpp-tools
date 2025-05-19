#pragma once
#ifndef pythagoras_h

#endif // !pythagoras_h
#define pythagoras_h
#include <iostream>
#include <math.h>
using namespace std;
class pythagorastheorem;

class pythagorastheorem {
public:
	void pt() {
		double x, y;
		cout << "Enter the first side of triangle : ";
		cin >> x;
		cout << "Enter the second side of triangle : ";
		cin >> y;
		cout << "The answer is : " << sqrt(x * x + y * y) << "\n";
	}
};
