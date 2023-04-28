#pragma once
#ifndef createfile_h

#endif // !createfile_h
#define createfile_h
#include <iostream>
#include <fstream>
#include <string>
using std::string;
using std::cout;
using std::cin;
//works as using namespace std; but it looks way more professional
class filecreate;

class filecreate {
public:
	void cf() {
		string x, y, z;
		cout << "Enter the file extension without the dot(Eg. txt, pdf) : ";//self explanatory
		cin >> x;
		cout << "Enter the file name : ";
		cin >> y;
		cout << "Enter the things you wish to say in the file : ";
		cin >> z;
		std::ofstream files(y + "." + x);
		//ofstream helps write the file and ifstream helps read the file. This line of code help write text into the file
		files << z;
		files.close();
	}
};