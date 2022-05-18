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
	//���������
	Student(const Student& rhs);

	//�Ҹ��� : ��ü�� �޸𸮿��� ������ �� �����Ǵ� �Լ�
	~Student();

	void show();
};

int main() 
{
	//�Ϲ� ������ ȣ��
	Student stu1 = Student(1111, "JWP");
	
	//��������� ȣ��
	Student stu2 = stu1; //Student stu2 = Student(stu1);

	stu1.show();
	stu2.show();

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

Student::Student(const Student& rhs) 
	:nHaknun(rhs.nHaknun),sName(rhs.sName)
{
	cout << "��������� ȣ��" << endl;
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