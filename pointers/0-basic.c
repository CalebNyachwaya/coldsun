#include <stdio.h>

int main()
{
	int a = 100;
	int *ptrA;

	ptrA = &a;

	/* print value of the variable */
	printf("The value of a is %d\n", a);
	printf("The value of a is %d\n", *ptrA);

	/* print the address of the variable */
	printf("The address of a is %p\n", &a);
	printf("The address of a is %p\n", ptrA);

	*ptrA = 200;
	
	/* print after dereferencing */ 
	printf("The value of a after dereferencing is %d\n", a);


	return (0);
}
