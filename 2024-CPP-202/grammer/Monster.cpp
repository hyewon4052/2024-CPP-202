#include <iostream>
#include <string>

using namespace std;

// �⺻ Ŭ���� ����
class Monster {
protected: // private���� protected�� ����
    string name;
    int health;
public:
    Monster(const string& name, int health) : name(name), health(health) {}

    // ������ ������ ����ϴ� �Լ�
    void displayInfo() {
        cout << "Name: " << name << ", Health: " << health << endl;
    }
};

// �Ļ� Ŭ���� ����
class Dragon : public Monster {
private:
    int firePower;
public:
    Dragon(const string& name, int health, int firePower) : Monster(name, health), firePower(firePower) {}

    // ���� ������ ����ϴ� �Լ�
    void displayInfo() {
        cout << "Dragon - Name: " << name << ", Health: " << health << ", Fire Power: " << firePower << endl;
    }
};

int main() {
    // ���� ����
    Monster monster("Goblin", 100);
    monster.displayInfo(); // �⺻ ���� ���� ���

    // �� ����
    Dragon dragon("Smaug", 500, 1000);
    dragon.displayInfo(); // �� ���� ���

    return 0;
}
