#include <iostream>
#include <string>

using namespace std; 


class Animal {
public : 
	Animal(string name, unsigned int age, int leg_num) 
		: name_(name), age_(age), leg_num_(leg_num) {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
		cout << "다리갯수 : " << leg_num << endl;
	}

	void walk(void) {
		cout << "걷다" << endl;
	}
	void bark(void) {
		cout << "짖다" << endl;
	}
	void eat(void) {
		cout << "먹다" << endl;

	}

private :
	string name_;
	unsigned int age_;
	int leg_num_;
};

class Dog : public Animal {
public:
	Dog(string name, unsigned int age, int leg_num, int loyalty) 
		:Animal(name, age, leg_num), loyalty_(loyalty) 
	{
		cout << "충성도" << endl;
	}
	// C++은 디폴트가 정적바인딩이기 때문에 가상함수로 오버라이딩 해야 한다.
	void bark() {
		cout << "울프울프" << endl;
	}
	void eat() {
		cout << "왕~왕~" << endl;
	}
	void walk() {
		cout << "촵촵촵촵" << endl;
	}
private:
	int loyalty_;
};

void main(void) {
	Animal* animal = new Animal("추트레인",8,2);
	animal->bark();
	animal->eat();
	animal->walk();
	delete animal;

	animal = new Dog("마루", 5, 2, 100);
	delete animal;
	animal->bark();
	animal->eat();
	animal->walk();
}