#pragma once
#ifndef numberguess_h

#endif // !numberguess_h
#define numberguess_h
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
class numberguessr;

class numberguesr {
public:
	int test;
	string moretest;
	bool isNumber(const std::string& s){
    return s.find_first_not_of("0123456789") == std::string::npos;
    }
	void guessit() {
		srand(time(NULL));
		int random = rand() % 10 + 0;
		string x;
		int y;
		cout << "Number guesser\n Please enter a number between Zero to Ten : ";
		cin >> x;
		if (isNumber(x) == true){
			int y = stoi(x);
		}
		else {
			cout << "please enter a number";
		}
		cout << "The number you input is : " << x << "\n";
		cout << "The correct number is : " << random << "\n";
		if (y == random) {
			cout << "Congratulations!, you guessed the number correctly! \n";
		}
		else if (y > 10) {
			cout << "Please enter the number between Zero to Ten \n";
		}
		else {
			cout << "You guessed the wrong number! Maybe next time? \n";
		}
	}
	//Yes this is for a test
};