#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void main(void) {

	vector <int> v = {5,6,13,84,65};
	for (int value : v) {	// value는 지역 변수라서 값이 바뀌지 않음
		value *= 10;
	}
	for (int value : v) {	
		cout << value << endl;
	}

}