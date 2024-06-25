#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string name;
    int age;

public:
    Animal(string _name, int _age) : name(_name), age(_age) {}
    virtual void sound() {  // 가상 함수로 변경
        cout << "Animal sound" << endl;
    }

    // Getter 함수들
    string getName() const { return name; }
    int getAge() const { return age; }
};ㅇ

class Dog : public Animal {
public:
    Dog(string _name, int _age) : Animal(_name, _age) {}

    void bark() {
        cout << "왈 왈" << endl;
    }

    void sound() override {  // 오버라이딩
        bark();  // 강아지의 소리는 짖는 소리이므로 bark() 함수 호출
    }
};

int main() {
    Dog myDog("Buddy", 3);

    myDog.sound();
    myDog.bark();

    return 0;
}
