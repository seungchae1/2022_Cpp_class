#include <iostream>
#include <string>

using namespace std;

class Animal {
public :
	Animal() { cout << "Animal ����" << endl; }
	~Animal() { cout << "Animal ����" << endl; }

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
	~Tiger() { cout << "Tiger ����" << endl; }


	void roar(void) override { cout << "����" << endl; }
};

class Dog : public Animal {
public:
	Dog() { cout << "Dog ����" << endl; }
	~Dog() { cout << "Dog ����" << endl; }


	void roar(void) override { cout << "�۸�" << endl; }
};

int main()
{
	Animal* animal = new Tiger();
	delete animal;

	return 0;
}