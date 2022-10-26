#include <iostream>
#include <string.h>
#include <map>

using namespace std;

//김신 : 공유
//지은탁 : 김고은
//저승사자 : 이동욱
//써니 : 유인나

//arr["김신"] = "공유"
//arr["저승사자"] = "이동욱"

int main()
{
	//map<key 자료형, value자료형>
	map<string, string> m;
	m["김신"] = "공유";
	m["지은탁"] = "김고은";
	m["저승사자"] = "이동욱";
	m["써니"] = "유인나";
	
	//map은 데이터를 삽입할 때마다 key를 기준으로 자동정렬된다.

	map<string, string>::iterator iter;

	for (auto iter = m.begin(); iter != m.end(); iter++)
	{
		cout << iter->first << "역 " << iter->second << "님" << endl;
	}

	cout << "주인공은 " << m["김신"] << endl;

	return 0;
}