#include <stdio.h>

int main() 
{
	int a = 2, b;
	int *p = &a;
	int *q = &b;

	printf("%p\n", p);
	printf("%p\n", &a);
	printf("---------------");
	printf("\nThe value of a before dereferencing is %d\n", a);
	*p = 5;
	printf("The value of a after dereferencing is %d\n", a);

	return 0;
}
