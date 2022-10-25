#include <iostream>

using namespace std;

int main()
{
	double arr[4] = { 1.1, 2.2, 3.3, 4.4 };
	
	//기존 방식(index 번호)
	for (int i = 0; i < 4; i++) 
	{
		cout << arr[i] <<"\t";
	}

	return 0;
}