#include <iostream>
#include <string.h>

using namespace std;

class Person
{
	string sName;
	int nAge;
public:
	Person();
	Person(string name, int age);
	void hi();

};

Person::Person()
{
	sName = "�͸�";
	nAge = 0;
}

Person::Person(string name, int age)
	:sName(name), nAge(age) {}

void Person::hi()
{
	cout << "�̸� : " << sName << endl;
	cout << "���� : " << nAge << endl;
}

int main()
{
	Person* person = new Person("�ѽ¿�",100);
	person->hi();
	return 0;
}