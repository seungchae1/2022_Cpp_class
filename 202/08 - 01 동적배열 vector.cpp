#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
	//크기가 10개로 고정된 정적배열
	string s1[10];
	string* s2 = new string[10];

	//크기 확장이 가능한 동적배열
	vector<string> s3;
	s3.reserve(10); //크기를 10개로 확장

	for (int i = 0; i < 10; i++)
	{
		s1[i] = "ab";
		s2[i] = "ab";
		s3.push_back("ab");
	}

	//idx범위 초과(공간 부족)
	// s1[10] = "ab";
	// s2[10] = "ab";

	//기존공간에 크기를 확장하여 삽입
	s3.push_back("ab");

	return 0;
}