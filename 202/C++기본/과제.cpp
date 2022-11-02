#include <iostream>

using namespace std;

enum Department {
	software,
	websolution,
	design,
	count
};

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
}