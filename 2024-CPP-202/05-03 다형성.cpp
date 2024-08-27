#include <iostream>
#include <string>

using namespace std; 


class Animal {
public : 
	Animal(string name, unsigned int age, int leg_num) 
		: name_(name), age_(age), leg_num_(leg_num) {
		cout << "이름 : " << name_ << endl;
		cout << "나이 : " << age_ << endl;
		cout << "다리갯수 : " << leg_num_ << endl;
	}

	virtual ~Animal() {
		cout << "Animal 소멸자" << endl;
	}
	
	// 순수 가상 함수 추상메서드
	virtual void walk(void) = 0;
	virtual void bark(void) = 0;
	virtual void eat(void) = 0;

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
		cout << "충성도" << loyalty_ << endl;
	}

	virtual ~Dog() {
		cout << "Dog 소멸자" << endl;
	}

	// C++은 디폴트가 정적바인딩이기 때문에 가상함수로 오버라이딩 해야 한다.
	void bark() override { cout << "울프울프" << endl; }
	void eat()override { cout << "왕~왕~" << endl; }
	void walk()override { cout << "촵촵촵촵" << endl; }
private:
	int loyalty_;
};

void main(void) {
	
	// 추상 클래스는 객체를 생성할 수 없다.(new Animal () 불가)
	//Animal* animal = new Animal("마루", 5, 2, 100);
	Animal* animal = new Dog("마루", 5, 2, 100);
	animal->bark();

	// 정적바인딩으로 인해 DOg소멸자는 호출이 안됨
	// 소멸자 앞에 virtual을 쓰는 이유는 동적바인딩을 하기 위해. -> 메모리 누수 방지
	delete animal;
}