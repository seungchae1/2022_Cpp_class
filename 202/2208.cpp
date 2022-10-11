#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int input, tot = 0;
	double avg;

	for (int i = 0; i < 5; i++)
	{
		cout << "정수 입력 : ";
		cin >>input;
		v.push_back(input);
	}

	vector<int>::iterator iter;

	cout << "데이터 : ";
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << "\t";
		tot += *iter;
	}
	avg = tot / 5;

	cout << endl << "합계 : " << tot << "\t평균 : " << avg << endl;
	return 0;
}