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
	//1 enum ����
	int student[Department::count];
	student[Department::software] = 28;
	student[Department::websolution] = 26;
	student[Department::design] = 33;

	cout << "**�а��� �л� ��**" << endl;
	cout << "����Ʈ���� : " << student[Department::software] << endl;
	cout << "���ַ�� : " << student[Department::websolution] << endl;
	cout << "������ : " << student[Department::design] << endl;

	//2 ������� for��
	int arr[] = { 10, 20, 30, 40 };
	for (int a : arr)
		cout << a << endl;
}