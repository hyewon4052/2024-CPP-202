#include <iostream>
#include <string>

int main(void) {
	std::string str = "develop hungry";
	std::string str2;

	// str에 있는 내용을 str2에 복사
	str2 = str;

	std::cout << str2;
}