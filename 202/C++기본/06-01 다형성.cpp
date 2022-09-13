#include <iostream>
#include <string>

using namespace std;

class Animal {
public :
	Animal() { cout << "Animal ����" << endl; }
	virtual ~Animal() { cout << "Animal �Ҹ�" << endl; }

	virtual void eat() {}
	virtual void roar() {}
	virtual void walk() {}
	
private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal{
public :
	Tiger() { cout << "Tiger ����" << endl; }
	virtual ~Tiger() { cout << "Tiger �Ҹ�" << endl; }

	void eat(void) override { cout << "ȣ���� ����" << endl; }
	void roar(void) override { cout << "����" << endl; }
	void walk(void) override { cout << "ȣ���� �ɾ�" << endl; }
};

class Dog : public Animal {
public:
	Dog() { cout << "Dog ����" << endl; }
	virtual ~Dog() { cout << "Dog �Ҹ�" << endl; }

	void eat(void) override { cout << "������ ����" << endl; }
	void roar(void) override { cout << "�۸�" << endl; }
	void walk(void) override { cout << "������ �ɾ�" << endl; }
};

int main()
{
	Animal* animal = new Tiger();
	animal->eat();
	delete animal;

	return 0;
}