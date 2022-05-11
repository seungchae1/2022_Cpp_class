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
	Student stu1 = { 1201,"곽경희" };
	stu1.show();
	
	Student stu2 = Student(1202,"권하은");
	stu2.show();

	Student stu3;
	stu3.show();

	return 0;
}

Student::Student()
{
	this->nHaknun = 1234;
	this->sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}

Student::Student(int Hakbun, string Name)
	:nHaknun(Hakbun), sName(Name)
	// 객체생서과 동시에 멤버변수 초기화	// 멤버변수(매개변수)
	// const/참조형 멤버변수를 사용할 수 있다.
{
	cout << "학번이 등록되었습니다." << endl;
}

void Student::show()
{
	cout << "학번은 " << nHaknun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl << endl;
}