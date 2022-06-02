#include <iostream>
#include <string.h>

using namespace std;

class CBank {
private:
	string name;
	string account;
	int balance;
public:
	//생성자
	CBank() {}
	CBank(string name, string account, int balance)
		:name(name), account(account), balance(balance){}

	//입금되는 금액을 출력하는 함수
	void deposit(int money) {
		cout << "기존 작액 : " << balance << endl;
		balance += money;
		cout << "입금 금액 : " << money << endl << "현재 잔액 : " << balance << endl;
	}
};

int main() {
	
	CBank a = CBank("홍길동", "1111", 12000);
	a.deposit(20000);

	return 0;
}