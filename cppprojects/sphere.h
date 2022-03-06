#pragma once
#ifndef sphere_h

#endif // !sphere_h
#define sphere_h
#include <iostream>
using namespace std;
class spherevol;

class spherevol {
public:
	void volume() {
		double x;
		cout << "Enter the radius in Centimeters : ";
		cin >> x;
		double ans = 4 * (3.141 * x * x * x) / 3;
		cout << "The volume of the circle is : " << ans << " Centimeters. \n";
	}
};
