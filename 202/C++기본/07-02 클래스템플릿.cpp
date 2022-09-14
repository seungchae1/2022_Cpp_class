#include <iostream>

using namespace std;

template <typename T>
class MyData {
public:
	void setData(T pdata)
	{
		mydata = pdata;
	}
	T getData()
	{
		return mydata;
	}
private:
	T mydata;
};

int main()
{
	MyData<int> mydata1;
	MyData<double> mydata2;

	mydata1.setData(5);
	cout << mydata1.getData() << endl;

	mydata1.setData(8.66);
	cout << mydata2.getData() << endl;
	
	return 0;
}