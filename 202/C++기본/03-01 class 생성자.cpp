#include <iostream>
#include <string>

using namespace std;

class Student
{
	int nHaknun;
	string sName;
public:
	Student();
	Student(int Hakbun, string Name);
	void show();
};

int main() 
{
	Student stu1 = { 1201,"������" };
	stu1.show();
	
	Student stu2 = Student(1202,"������");
	stu2.show();

	Student stu3;
	stu3.show();

	return 0;
}

Student::Student()
{
	this->nHaknun = 1234;
	this->sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

Student::Student(int Hakbun, string Name)
{
	this->nHaknun = Hakbun;
	this->sName = Name;
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

void Student::show()
{
	cout << "�й��� " << nHaknun << "�Դϴ�" << endl;
	cout << "�̸��� " << sName << "�Դϴ�" << endl << endl;
}