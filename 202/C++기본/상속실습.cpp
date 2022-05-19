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

//�ڽ� Ŭ����
class Student :public Person 
{
	int nHakbun;
public:
	Student();
	Student(string name, int age, int hakbun);
	void study();
};

Student::Student() 
{
	nHakbun = 0;
}

Student::Student(string name, int age, int hakbun)
:Person(name,age), nHakbun(hakbun){}

void Student::study()
{
	hi();
}

int main()
{
	Person* person = new Person("�ѽ¿�",100);
	person->hi();

	Student student;
	student.study();

	return 0;
}