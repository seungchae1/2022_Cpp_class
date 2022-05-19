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
	sName = "익명";
	nAge = 0;
}

Person::Person(string name, int age)
	:sName(name), nAge(age) {}

void Person::hi()
{
	cout << "이름 : " << sName << endl;
	cout << "나이 : " << nAge << endl;
}

//자식 클래스
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
	Person* person = new Person("한승원",100);
	person->hi();

	Student student;
	student.study();

	return 0;
}