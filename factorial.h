#pragma once
#ifndef factorial_h

#endif // !factorial_h
#define factorial_h
#include <iostream>
using namespace std;
class factorial;

class factorial {
public:
	void fac(int *array, int max) {
		for (int i = 0; i < max; ++i) {
			array[i] = i + 1;
		}
	}
	void fa() {
		int i;
		int array[5];
		for (i = 0; i < 5; i++) {
			array[i] = i + 1;
		}
		cout << "the array is : " << array[5];
	}
};
