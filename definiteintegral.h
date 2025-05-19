#pragma once
#ifndef definiteintegral_h

#endif // !definiteintegral_h
#define definiteintegral_h
#include <iostream>
#include <numeric>
#include <cmath>
#include <string>
class powerrule;
class integrationrule;
class Trigonometry;
class AdvancedIntegrationFormula;

class powerrule {
public:
	void power() {
		double top, bottom, power, left, ans, rule;
		std::cout << "Enter the top number on the integral \n";
		std::cin >> top;
		std::cout << "Enter the bottom number of the integral \n";
		std::cin >> bottom;
		std::cout << "Enter the power of the equation : \n";
		std::cin >> power;
		std::cout << "Enter the constant on the left of the equation (eg.8x^2 and type 8.  if none, type 1) : \n";
		std::cin >> left;
		rule = power + 1;
		ans = left * (((pow(top, rule)) / rule) - ((pow(bottom, rule)) / rule));
		std::cout << "The answer is : " << ans << "\n";
	}
};// t

class integrationrule {
public:
	void show() {
		std::cout << "Integration rules \n";
		std::cout << "Common functions : \n";
		std::cout << "Constant : ax + c \n";
		std::cout << "variable x : x^2/2 + c \n";
		std::cout << "power rule : x^n = x^n+1/n+1 \n";
		std::cout << "Recipocral : 1/x = Ln|x| + c \n";
		std::cout << "Exponential : e^x = e^x + c \n";
		std::cout << "Exponential : a^x = a^x/Ln(a) + c \n";
		std::cout << "Exponential : Ln(x) = x ln(x) − x + C \n";
		std::cout << "Trigonometry : cos(x) = sin(x) + c \n";
		std::cout << "Trigonometry : sin(x) = -cos(x) + c \n";
		std::cout << "Trigonometry : sec^2(x) = tan(x) + c \n";
		std::cout << "Rules : \n";
		std::cout << "Multiplication by constant : integral(cf(x) dx) = c * integral(f(x) dx)\n";
		std::cout << "Sum rule : integral(f+g dx) = integral(f dx) + integral(g dx)\n";
		std::cout << "Difference rule : integral(f - g dx) = integral(f dx) - integral(g dx)\n";
		std::cout << "integration by parts \n";
		std::cout << "integration by substitution \n";
		std::cout << "lists of trig identity available to calculate : \n";
		std::cout << "sin\ncosin\nsec2x\ncsc2x\nsecxtanx\ncscxcotx\ntan\ncot\nsec\ncsc\n";
		std::cout << "lists of advanced integration formulas (Enter correctly when typing in the formula to calculate): \n";
		std::cout << "(1/x^2-a^2)dx \n";
		std::cout << "(1/a^2-x^2)dx \n";
		std::cout << "(1/x^2+a^2)dx \n";
		std::cout << "(1/sqrt(x^2+a^2))dx \n";
		std::cout << "(1/sqrt(x^2-a^2))dx \n";
		std::cout << "(sqrt(x^2-a^2))dx \n";
		std::cout << "(1/sqrt(a^2-x^2)dx \n";
		std::cout << "(sqrt(a^2-x^2)dx \n";
		std::cout << "(1/sqrt(x^2+a^2)dx \n";
		std::cout << "(sqrt(x^2+a^2)dx \n";
	}
};

class Trigonometry {
public:
	void calc() {
		double top, bottom, left, ans;
		std::string trig;
		std::cout << "Enter the top number of the definite integral : \n";
		std::cin >> top;
		std::cout << "Enter the bottom number of the definite integral ; \n";
		std::cin >> bottom;
		std::cout << "Enter the trigonometry identities of the equation(e.g. sin). Lists of available calculation can be found in the command : 'helpdefiniteintegral' \n";
		std::cin >> trig;
		if (trig=="sin")
		{
			ans = -cos(top) + cos(bottom);
			std::cout << "The answer is : " << ans << "\n";
		}
		else if (trig == "cosin")
		{
			ans = sin(top) - sin(bottom);
			std::cout << "The answer is : " << ans << "\n";
		}
		else if (trig == "sec2x")
		{
			ans = tan(top) - tan(bottom);
			std::cout << "The answer is : " << ans << "\n";
		}
		else if (trig == "csc2x")
		{
			ans = -(1 / tan(top)) + (1 / tan(bottom));
			std::cout << "The answer is : " << ans << "\n";
		}
		else if (trig == "secxtanx")
		{
			ans = (1 / cos(top)) - (1 / cos(bottom));
			std::cout << "The answer is : " << ans << "\n";
		}
		else if (trig == "cscxcotx")
		{
			ans = -(1 / sin(top)) + (1 / sin(bottom));
			std::cout << "The answer is : " << ans << "\n";
		}
		else if (trig == "tan")
		{
			ans = log(1 / cos(top)) - log(1 / cos(bottom));
			std::cout << "The answer is : " << ans << "\n";
		}
		else if (trig == "cot")
		{
			ans = log(sin(top)) - log(sin(bottom));
			std::cout << "The answer is : " << ans << "\n";
		}
		else if (trig == "sec")
		{
			ans = log((1 / cos(top) + tan(top))) - log((1 / cos(bottom) + tan(bottom)));
			std::cout << "The answer is : " << ans << "\n";
		}
		else if (trig == "csc")
		{
			ans = log((1 / sin(top) - (1 / tan(top)))) - log((1 / sin(bottom) - (1 / tan(bottom))));
			std::cout << "The answer is : " << ans << "\n";
			//https://www.math.ucdavis.edu/~kouba/CalcTwoDIRECTORY/trigintdirectory/TrigInt.html
		}
	}
};