﻿#include <iostream>
#include <map>

using namespace std;

void main(void)
{
	map<string, long long> money;

	// 맵 추가
	money["지수"] = 10000000000;
	money["수빈"] = 30000000000;
	money["민선"] = 100;


	// 반복자
	// map<string, long long>::iterator iter;
	for (auto iter = money.begin(); iter != money.end(); iter++)
		cout << iter->first << "는 " << iter->second << endl;

	// 값 수정
	money["민선"] = 10000000000;
	cout << money["민선"] << endl;

	// 크기
	cout << money.size() << endl;

}