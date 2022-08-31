#include <iostream>
#include <string>

using namespace std;

class Animal {
public :
	Animal() { cout << "Animal ����" << endl; }
	virtual ~Animal() { cout << "Animal �Ҹ�" << endl; }

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
	Tiger() { cout << "Tiger ����" << endl; }
	virtual ~Tiger() { cout << "Tiger �Ҹ�" << endl; }


	void roar(void) override { cout << "����" << endl; }
};

class Dog : public Animal {
public:
	Dog() { cout << "Dog ����" << endl; }
	virtual ~Dog() { cout << "Dog �Ҹ�" << endl; }


	void roar(void) override { cout << "�۸�" << endl; }
};

int main()
{
	Animal* animal = new Tiger();
	delete animal;

	return 0;
}