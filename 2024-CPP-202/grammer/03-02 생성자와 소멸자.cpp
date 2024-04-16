#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:

    // ex) name: "domitory"
    Student(int hakbun, char* name) : hakbun_(hakbun)
    {

        int length = strlen(name);

        // '/0'가 들어가기 위해 공간 하나 더 추가
        name_ = new char[length+1];
        strcpy(name_, name);
    }

    // 클래스의 멤버를 출력
    void show(void)
    {
        cout << hakbun_ << " ";
        cout << name_ << endl;
    }

private:
    int hakbun_;
    char* name_;

};

int main(void)
{
    Student stu = Student(2213, (char*)"조수빈");
    stu.show();

    return 0;
}