#include <iostream>

using namespace std;

int int_mul (int a, int b) {
	return a * b;
}

float int_mul(float a, float b) {
	return a * b;
}

int main(void) {
	cout << int_mul(2, 2) << endl;
	cout << int_mul(2.2f, 2.2f) << endl;
	return 0;
}