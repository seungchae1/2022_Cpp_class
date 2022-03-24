#include <stdio.h>

int main(void)
{
	int a, b, c = 0;
	a = ++c; //c가 먼저 1증가하고 a에 대입. c:1, a:1

	b = c++; //b에 c값을 먼저 대입하고 c가 1증가. b:1, c:2

	printf("%d %d %d \n", a, b, ++c); //1, 1, 3
	return 0;
}