#include <stdio.h>

int main(void)
{	
	int num1 = 10, num2 = 20, num3 = 30;

	//ptr1▶num1, ptr2▶num2, ptr3▶num3
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	ptr1 = ptr2;	//ptr1▶num2
	ptr2 = ptr3;	//ptr2▶num3

	*ptr3 *= 2;		//num3 *= 2 -> num3는 90
	*ptr1 += *ptr3;	//num2 += 2 -> num2는 120
	*ptr2 *= 2;		//num3 *= 2 -> num3는 180

	printf("%d %d %d \n", num1, num2, num3);

	return 0;
}