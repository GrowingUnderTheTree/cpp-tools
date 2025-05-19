#pragma once
#ifndef factoringquadratic_h

#endif // !factoringquadratic_h
#define factoringquadratic_h
#include <iostream>
#include <cmath>
#include <complex>
using namespace std;
class quadratic;

class quadratic {
public:
	void factor() {
		cout << "Please be noted that this Function is extremely inaccurate,\n as I don't really know how to write the equations of quadratic factorizing into c++ codes.\n";
		long double a, b, c;
		cout << "Enter the first value : \n";
		cin >> a;
		cout << "Enter the second value : \n";
		cin >> b;
		cout << "Enter the third value : \n";
		cin >> c;
		complex<double> a1(0, sqrt(abs(pow(b,2) - (4 * a * c))));
		double real = a1.real();
		double firstans = (-b + real /(2 * a));
		double secans = (-b - real /(2 * a));
		cout << "The answer is : " << firstans << " and : " << secans << " \n";
	}
};
