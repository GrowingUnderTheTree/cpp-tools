#pragma once
/*
If you're using some really sketchy compiler that can't do pragma once use this instead
#ifndef circarea_h

#endif // !circarea_h
#define circarea_h
*/
#include <iostream>
class CircleArea;

class CircleArea {
public:
	double circareafunc(double x) {
		return 3.14159 * x * x;
	}

	void circarea() {
		double x;
		std::cout << "Enter the radius in Centimeters : ";
		std::cin >> x;
		std::cout << "The area of the circle is : " << circareafunc(x) << " Centimeters. \n";
	}
};
