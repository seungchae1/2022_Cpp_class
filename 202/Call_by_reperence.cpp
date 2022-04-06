#include <iostream>
using namespace std;

int square_sum(int& num) {
	num = num * num;
	return num + num;
}

int main() {
	int a = 3;
	cout << square_sum(a) << endl;
}