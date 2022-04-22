#pragma once
#ifndef linearregressiontestvalue_h

#endif // !linearregressiontestvalue_h
#define linearregressiontestvalue_h
#include<iostream>
#include<numeric>
#include<cmath>
using namespace std;
class testvalue;

class  testvalue
{
public:
	void tvalue() {
		int lim;
		double x[500] = { 43, 21, 25, 42, 57, 59 };
		double y[500] = { 99, 65, 79, 75, 87, 81 };
		cout << "Enter the amount of data : ";
		cin >> lim;
		double sumx = 0;
		sumx = accumulate(x, x + lim, sumx);
		cout << "The sum for x values is : " << sumx << "\n";
		double sumy = 0;
		sumy = accumulate(y, y + lim, sumy);
		cout << "the sum for y values is : " << sumy << "\n";
		double squarex = 0;
		for (int i = 0; i < lim; i++) {
			squarex += x[i] * x[i];
		}
		cout << "the sum of square x values is : " << squarex << "\n";
		double squarey = 0;
		for (int i = 0; i < lim; i++) {
			squarey += y[i] * y[i];
		}
		cout << "the sum of square y values is : " << squarey << "\n";
		double xysum = 0;
		for (int i = 0; i < lim; i++) {
			xysum += x[i] * y[i];
		}
		cout << "the sum of x values time y values is : " << xysum << "\n";
		double top = (lim * xysum) - (sumx * sumy);
		double lowerleft = (lim * squarex) - (sumx * sumx);
		double lowerright = (lim * squarey) - (sumy * sumy);
		double lower = sqrt(lowerleft * lowerright);
		double r = top / lower;
		double rtpart = sqrt((lim-2)/(1-(r * r)));
		double tval = r * rtpart;
		cout << "The correlation coeffecient is : " << r << "\n";
		cout << "The t-value is : " << tval << "\n";
	}
};
