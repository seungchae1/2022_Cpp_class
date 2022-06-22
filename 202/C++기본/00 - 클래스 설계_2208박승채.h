#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	void 먹다(){ cout << "먹다" << endl; }
	void 자다(){ cout << "자다" << endl; }
	Person(string name, unsigned int age):name(name),age(age) {}

private:
	string name;
	unsigned int age;
};


class Student : public Person
{
public:
	void 공부하다(){ cout << "공부하다" << endl; }
	void 등교하다() { cout << "등교하다" << endl; }
	Student(string name, unsigned int age, int grade)
		:Person(name, age), grade(grade) {}

private:
	int grade; //학년
};


class UniStudent : public Student
{
public:
	void 과제하다() { cout << "과제하다" << endl; }
	void 알바가다() { cout << "알바가다" << endl; }
	UniStudent(string name, unsigned int age, int grade , string university, string department)
		:Student(name, age,grade), university(university),department(department) {}

private:
	string university; //대학교
	string department; //학과
};


class HighStudent: public Student
{
public:
	void 과제하다() { cout << "숙제하다" << endl; }
	void 학원가다() { cout << "학원가다" << endl; }
	HighStudent(string name, unsigned int age, int grade, int number, string highschool)
		:Student(name, age, grade),  number(number), highschool(highschool){}

private:
	string highschool; //고등학교
	int number; //학번
};
