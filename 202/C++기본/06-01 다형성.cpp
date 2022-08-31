#include <iostream>
#include <string>

using namespace std;

class Animal {
public :
	void eat() { cout << "�����Ծ�" << endl; }
	//roar�Լ��� �����Լ����̺� ���(���� ���ε�)
	virtual void roar() { cout << "����¢��" << endl; }
	void walk() { cout << "�����ɾ�" << endl; }
	
private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal{
public :
	void roar(void) override { cout << "����" << endl; }
};

class Dog : public Animal {
public:
	void roar(void) override { cout << "�۸�" << endl; }
};

int main()
{
	Animal * animal = new Animal();
	animal->roar();	// ����¢��
	delete animal;

	animal = new Tiger();
	animal->roar();// ����¢��
	delete animal;

	animal= new Dog();
	animal->roar();// ����¢��
	delete animal;


	return 0;
}