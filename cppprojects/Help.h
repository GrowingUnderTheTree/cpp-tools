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
	}
};
