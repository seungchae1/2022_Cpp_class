#include <iostream>
#include <string.h>

using namespace std;

class Person 
{
public:
	Person(string name, int hakbun)
	:name(name),hakbun(hakbun) {}
	
	void PrintShow()
	{
		cout << "이름 : " << name << endl << "학번 : " << hakbun << endl;
	}
private:
	string name;
	int hakbun;
};

class Student : public Person
{
public:
	Student(string name, int hakbun, string university)
		:Person(name,hakbun), university(university){}
	void PrintShow()
	{
		Person ::PrintShow();
		cout << "학교 : " << university << endl;
	}
private:
	string university;
};

int main()
{
	Student stu1 = Student("박승채", 2208, "mirim");
	stu1.PrintShow();
	return 0;
}