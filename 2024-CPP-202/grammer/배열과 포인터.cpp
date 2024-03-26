#include <stdio.h>

int main(void) {
	int arr[4] = { 10,20,30,40 };
	char str[4] = { 'abc' };

	// 주소값 4바이트만큼의 차이
	printf("%d %d \n", &arr[0], &arr[1]);
	// 주소값 1바이트만큼의 차이
	printf("%d %d \n", &str[0], &str[1]);
	
	return 0;
}
