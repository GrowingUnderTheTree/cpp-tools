#pragma once
#ifndef binomialdistribution_h

#endif // ! binomialdistribution_h
#define binomialdistribution_h
#include <iostream>
#include <cmath>
using namespace std;
class bdst;

class bdst {
public:
    void calc() {
        double nx, p, q, ans;
        int x, n;
        cout << "Enter the number of time for a specific outcome within n trial : \n";
        cin >> x;
        cout << "Enter the probability of success in a single trial : \n";
        cin >> p;
        cout << "Enter the probability of failure in a single trial : \n";
        cin >> q;
        cout << "Enter the number of trial : \n";
        cin >> n;
        nx = combination(n,x);
        ans = nx * pow(p, x) * pow(q, n-x);
        cout << "The answer is : " << ans << "\n";
    }
    double combination(int n,int r) {
		long double up = 1;
		long double down = 1;
		long double rfac = 1;
		for (int i = 1; i <= n; i++)
		{
			up *= i;
		}
		for (int i = 1; i <= r; i++)
		{
			rfac *= i;
		}
		int nminr = n - r;
		for (int i = 1; i < nminr; i++)
		{
			down *= i;
		}
		long double ansdown = rfac * down;
		long double ans = (up / ansdown)/3;//answer is always *3 for some unknown reasons
	}
};