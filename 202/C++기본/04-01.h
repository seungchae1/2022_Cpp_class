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
	Point operator+(const Point& rhs);

	void print();
};