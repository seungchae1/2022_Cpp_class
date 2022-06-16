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
		cout << "�̸� : " << name << endl << "�й� : " << hakbun << endl;
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
		cout << "�б� : " << university << endl;
	}
private:
	string university;
};

int main()
{
	Student stu1 = Student("�ڽ�ä", 2208, "mirim");
	stu1.PrintShow();
	return 0;
}