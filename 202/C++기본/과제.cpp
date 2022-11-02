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
	if (n % 2 == 0)return "¦���Դϴ�";
	else return "Ȧ���Դϴ�";
}
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

	//3 auto�� ���������� ���Ǵ� �����ڵ�
	cout << b(3);

	//4 �ڵ� ������ ���� �� �ذ�
	/*
		int arr[] = { 10, 20, 30, 40};
		for (auto x : arr)
			x = x + 1;
	*/
	int arr2[] = { 10, 20, 30, 40 };
	for (auto x : arr2)
		x = x + 1;
	for (int i = 0; i < 4; i++) cout << arr2[i] << "\t";
	// x�� arr ��ü�� �Ҵ� �ޱ� ������ x�� �����Ͽ��� arr�� ���� ������ �ʴ´�
	// x�� �����ͷ� ����
	for (auto& x : arr2)
		x = x + 1;
	for (int i = 0; i < 4; i++) cout << endl<< arr2[i] << "\t";

	//Ŭ���� Champ, a �Լ��� ���� ������ ���ϱ�
	//5. �޸𸮿� mCount ������ �� �� �����ұ� ?
		//1��

	//6. mCount�� �������� ?
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
	Champ* myCat = new Champ(2, "Ƽ��");
	Champ* yourCat = new Champ(5, "����");
	Champ* hisCat = new Champ(3, "����");
}
