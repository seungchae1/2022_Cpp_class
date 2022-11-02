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
		//	일반 멤버변수는 static 멤버함수에 적용할 수 없다.
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
	//객체없이도 static 멤버함수 호출 가능
	cout << Champ::getCount() << endl;

	Champ* teemo = new Champ(15, "티모");
	Champ* masteryi = new Champ(15, "akdl");
	Champ* vign = new Champ(15, "베인");

	//mCount는 객체끼리 공유되어 총 3번 증가
	cout << Champ::getCount() << endl;
	cout << teemo->getCount() << endl;

	return 0;
}