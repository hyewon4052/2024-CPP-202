#include <iostream>
#include <map>

using namespace std;

void main(void) {

	map<string, long long> money;
	// 미리 공간을 많이 확보하자 성능을 위해
	
	// 맵 추가
	money["지수"] = 10000000;
	money["수빈"] = 30000000;
	money["민선"] = 100;

	// 반복자
	map<string, long long>::iterator iter;
	for (iter = money.begin(); iter != money.end(); iter++) {
		cout << iter->first << "는 " << iter->second << endl;
	}
	
	// 값 수정
	money["민선"] = 1000000000;
	cout << money["민선"] << endl;

	// 크기
	cout << money.size() << endl;
}