#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
	//크기 확장이 가능한 동적배열
	vector<string> s3;
	s3.reserve(10); //크기를 10개로 확장

	for (int i = 0; i < 10; i++)
	{
		s3.push_back("ab");
	}

	//기존공간에 크기를 확장하여 삽입
	s3.push_back("ab");

	vector<string>::iterator iter;

	//vector의 원소들 출력(iterator)
	for (iter = s3.begin(); iter != s3.end(); iter++)
	{
		cout << *iter << " " ;
	}
	cout << endl;

	//vector의 데이터 수정
	s3[1] = "cd";
	s3.at(2) = "ef";

	for (iter = s3.begin(); iter != s3.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}