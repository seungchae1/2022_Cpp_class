// cout, endl 객체를 가지고 있음
#include <iostream>
//std:: 안써도 됨
using namespace std;

// pre컴파일러가 처리
// 자료형에 영향받지 않는다
#define jegob(A)	((A) * (A))

int main(void)
{
	cout << jegob(3+1) << endl;			//16
	cout << ((3+1) * (3+1)) << endl;	//16

	return 0;
}