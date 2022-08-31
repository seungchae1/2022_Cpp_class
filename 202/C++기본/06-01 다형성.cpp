#include <iostream>
#include <string>

using namespace std;

class Animal {
public :
	void eat() { cout << "동물먹어" << endl; }
	//roar함수를 가상함수테이블에 등록(동적 바인딩)
	virtual void roar() { cout << "동물짖어" << endl; }
	void walk() { cout << "동물걸어" << endl; }
	
private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal{
public :
	void roar(void) override { cout << "어흥" << endl; }
};

class Dog : public Animal {
public:
	void roar(void) override { cout << "멍멍" << endl; }
};

int main()
{
	Animal * animal = new Animal();
	animal->roar();	// 동물짖어
	delete animal;

	animal = new Tiger();
	animal->roar();// 동물짖어
	delete animal;

	animal= new Dog();
	animal->roar();// 동물짖어
	delete animal;


	return 0;
}