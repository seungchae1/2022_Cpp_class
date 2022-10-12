#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, int> m;
	//������ ����
	m["apple"] = 2;
	m["banana"] = 4;
	m["grape"] = 5;

	//������ ��ü ���
	map<string, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << iter->first << "�� " << iter->second << "��" << endl;
	}
	cout << endl;

	//������ ������ �� 1�� ����
	m.erase("grape");
	cout << "grape ����" << endl <<  endl;

	//������ ��ü ���
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << iter->first << "�� " << iter->second << "��" << endl;
	}

}