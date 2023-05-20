#include <stdio.h>

int main(void)
{
	int i;
	int Alist[] = {100, 40, 400, 50};

	for (i = 0; i < 4; i++)
	{
		printf("Address of %d is %p\n", Alist[i], &Alist[i]);
		printf("Address of %d is %p\n\n", Alist[i], Alist + i);
		
	}
	printf("The base address is %p\n", Alist);
	return (0);
}
