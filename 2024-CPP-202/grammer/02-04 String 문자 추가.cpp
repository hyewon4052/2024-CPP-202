#include <stdio.h>
#include <string.h>

int main(void) {
	char str[30] = "c";
	strcat(str, "addition");

	printf("%s", str);
}