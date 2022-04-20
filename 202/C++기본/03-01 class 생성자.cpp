#include <iostream>
#include <string>

using namespace std;

class Student
{
	int nHaknun;
	string sName;

public:
	//생성자 : 객체가 생성될 때, 호출되는 함수
	Student() 
	{
		nHaknun = 1234;
		sName = "이사랑";
		cout << "학번이 등록되었습니다." << endl;
	}
};

int main() 
{
	Student stu1;
	Student stu2 = Student();

	return 0;
}