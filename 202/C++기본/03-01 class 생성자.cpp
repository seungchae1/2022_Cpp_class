#include <iostream>
#include <string>

using namespace std;

class Student
{
	int nHaknun;
	string sName;

public:
	//������ : ��ü�� ������ ��, ȣ��Ǵ� �Լ�
	Student() 
	{
		nHaknun = 1234;
		sName = "�̻��";
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}
};

int main() 
{
	Student stu1;
	Student stu2 = Student();

	return 0;
}