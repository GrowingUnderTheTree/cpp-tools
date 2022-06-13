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
class integrationrule;

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
};// t

class integrationrule {
public:
	void show() {
		cout << "Integration rules \n";
		cout << "Common functions : \n";
		cout << "Constant : ax + c \n";
		cout << "variable x : x^2/2 + c \n";
		cout << "power rule : x^n = x^n+1/n+1 \n";
		cout << "Recipocral : 1/x = Ln|x| + c \n";
		cout << "Exponential : e^x = e^x + c \n";
		cout << "Exponential : a^x = a^x/Ln(a) + c \n";
		cout << "Exponential : Ln(x) = x ln(x) − x + C \n";
		cout << "Trigonometry : cos(x) = sin(x) + c \n";
		cout << "Trigonometry : sin(x) = -cos(x) + c \n";
		cout << "Trigonometry : sec^2(x) = tan(x) + c \n";
		cout << "Rules : \n";
		cout << "Multiplication by constant : integral(cf(x) dx) = c * integral(f(x) dx)\n";
		cout << "Sum rule : integral(f+g dx) = integral(f dx) + integral(g dx)\n";
		cout << "Difference rule : integral(f - g dx) = integral(f dx) - integral(g dx)\n";
		cout << "integration by parts \n";
		cout << "integration by substitution \n";
	}
};