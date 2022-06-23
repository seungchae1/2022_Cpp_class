#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	void eat(){ cout << "먹다" << endl; }
	void sleep(){ cout << "자다" << endl; }
	Person(string name, unsigned int age):name(name),age(age) {}

private:
	string name;
	unsigned int age;
};


class Student : public Person
{
public:
	void study(){ cout << "공부하다" << endl; }
	void go_school() { cout << "등교하다" << endl; }
	Student(string name, unsigned int age, int grade, string schoolName)
		:Person(name, age), grade(grade), schoolName(schoolName) {}

private:
	int grade; //학년
	string schoolName;
};


class UniStudent : public Student
{
public:
	void project() { cout << "과제하다" << endl; }
	void job() { cout << "알바가다" << endl; }
	UniStudent(string name, unsigned int age, int grade,  string schoolNameint, string department)
		:Student(name, age,grade, schoolNameint),department(department) {}

private:
	string department; //학과
};

class HighStudent: public Student
{
public:
	void homework() { cout << "숙제하다" << endl; }
	void academy() { cout << "학원가다" << endl; }
	HighStudent(string name, unsigned int age, int grade, string schoolNameint, int number)
		:Student(name, age, grade, schoolNameint),  number(number){}

private:
	int number; //학번
};
