#include <iostream> // cout, endl ��ü�� ������ ����
#include <string.h>	// string Ŭ������ ������ ����

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

	//������ �����ε�
	Student& operator=(const Student& rhs);

	void show(void);
};

class HighschoolStudent  :public Student
{
public:
	//������
	HighschoolStudent(int Hakbun, const char* Name, string Hakgwa)
		: Student(Hakbun, Name), sHakgwa(Hakgwa) 
	{
		cout << "HightSchoolStudent �Ϲ� ������ ȣ��" << endl;
	}

	//�Ҹ���
	~HighschoolStudent()
	{
		cout << "HightSchoolStudent �Ҹ��� ȣ��" << endl;
	}
private:
	string sHakgwa;
};

int main(void)
{
	HighschoolStudent hss = HighschoolStudent(2208, "�ڽ�ä", "����Ʈ�����");
	hss.show();
	return 0;
}


Student::Student(void){}

Student::Student(int Hakbun, const char* Name)
// ��ü������ ���ÿ� ������� �ʱ�ȭ // �������(�Ű�����)
// const/������ ��������� ����� �� �ִ�.
	: nHakbun(Hakbun)
{
	cout << "Student �Ϲݻ����� ȣ��" << endl;
	int len = strlen(Name) + 1;		// �������� ����
	sName = new char[len];			// ��������
	strcpy(sName, Name);
}

Student::Student(const Student& rhs)
{
	this->sName = new char[strlen(rhs.sName) + 1];
	strcpy(this->sName, rhs.sName);

	this->nHakbun = rhs.nHakbun;

	cout << "Student ��������� ȣ��" << endl;
}

Student& Student::operator=(const Student& rhs)
{
	cout << "Student ���Կ����� ȣ��" << endl;
	//������ �����ϴ� ������ �����ϰ� �� ���� �Ҵ��غ�
	delete[]sName;

	int len = strlen(rhs.sName) + 1;
	sName = new char[len];
	strcpy(sName, rhs.sName);
	nHakbun = rhs.nHakbun;

	return *this;

}

Student::~Student()
{
	delete[]sName;
	cout << "Student �Ҹ��� ȣ��" << endl;
}

void Student::show(void)
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}