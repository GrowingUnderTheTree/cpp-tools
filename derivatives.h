#pragma once
#ifndef derivatives_h

#endif // !derivatives_h
#define derivatives_h
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class rules;
class calculator;

class rules {
public:
	void show() {
		cout << "Example: 'Power rule' to calculate Power rule \n";
		cout << "Power rule: f'x x^n = nx^n-1 \n";
		cout << "Sine : f'x sin(x) = cos(x) \n";
		cout << "Cosine : f'x cos(x) = -sin(x) \n";
		cout << "Exponential : f'x b^x = b^x*Ln(b) \n";
		cout << "Natural Logarithm : f'x Ln(x) = 1/x \n";
		cout << "Tangent : f'x tan(x) = sec^2(x) \n";
		cout << "Logarithm : f'x loga(x) = 1/x * Ln(a) \n";
		cout << "Line : f'x 5x = 5 \n";
		cout << "f'x lim T>0 f(x+Tx) - f(x) / Tx \n";
		cout << "Square root : f'x sqrt(x) = (1/x)*x^-1/2 \n";
	}
};

class calculator {
public:
	void calc() {
		string input;
		cout << "Enter the derivative functions (Lists can be found in the command helpderivative: \n";
		cin >> input;
	}
};