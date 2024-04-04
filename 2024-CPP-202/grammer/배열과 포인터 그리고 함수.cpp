#include <iostream> 

// 배열의 모든 요소를 0으로 바꿔준다.
void erase(int* ptr,int length) {	
	
	for (int i = 0; i <= length; i++) {
		ptr[i] = 0;
	}
}

int main(void) {
	int arr[4] = { 10,20,30,40 };
	int length = sizeof(arr) / sizeof(arr[0]);
	printf("%d %d %d %d \n", arr[0], arr[1], arr[2], arr[3]);
	erase(arr,length);

	// 배열의 모든 요소 출력
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}