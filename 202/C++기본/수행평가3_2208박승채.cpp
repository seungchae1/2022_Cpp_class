#include <iostream>

using namespace std;

class m_string {
private:
	char* _Myptr;
	int _Mysize;
public:
	m_string();
	m_string(const char* str);
	m_string(const m_string& str);
	~m_string();

	int size();
	int length();
	char* c_str();

	//연산자 오버로딩
	m_string operator=(const m_string& str);
	m_string operator=(const char* str);
	m_string operator+(const m_string& str);
	m_string operator+(const char* str);
	int operator==(const m_string& str);
	int operator==(const char* str);

	friend ostream& operator<<(ostream& os, const m_string& ms)
	{
		os << ms._Myptr;
		return os;
	}
};

m_string::m_string(const char* str) //문자열에 대한 복사생성자
{
	_Mysize = strlen(str);
	_Myptr = new char[_Mysize + 1];
	strcpy(_Myptr, str);
}

m_string::m_string(const m_string& str) //m_string에 대한 복사생성자
{
	_Mysize = str._Mysize;
	_Myptr = new char[_Mysize + 1];
	strcpy(_Myptr, str._Myptr);
}

m_string::~m_string() //소멸자
{
	delete _Myptr;
}

int m_string::size()
{
	return _Mysize;
}
int m_string::length()
{
	return _Mysize;
}

char* m_string::c_str()
{
	return _Myptr;
}

m_string m_string:: operator=(const char* str) //문자열에 대한 대입연산자
{
	delete[] _Myptr;

	_Mysize = strlen(str);
	_Myptr = new char[_Mysize + 1];
	strcpy(_Myptr, str);
	return *this;
}
m_string m_string:: operator=(const m_string& str) //m_string에 대한 대입연산자
{
	delete[] _Myptr;

	_Mysize = str._Mysize;
	_Myptr = new char[_Mysize + 1];
	strcpy(_Myptr, str._Myptr);
	return *this;
}

m_string m_string:: operator+(const m_string& str) //m_string에 대한 덧셈연산자
{
	int len= _Mysize + str._Mysize;
	m_string a = new char[len + 1];
	strcpy(a._Myptr, _Myptr);
	strcat(a._Myptr, str._Myptr);
	return a;
}
m_string m_string:: operator+(const char* str) //문자열에 대한 덧셈연산자
{
	int len = _Mysize + strlen(str);
	m_string a = new char[len + 1];
	strcpy(a._Myptr, _Myptr);
	strcat(a._Myptr, str);
	return a;
}

int m_string:: operator==(const m_string& str) //m_string에 대한 비교연산자
{
	if (strcmp(_Myptr, str._Myptr)==0) return 0;
	else return -1;
}
int m_string:: operator==(const char* str) //문자열에 대한 비교연산자
{
	if (strcmp(_Myptr, str) == 0) return 0;
	else return -1;
}

int main(void)
{
	m_string str1 = "123";
	cout << str1 << " " << str1.size() << endl;

	m_string str2 = str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = "m_string";
	cout << str2 << " " << str2.size() << endl;

	
	str2 = str2 + str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + "ab";
	cout << str2 << " " << str2.size() << endl;

	cout << (str1 == "123") << endl;
	cout << (str2 == str1) << endl;


	return 0;
}