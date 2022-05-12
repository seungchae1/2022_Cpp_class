#include <iostream>
#include <string.h>

using namespace std;

class Student
{
	int nHaknun;
	char * sName;
public:
	Student(int Hakbun, const char* Name);
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
	cout << "일반생성자 생성" << endl;
	int len = strlen(Name) + 1;	//동적할당할 공간의 크기를 구하고
	sName = new char[len];		//그 크기만큼 배열로 동적할당
	strcpy(sName, Name);		// 매개변수에 있는 문자열 복사
}

void Student::show()
{
	cout << "학번은 " << nHaknun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl << endl;
}