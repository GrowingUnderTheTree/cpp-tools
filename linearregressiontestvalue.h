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
		double input;
		double x[500];
		double y[500];
		cout << "Enter the amount of data : ";
		cin >> lim;
		if (lim > 500)
		{
			cout << "The amount of data had been limited to 500";
		}
		cout << "Enter the value for x : \n";
		for (int i = 0; i < lim; i++)
		{
			cin >> x[i];
		}
		cout << "Enter the value for y : \n";
		for (int i = 0; i < lim; i++)
		{
			cin >> y[i];
		}
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
		double atop = (sumy * squarex) - (sumx * xysum);
		double alower = (lim * squarex) - (sumx * sumx);
		double a = atop / alower;
		double btop = (lim * xysum) - (sumx * sumy);
		double blower = (lim * squarex) - (sumx * sumx);
		double b = btop / blower;
		cout << "Enter the value of x in the formula y = m * x  + cfor to predict the value of y : \n";
		cin >> input;
		double linearregression = a + b * input;
		double tstat = linearregression / r;
		cout << "The linear regression is : " << linearregression << "\n";
		cout << "The correlation coeffecient is : " << r << "\n";
		cout << "The t-value is : " << tval << "\n";
		cout << "The test statistic is : " << tstat << "\n";
	}
};
