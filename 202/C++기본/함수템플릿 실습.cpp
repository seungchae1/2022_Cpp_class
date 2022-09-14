#include <iostream>

using namespace std;

template <class T> //<typename T>
T sum(T x, T y)
{
	T z = x + y;
	return z;
}

int main()
{
	cout << sum(2.35, 33.4) << endl;
	cout << sum(5, 21) << endl;
	return 0;
}