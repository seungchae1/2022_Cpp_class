#include <iostream>
#include <string>

using namespace std;

template <typename T ,typename T2>
class player
{
public:
	T2 name;
	player(T2 name, T stamina, T attack, T defend)
		:stamina(stamina), attack(attack), defend(defend)
	{
		this->name = name;
	}
	void getAll() {
		cout << "이름 : " << name << endl;
		cout << "체력 : " << stamina << endl;
		cout << "공격 : " << attack << endl;
		cout << "방어 : " << defend << endl;
	}
	~player()
	{
		delete[] name;
	}
private:
	T stamina;
	T attack;
	T defend;
};

int main()
{
	player<int, string> * p1 = new player<int, string>("User", 300, 55, 30);
	p1->getAll();
	return 0;
}