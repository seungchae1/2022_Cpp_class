#include <iostream>
#include <string>

using namespace std;

class player 
{
public:
	const char* name;
	player(const char * name, int stamina, int attack, int defend)
		:stamina(stamina), attack(attack), defend(defend)
	{
		this->name = name;
	}
	void getAll() {
		cout << "�̸� : " << name << endl;
		cout << "ü�� : " << stamina << endl;
		cout << "���� : " << attack << endl;
		cout << "��� : " << defend << endl;
	}
	~player() 
	{
		delete[] name;
	}
private:
	int stamina;
	int attack;
	int defend;
};

int main()
{
	player * p1 = new player("A", 300, 55, 30);
	p1->getAll();
	return 0;
}