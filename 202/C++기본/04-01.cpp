#include <iostream> // cout, endl 객체를 가지고 있음
#include "04-01.h"

using namespace std;

Point Point::operator+(const Point& rhs)
{
	Point p;
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;
	return p;
}
void Point:: print()
{
	cout << "(" << mX << ", " << mY << ")" << endl;
}

int main()
{
	Point p1(1, 2);
	Point p2(3, 4);

	Point sum = p1 + p2;

	p1.print();
	p2.print();
	sum.print();

	return 0;
}