#include <iostream>
#include <string>
using namespace std;

class Student {
	int hakbun_;	
	string name_;
};

int main(void) 
{	
	Student jisu;
	// class는 default가 private이다.
	jisu.hakbun_ = 2202;
	jisu.name_ = "나지수";

	return 0;
}

