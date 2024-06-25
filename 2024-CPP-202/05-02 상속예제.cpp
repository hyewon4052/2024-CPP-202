#include <iostream>
#include <string.h>
using namespace std;

class C {
public:
    C(bool g_pointer, bool g_structrue, bool l_stdio) : g_pointer_(g_pointer), g_structure_(g_structrue), l_stdio_(l_stdio) { }

    void print_show()
    {
        cout << "포인터 " << g_pointer_ << endl;
        cout << "구조체 " << g_structure_ << endl;
        cout << "Stdio " << l_stdio_ << endl;
    }

    

private:
    bool g_pointer_;
    bool g_structure_;
    bool l_stdio_;

};

class Cpp : public C {
public:
    Cpp(bool g_pointer, bool g_structrue, bool l_stdio, bool g_class, bool g_inheritance, bool g_reference)
        : C(g_pointer, g_structrue, l_stdio), g_class_(g_class), g_inheritance_(g_inheritance), g_reference_(g_reference) { }
    void print_show()
    {
        C::print_show();

        cout << "클래스 " << g_class_ << endl;
        cout << "상속 " << g_inheritance_ << endl;
        cout << "참조 " << g_reference_ << endl;
    }
    int* dynamic_allcation_int() {
        int* ptr = (int*)malloc(sizeof(int));
        return ptr;
    }

    void free_dynamic_allocation_int(int* ptr) {
        delete ptr;

    }

private:
    bool g_class_;
    bool g_inheritance_;
    bool g_reference_;

};

int main(void) {
    Cpp* cpp = new Cpp(true, true, true, true, true, true);
    cpp->print_show();

    return 0;
}