#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
	//ũ�� Ȯ���� ������ �����迭
	vector<string> s3;
	s3.reserve(10); //ũ�⸦ 10���� Ȯ��

	for (int i = 0; i < 10; i++)
	{
		s3.push_back("ab");
	}

	//���������� ũ�⸦ Ȯ���Ͽ� ����
	s3.push_back("ab");

	vector<string>::iterator iter;

	//vector�� ���ҵ� ���(iterator)
	for (iter = s3.begin(); iter != s3.end(); iter++)
	{
		cout << *iter << " " ;
	}
	cout << endl;

	//vector�� ������ ����
	s3[1] = "cd";
	s3.at(2) = "ef";

	for (iter = s3.begin(); iter != s3.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}