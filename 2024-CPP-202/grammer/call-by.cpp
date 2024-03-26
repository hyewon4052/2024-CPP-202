#include <iostream>

// 이름공간. std::를 안해도 된다.
using namespace std;

void call_by_value(int val) {

}

int main(void) {
	int num = 4;
	call_by_value(num);
	cout << num;
	return 0;
}