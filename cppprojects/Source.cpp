#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "numberguess.h"
#include "Help.h"
#include "circarea.h"
#include "sphere.h"
using namespace std;
class numberguessr;
class Help;
class CircleArea;
class spherevol;



int main() {
	while (true)
	{
		int x;
		string input;
		cout << "Please enter the specific command to perform a specific task.\n Please type out 'help' for help : ";
		cin >> input;
		if (input == "Numberguesser") {
			numberguesr gues;
			gues.guessit();
		}else if (input=="help") {
			Help help;
			help.helpme();
		}else if (input == "Circlearea") {
			CircleArea ca;
			ca.circarea();
		}
		else if (input == "Spherevolume") {
			spherevol sv;
			sv.volume();
		}else{
			cout << "Please type out 'help' for help \n";
		}
	}

}