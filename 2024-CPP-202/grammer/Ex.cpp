#include <stdio.h>

void Call_by_value(int num);

void main(void) {
	int val = 3;
	printf("�ٲٱ� �� %d \n", val);
	Call_by_value(val);
	printf("�ٲٱ� �� %d \n", val);

}

void Call_by_value(int num) {
	num = 5;
}