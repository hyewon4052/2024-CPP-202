#include <stdio.h>

void Call_by_value(int num);

void main(void) {
	int val = 3;
	printf("바꾸기 전 %d \n", val);
	Call_by_value(val);
	printf("바꾸기 후 %d \n", val);

}

void Call_by_value(int num) {
	num = 5;
}