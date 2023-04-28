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
		//Straight line equation: y = m * x + c
		int lim;
		double input;
		double x[500];//x value to calculate gradient, m
		double y[500];//y value to calculate gradient, m
		cout << "Enter the amount of data : ";
		cin >> lim;
		if (lim > 500)//limit the data input to 500
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
		double sumx = 0;//sum of x data
		sumx = accumulate(x, x + lim, sumx);
		cout << "The sum for x values is : " << sumx << "\n";
		double sumy = 0;//sum of y data
		sumy = accumulate(y, y + lim, sumy);
		cout << "the sum for y values is : " << sumy << "\n";
		double squarex = 0;//sum of square of x data
		for (int i = 0; i < lim; i++) {
			squarex += x[i] * x[i];
		}
		cout << "the sum of square x values is : " << squarex << "\n";
		double squarey = 0;//sum of square of y data
		for (int i = 0; i < lim; i++) {
			squarey += y[i] * y[i];
		}
		cout << "the sum of square y values is : " << squarey << "\n";
		double xysum = 0;//sum of multiply of x and y data
		for (int i = 0; i < lim; i++) {
			xysum += x[i] * y[i];
		}
		cout << "the sum of x values time y values is : " << xysum << "\n";
		double top = (lim * xysum) - (sumx * sumy);//number of data * sum of multiply of x and y - sum of x * sum of y
		double lowerleft = (lim * squarex) - (sumx * sumx);//number of data * sum of square x - sum of x squared
		double lowerright = (lim * squarey) - (sumy * sumy);//number of data * sum of square y - sum of y squared
		double lower = sqrt(lowerleft * lowerright);
		double r = top / lower;
		double rtpart = sqrt((lim-2)/(1-(r * r)));
		double tval = r * rtpart;
		double atop = (sumy * squarex) - (sumx * xysum);//sum of y * sum of square x - sum of x * sum of multiply of x and y
		double alower = (lim * squarex) - (sumx * sumx);//number of data * sum of square x - sum of x squared
		double a = atop / alower;
		double btop = (lim * xysum) - (sumx * sumy);//number of data * sum of multiply of x and y - sum of x * sum of y
		double blower = (lim * squarex) - (sumx * sumx);//number of data * sum of square x - sum of x squared
		double b = btop / blower;
		cout << "Enter the value of x in the formula y = m * x  + cfor to predict the value of y : \n";
		cin >> input;
		double linearregression = a + b * input;//y = m * x + c
		double tstat = linearregression / r;
		cout << "The linear regression is : " << linearregression << "\n";
		cout << "The correlation coeffecient is : " << r << "\n";
		cout << "The t-value is : " << tval << "\n";
		cout << "The test statistic is : " << tstat << "\n";
	}
};
