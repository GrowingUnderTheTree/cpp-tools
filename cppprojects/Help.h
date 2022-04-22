#pragma once
#ifndef Help_h

#endif // !Help_h
#define Help_h

#include <iostream>
using namespace std;
class Help;

class Help {
public:
	void helpme() {
		cout << "Enter 'Numberguesser' for number guesser \n";
		cout << "Enter 'Circlearea' to calculate the area of circle \n";
		cout << "Enter 'Spherevolume' to calculate the volume of sphere \n";
		cout << "Enter 'pythagoras' to calculate pythagoras theorem \n";
		cout << "Enter 'createfile' to create a file \n";
		cout << "Enter 'coeffecientcounter' to calculate coeffecient\n";
		cout << "Enter 'passwordentropy' to calculate the entropy bits of your passwords\n";
		//cout << "Enter 'factor' to factorize quadratics \n";
		//cout << "Enter 'factorial' to calculate factorial \n";
		cout << "Enter 'linearregression' to calculate Linear regression \n";
		cout << "Enter 'testvalue' to get the test value of the linear regression \n";
	}
};
