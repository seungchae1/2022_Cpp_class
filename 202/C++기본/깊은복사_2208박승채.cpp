#include <iostream> // cout, endl ��ü�� ������ ����
#include <string>	// string Ŭ������ ������ ����

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// ������ : ��ü�� ������ ��, ȣ��Ǵ� �Լ�
	Student(void);
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);

	// �Ҹ��� : ��ü�� �޸𸮿��� ������ ��, ȣ��Ǵ� �Լ�
	~Student();

	void show(void);
};


int main(void)
{
	// �Ϲݻ����� ȣ��
	Student stu1 = Student(1111, "JWP");

	// ��������� ȣ��
	Student stu2 = stu1;

	stu1.show();
	stu2.show();

	stu1.~Student();
	stu2.~Student();

	return 0;
}


Student::Student(void)
{
}

Student::Student(int Hakbun, const char* Name)
// ��ü������ ���ÿ� ������� �ʱ�ȭ // �������(�Ű�����)
// const/������ ��������� ����� �� �ִ�.
	: nHakbun(Hakbun)
{
	cout << "�Ϲݻ����� ȣ��" << endl;
	int len = strlen(Name) + 1;		// �������� ����
	sName = new char[len];			// ��������
	strcpy(sName, Name);
}

Student::Student(const Student& rhs)
{
	this->sName = new char [strlen(rhs.sName)+1];
	strcpy(this->sName, rhs.sName);
	
	this->nHakbun = rhs.nHakbun;

	cout << "��������� ȣ��" << endl;
}

Student::~Student()
{
	delete[]sName;
	cout << "�Ҹ��� ȣ��" << endl;
}

void Student::show(void)
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}