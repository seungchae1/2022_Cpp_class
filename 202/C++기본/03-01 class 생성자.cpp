#include <iostream>
#include <string>

using namespace std;

class Student
{
	int nHaknun;
	string sName;
public:
	Student();
	void show();
};

int main() 
{
	Student stu1;
	Student stu2 = Student();

	stu1.show();
	stu2.show();
	return 0;
}


Student::Student()
{
	nHaknun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

void Student::show()
{
	cout << "�й��� " << nHaknun << "�Դϴ�" << endl;
	cout << "�̸��� " << sName << "�Դϴ�" << endl;
}