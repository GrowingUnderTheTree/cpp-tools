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
class filecreate;

class filecreate {
public:
	void cf() {
		string x, y, z;
		cout << "Enter the file extension without the dot(Eg. txt, pdf) : ";
		cin >> x;
		cout << "Enter the file name : ";
		cin >> y;
		cout << "Enter the things you wish to say in the file : ";
		cin >> z;
		std::ofstream files(y + "." + x);
		files << z;
		files.close();
	}
};