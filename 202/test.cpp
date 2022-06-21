#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
	int len;
	char* str;
public:
	String();
	String(const char* _str);
	String(const String& _str);
	~String();
	String& operator= (const String& _str);
	String& operator+= (const String& _str);
	bool operator== (const String& _str);
	String operator+(const String& _str);

	friend ostream& operator<< (ostream& os, const String& _str);
	friend istream& operator>> (istream& is, String& _str);
};

String::String()
{
	len = 0;
	str = NULL;

}

String::String(const char* _str)
{
	len = strlen(_str) + 1;
	str = new char[len];
	strcpy(str, _str);

}

String::String(const String& _str)
{
	len = _str.len;
	str = new char[len];
	strcpy(str, _str.str);
}

String::~String()
{
	if (str != NULL)
		delete[]str;

}

String& String::operator= (const String& _str)
{
	if (str != NULL)
		delete[]str;
	len = _str.len;
	str = new char[len];
	strcpy(str, _str.str);
	return *this;
}

String& String::operator+= (const String& _str)
{
	char* temp = new char[len + _str.len - 1];
	strcpy(temp, str);
	strcat(temp, _str.str);

	if (str != NULL)
		delete[]str;
	str = temp;
	return *this;
}

bool String::operator== (const String& _str)
{
	return strcmp(str, _str.str) ? false : true;
}

String String::operator+ (const String& _str)
{
	char* temp = new char[len + _str.len - 1];
	strcpy(temp, str);
	strcat(temp, _str.str);

	String result(temp);
	delete[]temp;

	return result;
}


ostream& operator<< (ostream& os, const String& _str)
{
	os << _str.str;
	return os;
}

istream& operator>> (istream& is, String& _str)
{
	char str[100];
	is >> str;
	_str = String(str);
	return is;
}


int main()
{
	String str1 = "123";
	cout << str1 << " " << endl;
	String str2 = str1;
	cout << str2 << " " << endl;

	return 0;
}