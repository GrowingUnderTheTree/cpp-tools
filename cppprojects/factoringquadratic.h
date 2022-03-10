#pragma once
#ifndef factoringquadratic_h

#endif // !factoringquadratic_h
#define factoringquadratic_h
#include <iostream>
#include <cmath>
using namespace std;
class quadratic;

class quadratic {
public:
	void factor() {
		cout << "Please be noted that this Function is extremely inaccurate,\n as I don't really know how to write the equations of quadratic factorizing into c++ codes.\n";
		double a, b, c;
		cout << "Enter the first value : \n";
		cin >> a;
		cout << "Enter the second value : \n";
		cin >> b;
		cout << "Enter the third value : \n";
		cin >> c;
		double d = -a;
		double top = d + sqrt((b * b) - (4 * (a * c)));
		double secandstop = d - sqrt((b * b) - (4 * (a * c)));
		double lower = 2 * a;
		double firstans = top / lower;
		double secans = secandstop / lower;
		cout << "The factors are : " << round(firstans) << " and " << round(secans) << "\n";
	}
};
