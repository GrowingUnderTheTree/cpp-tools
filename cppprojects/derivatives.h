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
		cout << "Constant: f'x c = 0 \n";
		cout << "Power rule: f'x x^n = nx^n-1 \n";
		cout << "Sine : f'x sin(x) = cos(x) \n";
		cout << "Cosine : f'x cos(x) = -sin(x) \n";
		cout << "Exponential : f'x b^x = b^x*Ln(b) \n";
		cout << "Natural Logarithm : f'x Ln(x) = 1/x \n";
		cout << "Tangent : f'x tan(x) = sec^2(x) \n";
		cout << "Logarithm : f'x loga(x) = 1/x * Ln(a) \n";
		cout << "ax : f'x ax = a \n";
		cout << "Line : f'x x = 1 \n";
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
		if (input == "Constant")
		{
			
		}
		else if (input == "Power rule")
		{
			double power, number, top, bottom, ans;
			cout << "Enter the amount of x : \n";
			cin >> number;
			cout << "Enter the number of the power : \n";
			cin >> power;
			top = power - 1;
			bottom = power * number;
			ans = pow(bottom, top);
			cout << "The answer is : " << ans << "\n";
		}
		else if (input == "Sine")
		{
			double number, ans;
			cout << "Enter the number of x : \n";
			cin >> number;
			ans = cos(number);
			cout << "The answer is : " << ans << "\n";
		}
		else if (input == "Cosine")
		{
			double number, ans;
			cout << "Enter the number of x : \n";
			cin >> number;
			ans = -sin(number);
			cout << "The answer is : " << ans << "\n";
		}
		else if (input == "Exponential")
		{

		}
		else if (input == "Natural Logarithm")
		{
			double number, ans;
			cout << "Enter the number of x : \n";
			cin >> number;
			ans = 1 / number;
			cout << "The answer is : " << ans << "\n";
		}
		else if (input == "Tangent")
		{

		}
		else if (input == "Logarithm")
		{

		}
		else if (input == "ax")
		{

		}
		else if (input == "Line")
		{

		}
		else if (input == "Square root")
		{

		}
		else
		{
			cout << "Please try the command 'helpderivative' \n";
		}
	}
};