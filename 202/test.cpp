#include <iostream>

using namespace std;

class m_string 
{
private:
	const char * _Myptr;	//���� ���ڿ��� �����ּҸ� ��� �ִ� ������
	int _Mysize;	//���ڿ��� ���ڼ�
public:
	m_string(const char * str)
		:_Myptr(str)
	{
		_Mysize = 0;
		for (int i = 0; str[i] != '\0'; i++)
		{
			_Mysize++;
		};
	}
	int size()			//���ڿ��� ���ڼ��� ��ȯ
	{
		return _Mysize;
	}
	int length()	//���ڿ��� ���ڼ��� ��ȯ 
	{
		return _Mysize;
	}
	const char ** c_str() 		//���ڿ��� �����ּҸ� ��ȯ
	{
		const char** ptr = &(_Myptr);
		return ptr;
	}
};

int main()
{
	m_string str1 = "123";
	cout << str1 << " " << str1.size() << endl;

	return 0;
}