#include <iostream>
#include <string>

using namespace std;

enum Department {
	software,
	websolution,
	design,
	count
};

void a(void);

auto b(int n){
	if (n % 2 == 0)return "짝수입니다";
	else return "홀수입니다";
}
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
	cout << b(3);

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
