// cout, endl ��ü�� ������ ����
#include <iostream>
//std:: �Ƚᵵ ��
using namespace std;

//�Լ��̸��� ����, �Ű������� �ٸ�(�Լ� �����ε�)
int jegob(int A, int B = 1)
{
	return A * A + B;
}

double jegob(double A, double B = 1.1)
{
	return A * A + B;
}

int main(void)
{
	cout << jegob(4) << endl;			//17
	cout << jegob(3.3) << endl;			//11.99
	return 0;
}