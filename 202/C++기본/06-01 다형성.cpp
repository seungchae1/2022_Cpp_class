#include <iostream>
#include <string>

using namespace std;

class Animal {
public :
	Animal() { cout << "Animal »ý¼º" << endl; }
	virtual ~Animal() { cout << "Animal ¼Ò¸ê" << endl; }

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
	Tiger() { cout << "Tiger »ý¼º" << endl; }
	virtual ~Tiger() { cout << "Tiger ¼Ò¸ê" << endl; }

	void eat(void) override { cout << "È£¶ûÀÌ ÂÁÂÁ" << endl; }
	void roar(void) override { cout << "¾îÈï" << endl; }
	void walk(void) override { cout << "È£¶ûÀÌ °É¾î" << endl; }
};

class Dog : public Animal {
public:
	Dog() { cout << "Dog »ý¼º" << endl; }
	virtual ~Dog() { cout << "Dog ¼Ò¸ê" << endl; }

	void eat(void) override { cout << "°­¾ÆÁö ÂÁÂÁ" << endl; }
	void roar(void) override { cout << "¸Û¸Û" << endl; }
	void walk(void) override { cout << "°­¾ÆÁö °É¾î" << endl; }
};

int main()
{
	Animal* animal = new Tiger();
	animal->eat();
	delete animal;

	return 0;
}