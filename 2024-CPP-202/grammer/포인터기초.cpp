#include <iostream>

// 이름공간. std::를 안해도 된다.
using namespace std;

int main(void) {
	int num = 3;
	cout << num << endl;	// a변수에 들어있는 값;
	cout << &num << endl;	// 변수가 메모리 공간에 할당되어 있는 주소
		
	int arr[5] = { 10,20,30,40,50 };	
	cout << arr << endl;	// 배열이 메모리 공간에 할당되어 있는 주소
}