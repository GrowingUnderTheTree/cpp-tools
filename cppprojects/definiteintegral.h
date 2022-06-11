#pragma once
#ifndef definiteintegral_h

#endif // !definiteintegral_h
#define definiteintegral_h
#include <iostream>
#include <numeric>
#include <cmath>
#include <string>
using namespace std;
class powerrule;

class powerrule {
public:
	void power() {
		double top, bottom;
		double power;
		double left;
		double ans;
		double rule;
		cout << "Enter the top number on the integral \n";
		cin >> top;
		cout << "Enter the bottom number of the integral \n";
		cin >> bottom;
		cout << "Enter the power of the equation : \n";
		cin >> power;
		cout << "Enter the constant on the left of the equation (eg.8x^2 and type 8.  if none, type 1) : \n";
		cin >> left;
		rule = power + 1;
		ans = left * (((pow(top, rule)) / rule) - ((pow(bottom, rule)) / rule));
		cout << "The answer is : " << ans << "\n";
	}
};