#pragma once
#ifndef entropy_h

#endif // !entropy_h
#define entropy_h
#include <iostream>
#include <cmath>
using namespace std;
class password;

class password {
public:
	void passwordentropy() {
		double r, l;
		cout << "Enter the pool of unique character (Eg. A-Z = 26, aA-zZ = 52): \n";
		cin >> r;
		cout << "Enter the numbers of characters in your password: \n";
		cin >> l;
		long long possible = pow(r, l);
		cout << "The total possible number of your password is : " << possible << "\n";
		long long entropy = log2(possible);
		cout << "The entropy of your password is : " << entropy << " bits of entropy per character. \n";
		//logA(y)=x is equivalent to A power of x = y
	}
};
