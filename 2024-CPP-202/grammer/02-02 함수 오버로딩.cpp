#include <iostream>

using namespace std;

int mul (int a, int b) {
	return a * b;
}

float mul(float a, float b) {
	return a * b;
}

int main(void) {
	cout << mul(2, 2) << endl;
	cout << mul(2.2f, 2.2f) << endl;
	return 0;
}