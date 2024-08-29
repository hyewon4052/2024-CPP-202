#include <iostream>
#include <string.h>

using namespace std;

class Food {
public :
	Food(int civill, int force, string name, int territory) :
		civill_(civill), force_(force),name_(name),territory_(territory) {

	}
private:
	int civill_;	// 국민 수 
	int force_;	// 군력
	string name_;	// 이름
	int territory_;	// 땅(면적)
};

class Kimchi : public Food {
public:
	Kimchi(int civill, int force, string name, int territory, int garic, int pepper)
		: Food(civill, force, name, territory), garic_(garic), pepper_(pepper) {

	}
private:
	int garic_;
	int pepper_;
};


class Jelly : public Food {
public:
	Jelly(int civill, int force, string name, int territory, int gelatin, int sugar)
		: Food(civill, force, name, territory), gelatin_(gelatin), sugar_(sugar) {

	}
private:
	int gelatin_;
	int sugar_;
};

class Cheese : public Food {
public:
	Cheese(int civill, int force, string name, int territory, int milk, int Rennet)
		: Food(civill, force, name, territory), milk_(milk), Rennet_(Rennet) {

	}
private:
	int milk_;
	int Rennet_;	// 응고제

};