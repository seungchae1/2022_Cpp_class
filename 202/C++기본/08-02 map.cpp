#include <iostream>
#include <string.h>
#include <map>

using namespace std;

//��� : ����
//����Ź : �����
//���»��� : �̵���
//��� : ���γ�

//arr["���"] = "����"
//arr["���»���"] = "�̵���"

int main()
{
	//map<key �ڷ���, value�ڷ���>
	map<string, string> m;
	m.insert(pair<string, string>("���", "����"));
	m.insert(pair<string, string>("����Ź", "�����"));
	m.insert(pair<string, string>("���»���", "�̵���"));
	m.insert(pair<string, string>("���", "���γ�"));

	//map�� �����͸� ������ ������ key�� �������� �ڵ����ĵȴ�.

	map<string, string>::iterator iter;

	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << iter->first << "�� " << iter->second << "��"<< endl;
	}

	map<string, string>::iterator actor = m.find("���");
	cout << "���ΰ��� " << actor->second << endl;

	return 0;
}