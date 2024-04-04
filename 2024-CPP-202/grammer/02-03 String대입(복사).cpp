#include <stdio.h>
#include <string.h>

int main(void) {
	char str[30] = "develop hungry";
	char str2[30];
	// str에 있는 내용을 str2에 복사
	
	strcpy(str2, str);		// 보안에 취약한 함수 

	printf("%s", str2);
	
}