// cout, endl ��ü�� ������ ����
#include <iostream>
//std:: �Ƚᵵ ��
using namespace std;

// pre�����Ϸ��� ó�� (�ڵ带 ġȯ����)
// �ڷ����� ������� �ʴ´�
// ������� �����ϴ�
//#define jegob(A)	((A) * (A))

//���� �Լ��� ȣ����� �ʴ´� (�ڵ带 ġȯ����)
// �����Ϸ��� ó��
// �ڷ����� ����޴´�
// ������� �����ϴ�
inline int jegob(int A)
{
	return A * A;
}

int main(void)
{
	cout << jegob(3+1) << endl;			//16
	cout << ((3+1) * (3+1)) << endl;	//16

	return 0;
}