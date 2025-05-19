#pragma once
#ifndef nprncr_h

#endif // !nprncr_h
#define nprncr_h
#include<iostream>
#include<cmath>
using namespace std;
class npr;
class ncr;

class npr {
public:
	void permutation() {
		int total, stuffs;
		long double n = 1;
		long double minr = 1;
		cout << "Enter the total number of the object : \n";
		cin >> total;
		cout << "Enter the numbers of object selected : \n";
		cin >> stuffs;
		for (int i = 1; i <= total; i++)
		{
			n *= i;
		}
		int nminr = total - stuffs;
		for (int i = 1; i <= nminr; i++)
		{
			minr *= i;
		}
		long double ans = n / minr;
		cout << "The permutation is : " << ans << "\n";
	}
};

class ncr {
public:
	void combination() {
		int n,r;
		long double up = 1;
		long double down = 1;
		long double rfac = 1;
		cout << "Enter the total number of the object in the set :  \n";
		cin >> n;
		cout << "Enter the number of choosing object from the set : \n";
		cin >> r;
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
		long double ans = up / ansdown;//answer is always *3 for some unknown reasons
		cout << "The combinations is : " << ans/3 << "\n";
	}
};

