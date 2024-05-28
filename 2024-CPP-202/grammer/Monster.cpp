#include <iostream>
#include <string>

using namespace std;

// 기본 클래스 정의
class Monster {
protected: // private에서 protected로 변경
    string name;
    int health;
public:
    Monster(const string& name, int health) : name(name), health(health) {}

    // 몬스터의 정보를 출력하는 함수
    void displayInfo() {
        cout << "Name: " << name << ", Health: " << health << endl;
    }
};

// 파생 클래스 정의
class Dragon : public Monster {
private:
    int firePower;
public:
    Dragon(const string& name, int health, int firePower) : Monster(name, health), firePower(firePower) {}

    // 용의 정보를 출력하는 함수
    void displayInfo() {
        cout << "Dragon - Name: " << name << ", Health: " << health << ", Fire Power: " << firePower << endl;
    }
};

int main() {
    // 몬스터 생성
    Monster monster("Goblin", 100);
    monster.displayInfo(); // 기본 몬스터 정보 출력

    // 용 생성
    Dragon dragon("Smaug", 500, 1000);
    dragon.displayInfo(); // 용 정보 출력

    return 0;
}
