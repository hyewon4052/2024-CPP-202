#include <iostream>
#include <string.h>

using namespace std;

class Food {
public :
	Food(int civill, int force, string name, int territory) :
		civill_(civill), force_(force),name_(name),territory_(territory) {

	}

	void show() {
		cout << "국민수 : " << civill_ << endl;
		cout << "군력 : " << force_ << endl;
		cout << "이름 : " << name_ << endl;
		cout << "면적 : " << territory_ << endl;
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
	void show() {
		cout << "마늘 : " << garic_ << endl;
		cout << "고춧가루 : " << pepper_ << endl;
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
	void show() {
		cout << "젤라틴 : " << gelatin_ << endl;
		cout << "설탕 : " << sugar_ << endl;
	}
private:
	int gelatin_;
	int sugar_;
};

class Cheese : public Food {
public:
	Cheese(int civill, int force, string name, int territory, int milk, int rennet)
		: Food(civill, force, name, territory), milk_(milk), rennet_(rennet) {

	}
	void show() {
		cout << "우유 : " << milk_ << endl;
		cout << "응고제 : " << rennet_ << endl;
	}
private:
	int milk_;
	int rennet_;	// 응고제

};

void main(void) {
	Food* player = new Kimchi(15, 95, "갓김치", 86, 100, 100);
	Food* friends = new Cheese(100, 20, "짜계치",100,20,100);

	player->show();
	cout << endl << endl;
	friends->show();

	delete friends;
	delete player;


}