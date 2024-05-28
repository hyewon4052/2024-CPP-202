#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    void PrintMethod() {
        cout << "부모고양이" << endl;
    }

};

class Cat : public Animal {
public:
    void PrintMethod() {
        Animal::PrintMethod();
        cout << "자식고양이" << endl;
    }
};

// `main` 함수 정의
int main() {
    Cat cat;
    cat.PrintMethod();
    return 0;
}
