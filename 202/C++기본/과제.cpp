#include <iostream>
#include <string>

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

	//  auto가 실질적으로 사용되는 예시코드 작성

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



}