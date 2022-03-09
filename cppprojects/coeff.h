#pragma once
#ifndef coeff_h

#endif // !coeff_h
#define coeff_h
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
class coeff;

class coeff {
public:
	void coeffecient() {
		int lim;//the limit of the values
		double xval[30];//array
		double yval[30];//array
		cout << "Enter the total amount of values (eg. 5, max = 30) : \n";
		cin >> lim;
		cout << "Enter x values : ";
		for (int i = 0; i < lim; ++i) {
			cin >> xval[i];//this kinda works but I don't really know why
		}
		cout << "Enter y values : ";
		for (int j = 0; j < lim; ++j) {
			cin >> yval[j];
		}
		/*
		cout << "The number you input for the xvalues are : \n";
		//print array elements
		for (int n = 0; n < lim; ++n) {
			cout << xval[n] << "  ";
		}
		cout << "The number you input for the yvalues are : \n";
		//print array elements
		for (int n = 0; n < lim; ++n) {
			cout << yval[n] << "  ";
		}
		These rows is used to debug
		*/
		int sumx = 0;
		sumx = accumulate(xval, xval+lim, sumx);
		cout << "The sum for x values is : " << sumx << "\n";
		int sumy = 0;
		sumy = accumulate(yval, yval + lim, sumy);
		cout << "the sum for y values is : " << sumy << "\n";
		int squarex = 0;
		for (int i = 0; i < lim; i++) {
			squarex += xval[i] * xval[i];
		}
		cout << "the sum of square x values is : " << squarex << "\n";
		int squarey = 0;
		for (int i = 0; i < lim; i++) {
			squarey += yval[i] * yval[i];
		}
		cout << "the sum of square y values is : " << squarey << "\n";
		int xysum = 0;
		for (int i = 0; i < lim; i++) {
			xysum += xval[i] * yval[i];
		}
		cout << "the sum of x values time y values is : " << xysum << "\n";
		double top = (lim * xysum) - (sumx * sumy);
		double lowerleft = (lim * squarex) - (sumx * sumx);
		double lowerright = (lim * squarey) - (sumy * sumy);
		double lower = sqrt(lowerleft * lowerright);
		double answer = top/lower;
		/*Pearson correlation coeffecient method.As this code is created and written by me,
		this will most likely fails to work.
		https://www.statisticshowto.com/probability-and-statistics/correlation-coefficient-formula/
		This website is used when writing this code*/
		cout << "the coeffecient is : " << answer << "\n";
	}
};
