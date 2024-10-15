#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void main(void) {

	vector <int> v = {5,6,13,84,65};
	for (int value : v) {
		value *= 10;
	}
	for (int value : v) {
		cout << value << endl;
	}

}