#include <iostream>
#include <string>
#include <vector>

using namespace std;

void main(void) {
	vector <string> v = { "�Ե�����","��ȭ�鼼��","���ֵ帲Ÿ��","���̵��ϸ�" };
	for (auto str : v) {
		cout << str << endl;
	}
}