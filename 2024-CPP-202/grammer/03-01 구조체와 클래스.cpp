#include <iostream>
#include <string>
using namespace std;

class Student {
public: 
	// 생성자 : 객체가 생성될 때 호출되는 함수
	// 생성자는 반환형이 없다.
	Student() {
		hakbun_ = 2222;
		name_ = "swag";
	}
	Student(int hakbun, string name) {
		hakbun_ = hakbun;
		name_ = name;
	}
	// 클래스의 멤버를 출력
	void show(void) {
		cout << hakbun_ << endl;
		cout << name_ << endl;
	}

private :
	int hakbun_;	
	string name_;
};

int main(void) 
{	
	// 동적할당 : 메모리는 heap에서 할당. 실행 (런타임) 시 메모리크기가 정해짐
	Student* jisu = Student(2202,"나지수");

	// 정적할당 : 메모리는 stack에서 할당
	Student swag = Student();

	(*jisu).show();
	swag.show();
	return 0;
}

