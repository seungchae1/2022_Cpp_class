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
	m["���"] = "����";
	m["����Ź"] = "�����";
	m["���»���"] = "�̵���";
	m["���"] = "���γ�";
	
	//map�� �����͸� ������ ������ key�� �������� �ڵ����ĵȴ�.

	//map<string, string>::iterator iter;
	//auto iter; => error (auto �Ҵ��ϴ� ������ �ڷ����� �� �� ����)

	for (auto& x : m) //iter�տ� auto �߰�	//������� for������ ����
	{
		cout << x.first << "�� " << x.second << "��" << endl;
	}

	cout << "���ΰ��� " << m["���"] << endl;

	return 0;
}