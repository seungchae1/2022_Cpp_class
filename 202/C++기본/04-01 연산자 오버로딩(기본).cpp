#include <iostream> // cout, endl ��ü�� ������ ����

using namespace std;

class Point
{
private:
	int mX;
	int mY;
public:
	Point(int x, int y) : mX(x),mY(y){}
	void print()
	{
		cout << mX << "," << mY << endl;
	}
};

int main()
{
	Point p1(1, 2);
	p1.print();
	return 0;
}