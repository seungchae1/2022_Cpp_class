#include <iostream>
#include <string>

using namespace std;

class Champ {
public:
	Champ(int age, const string& name)
		:mAge(age), mName(name) 
	{
		mCount++;
	}
	static int getCount()
	{
		//	�Ϲ� ��������� static ����Լ��� ������ �� ����.
		//	mAge = 10;
		return mCount;
	}
private:
	int mAge;
	string mName;
	static int mCount;
};

int Champ::mCount = 0;

int main()
{
	//��ü���̵� static ����Լ� ȣ�� ����
	cout << Champ::getCount() << endl;

	Champ* teemo = new Champ(15, "Ƽ��");
	Champ* masteryi = new Champ(15, "akdl");
	Champ* vign = new Champ(15, "����");

	//mCount�� ��ü���� �����Ǿ� �� 3�� ����
	cout << Champ::getCount() << endl;
	cout << teemo->getCount() << endl;

	return 0;
}