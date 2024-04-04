#include <stdio.h>

int main(void) {
	char str[30] = "develop hungry";
	char str2[30];
	// str에 있는 내용을 str2에 복사
	
	int i = 0;
	for (; str[i] != '\0'; i++) {
		str2[i] = str[i];
	}
	str2[i] = str[i];

	printf("%s", str2);
	
}