#include <iostream>
#include <string.h>

using namespace std;

class CBank {
private:
	string name;
	string account;
	int balance;
public:
	//������
	CBank() {}
	CBank(string name, string account, int balance)
		:name(name), account(account), balance(balance){}

	//�ԱݵǴ� �ݾ��� ����ϴ� �Լ�
	void deposit(int money) {
		cout << "���� �۾� : " << balance << endl;
		balance += money;
		cout << "�Ա� �ݾ� : " << money << endl << "���� �ܾ� : " << balance << endl;
	}
};

int main() {
	
	CBank a = CBank("ȫ�浿", "1111", 12000);
	a.deposit(20000);

	return 0;
}