#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, int> m;
	//데이터 삽입
	m["apple"] = 2;
	m["banana"] = 4;
	m["grape"] = 5;

	//데이터 전체 출력
	map<string, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << iter->first << "는 " << iter->second << "개" << endl;
	}
	cout << endl;

	//삽입한 데이터 중 1개 제거
	m.erase("grape");
	cout << "grape 제거" << endl <<  endl;

	//데이터 전체 출력
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << iter->first << "는 " << iter->second << "개" << endl;
	}

}