#pragma once
#ifndef multiplereg_h

#endif // !multiplereg_h
#define multiplereg_h
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
class linearreg;

class linearreg {
public:
	double x[6] = {43, 21, 25, 42, 57, 59};
	double y[6] = { 99, 65, 79, 75, 87, 81 };
	void linreg() {
		int input;
		double sumx = 0;
		sumx = accumulate(x, x + 6, sumx);
		cout << "The sum of x is : " << sumx << "\n";
		double sumy = 0;
		sumy = accumulate(y, y + 6, sumy);
		cout << "The sum of y is : " << sumy << "\n";
		double squarex = 0;
		for (int i = 0; i < 6; i++)
		{
			squarex += x[i] * x[i];
		}
		double squarey = 0;
		for (int i = 0; i < 6; i++)
		{
			squarey += y[i] * y[i];
		}
		cout << "The sum of square x is : " << squarex << " and the sum of square y is : " << squarey << "\n";
		double xy = 0;
		for (int i = 0; i < 6; i++)
		{
			xy += x[i] * y[i];
		}
		cout << "The sum of xy is : " << xy << "\n";
		double atop = (sumy * squarex) - (sumx * xy);
		double alower = (6 * squarex) - (sumx * sumx);
		double a = atop / alower;
		double btop = (6 * xy) - (sumx * sumy);
		double blower = (6 * squarex) - (sumx * sumx);
		double b = btop / blower;
		cout << "The coeffecient of a is : " << a << "\n";
		cout << "The coeffecient of b is : " << b << "\n";
		cout << "Enter the age you want to know\n";
		cin >> input;
		double y = a + b * input;
		cout << "The glucose level during the age of " << input << "will be " << y << "\n";
	}
};

class regr {
public:
	void linreg() {
		double x[700];
		double y[700];
		int lim;
		cout << "Enter the amount of value in the dataset : \n";
		cin >> lim;
		cout << "Enter x values : \n";
		for (int i = 0; i < lim; i++)
		{
			cin >> x[i];
		}
		cout << "Enter y values : \n";
		for (int i = 0; i < lim; i++)
		{
			cin >> y[i];
		}
		int input;
		double sumx = 0;
		sumx = accumulate(x, x + lim, sumx);
		cout << "The sum of x is : " << sumx << "\n";
		double sumy = 0;
		sumy = accumulate(y, y + lim, sumy);
		cout << "The sum of y is : " << sumy << "\n";
		double squarex = 0;
		for (int i = 0; i < lim; i++)
		{
			squarex += x[i] * x[i];
		}
		double squarey = 0;
		for (int i = 0; i < lim; i++)
		{
			squarey += y[i] * y[i];
		}
		cout << "The sum of square x is : " << squarex << " and the sum of square y is : " << squarey << "\n";
		double xy = 0;
		for (int i = 0; i < lim; i++)
		{
			xy += x[i] * y[i];
		}
		cout << "The sum of xy is : " << xy << "\n";
		double atop = (sumy * squarex) - (sumx * xy);
		double alower = (lim * squarex) - (sumx * sumx);
		double a = atop / alower;
		double btop = (lim * xy) - (sumx * sumy);
		double blower = (lim * squarex) - (sumx * sumx);
		double b = btop / blower;
		cout << "The coeffecient of a is : " << a << "\n";
		cout << "The coeffecient of b is : " << b << "\n";
		cout << "Linear regression formula is : y = a + b * x. Please enter a number in x or y values to predict the values of opposite values.";
		cin >> input;
		double y = a + b * input;
		cout << "The value is " << y;
	}
};