#pragma once
/*
#ifndef sphere_h

#endif // !sphere_h
#define sphere_h
*/
#include <iostream>
class spherevol;

class spherevol {
public:
	double spherevolumefunc(double x){
		return 4 * (3.141 * x * x * x) / 3;
	}
	void volume() {
		double x;
		std::cout << "Enter the radius in Centimeters : ";
		std::cin >> x;
		std::cout << "The volume of the circle is : " << spherevolumefunc(x) << " Centimeters. \n";
	}
};
