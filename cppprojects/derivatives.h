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
		if (input == "Power rule")
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
			double number, x,left, right, ans;
			cout << "Enter the number of x : \n";
			cin >> x;
			cout << "Enter the number of the constant : \n";
			cin >> number;
			left = pow(number, x);
			right = log(number);
			ans = left * right;
			cout << "The answer is : " << ans << "\n";
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
			double number, ans, secant;
			cout << "Enter the number of x : \n";
			cin >> number;
			secant = 1 / cos(number);
			ans = pow(secant, 2);
			cout << "The answer is : " << ans << "\n";
		}
		else if (input == "Logarithm")
		{
			double number, base, left, right, ans;
			cout << "Enter the number of x : \n";
			cin >> number;
			cout << "Enter the base of the logarithm : \n";
			cin >> base;
			left = 1 / number;
			right = log(base);
			ans = left * right;
			cout << "The answer is : " << ans << "\n";
		}
		else if (input == "Line")
		{
			double number;
			cout << "Enter the number beside x : \n";
			cin >> number;
			cout << "The answer is : " << number << "\n";
		}
		else if (input == "Square root")
		{
			//(1/x)*x^-1/2
			double number, left, right, ans;
			cout << "Enter the number of x : \n";
			cin >> number;
			left = 1 / number;
			right = pow(number, -0.5);
			ans = left * right;
			cout << "The answer is : " << ans << "\n";
		}
		else
		{
			cout << "Please try the command 'helpderivative' \n";
		}
	}
};