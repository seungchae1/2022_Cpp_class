#include <iostream>
#include <string.h>

using namespace std;

class Student
{
	int nHaknun;
	char * sName;
public:
	//������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	Student(int Hakbun, const char* Name);
	//�Ҹ��� : ��ü�� �޸𸮿��� ������ �� �����Ǵ� �Լ�
	~Student();

	void show();
};

int main() 
{
	Student stu1 = Student(1111, "JWP");
	stu1.show();

	return 0;
}

Student::Student(int Hakbun, const char* Name)
	:nHaknun(Hakbun)
{
	cout << "�Ϲݻ����� ����" << endl;
	int len = strlen(Name) + 1;	//�����Ҵ��� ������ ũ�⸦ ���ϰ�
	sName = new char[len];		//�� ũ�⸸ŭ �迭�� �����Ҵ�
	strcpy(sName, Name);		// �Ű������� �ִ� ���ڿ� ����
}

Student:: ~Student()
{
	delete []sName;
	cout << "�Ҹ��� ȣ��" << endl;
}

void Student::show()
{
	cout << "�й��� " << nHaknun << "�Դϴ�" << endl;
	cout << "�̸��� " << sName << "�Դϴ�" << endl << endl;
}