// cout, endl ��ü�� ������ ����
#include <iostream>
//std:: �Ƚᵵ ��
using namespace std;

// pre�����Ϸ��� ó��
// �ڷ����� ������� �ʴ´�
#define jegob(A)	((A) * (A))

int main(void)
{
	cout << jegob(3+1) << endl;			//16
	cout << ((3+1) * (3+1)) << endl;	//16

	return 0;
}