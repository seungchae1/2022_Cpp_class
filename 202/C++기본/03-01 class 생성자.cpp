#include <iostream>
#include <string.h>

using namespace std;

class Student
{
	int nHaknun;
	char * sName;
public:
	//생성자 : 객체가 생성될 때 호출되는 함수
	Student(int Hakbun, const char* Name);
	//복사생성자
	Student(const Student& rhs);

	//소멸자 : 객체가 메모리에서 해제될 때 생성되는 함수
	~Student();

	void show();
};

int main() 
{
	//일반 생성자 호출
	Student stu1 = Student(1111, "JWP");
	
	//복사생성자 호출
	Student stu2 = stu1; //Student stu2 = Student(stu1);

	stu1.show();
	stu2.show();

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

Student::Student(const Student& rhs) 
	:nHaknun(rhs.nHaknun),sName(rhs.sName)
{
	cout << "복사생성자 호출" << endl;
}

Student:: ~Student()
{
	delete []sName;
	cout << "소멸자 호출" << endl;
}

void Student::show()
{
	cout << "학번은 " << nHaknun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl << endl;
}