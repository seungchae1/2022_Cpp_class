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
	Student* stu = new Student[6];
	for (int i = 0; i < 6; i++)
		// �迭�̱⶧���� ->�� �ƴ� .���� �������
		stu[i].show();

	delete[]stu;

	return 0;
}

Student::Student()
{
	this->nHaknun = 1234;
	this->sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

Student::Student(int Hakbun, string Name)
	:nHaknun(Hakbun), sName(Name)
	// ��ü������ ���ÿ� ������� �ʱ�ȭ	// �������(�Ű�����)
	// const/������ ��������� ����� �� �ִ�.
{
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

void Student::show()
{
	cout << "�й��� " << nHaknun << "�Դϴ�" << endl;
	cout << "�̸��� " << sName << "�Դϴ�" << endl << endl;
}