#pragma once
#ifndef circarea_h

#endif // !circarea_h
#define circarea_h
#include <iostream>
using namespace std;
class CircleArea;

class CircleArea {
public:
	void circarea() {
		double x;
		cout << "Enter the radius in Centimeters : ";
		cin >> x;
		double ans = 3.141 * x * x;
		cout << "The area of the circle is : " << ans << " Centimeters. \n";
	}
};