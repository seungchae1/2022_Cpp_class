#include <iostream> // cout, endl ��ü�� ������ ����

using namespace std;

class Point
{
private:
	int mX;
	int mY;
public:
	//������
	Point() {}
	Point(int x, int y) : mX(x),mY(y){}

	//������ �����ε�
	Point operator+(const Point& rhs)
	{
		Point p;
		p.mX = mX + rhs.mX;
		p.mY = mY + rhs.mY;
		return p;
	}
	void print()
	{
		cout << "(" << mX << ", " << mY << ")" << endl;
	}
};

int main()
{
	Point p1(1, 2);
	Point p2(3, 4);

	Point sum = p1 + p2;
	p1.print();

	return 0;
}