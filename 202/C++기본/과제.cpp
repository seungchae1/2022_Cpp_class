#include <iostream>
#include <string>
#include <map>

using namespace std;

enum Department {
	software,
	websolution,
	design,
	count
};

void a(void);

int main()
{
	//1 enum 예제
	int student[Department::count];
	student[Department::software] = 28;
	student[Department::websolution] = 26;
	student[Department::design] = 33;

	cout << "**학과별 학생 수**" << endl;
	cout << "소프트웨어 : " << student[Department::software] << endl;
	cout << "웹솔루션 : " << student[Department::websolution] << endl;
	cout << "디자인 : " << student[Department::design] << endl;

	//2 범위기반 for문
	int arr[] = { 10, 20, 30, 40 };
	for (int a : arr)
		cout << a << endl;

	//3 auto가 실질적으로 사용되는 예시코드
	map<string, int> m;
	m["software"] = 28;
	m["websolution"] = 26;
	m["design"] = 33;

	for (auto& n : m) {
		cout << n.first << "과의 학생수는 " << n.second << "명" <<endl;
	}


	//4 코드 문제점 설명 및 해결
	/*
		int arr[] = { 10, 20, 30, 40};
		for (auto x : arr)
			x = x + 1;
	*/
	int arr2[] = { 10, 20, 30, 40 };
	for (auto x : arr2)
		x = x + 1;
	for (int i = 0; i < 4; i++) cout << arr2[i] << "\t";
	// x는 arr 자체를 할당 받기 때문에 x를 변경하여도 arr의 값은 변하지 않는다
	// x를 포인터로 변경
	for (auto& x : arr2)
		x = x + 1;
	for (int i = 0; i < 4; i++) cout << endl<< arr2[i] << "\t";

	//클래스 Champ, a 함수를 보고 질문에 답하기
	//5. 메모리에 mCount 변수는 몇 개 존재할까 ?
		//1개

	//6. mCount의 최종값은 ?
		//3

	//7. static 멤버함수의 특징을 설명하시오
	// 클래스에 하나만 존재하여 객체마다 따로 사용하지 않고 공유한다. 클래스 이름으로 호출이 가능하다.
	//++ 추가
	//객체를 생성하지 않고 사용할 수 있다
	//static 멤버 변수만 접근할 수 있다

}

class Champ
{
public:
	Champ(int age, const string& name);
private:
	static int mCount;
};

int Champ::mCount = 0;
Champ::Champ(int age, const string& name)
{
	++mCount;
}


void a(void)
{
	Champ* myCat = new Champ(2, "티모");
	Champ* yourCat = new Champ(5, "마이");
	Champ* hisCat = new Champ(3, "베인");
}