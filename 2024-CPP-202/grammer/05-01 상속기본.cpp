#include <string>
#include <iostream>
using namespace std;

class Person {
public:
	Person(string name, int age)
		:name_(name), age_(age) 
	{
		cout << "부모생성자 호출" << endl;
	}
	~Person() {
		cout << "부모소멸자 호출" << endl;
	}
	
	void show_person() {
		cout << name_ << "의 나이는 " << age_ << "입니다. " << endl;
	}

private:
	string name_;
	int age_;
};

class Student : public Person {
public :
	// 부모생성자가 먼저 호출
	Student(string name, int age, int id) : Person(name, age), id_(id) {
		cout << "자식생성자 호출" << endl;
	}
	~Student() {
		cout << "자식소멸자 호출" << endl;
	}
	void show_person() {
		cout << id_ << " ";
		Person::show_person();	// 부모 클래스의 멤버함수 호출
	}
private :
	int id_;
};

int main(void) {
	Student* stu = new Student("조드리햅번",39,1004);
	stu -> show_person();
	delete stu;
	return 0;
}

