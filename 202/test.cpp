#include <iostream>

using namespace std;

class m_string 
{
private:
	const char * _Myptr;	//실제 문자열의 시작주소를 담고 있는 포인터
	int _Mysize;	//문자열의 글자수
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
	int size()			//문자열의 글자수를 반환
	{
		return _Mysize;
	}
	int length()	//문자열의 글자수를 반환 
	{
		return _Mysize;
	}
	const char ** c_str() 		//문자열의 시작주소를 반환
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