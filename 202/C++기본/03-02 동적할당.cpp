#include <iostream>

using namespace std;

int main() {
	int* ptr1 = new int;	//int�� ���� �����Ҵ�
	*ptr1 = 20;
	cout << *ptr1 << endl;

	delete ptr1;
}