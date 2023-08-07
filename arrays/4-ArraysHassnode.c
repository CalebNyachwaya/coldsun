#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main()
{
	int a[ ] = {2, 4, 20, 0, 10};
	
	printf("First element: %d", a[0]); /* First element: 2 */

	printf("Base Address of the Array:\n");
	/* both printf statements below will yield the same result */
	printf("%p\n", &a[0]);
	printf("%p\n", a);
	
	
	printf("Address of Elements:\n");
	printf("%p\n", &a[1]);
	printf("%p\n\n", a+1);

	printf("%p\n", &a[2]);
	printf("%p\n\n", a+2);

	printf("%p\n", &a[3]);
	printf("%p\n\n", a+3);


	printf("Value of the first Element:\n");
	printf("%d\n", *a);
	printf("%d\n", a[0]);


	printf("Element values:\n");
	printf("%d\n", a[1]);
	printf("%d\n\n", *(a + 1));

	printf("%d\n", a[2]);
	printf("%d\n\n", *(a + 2));

	printf("%d\n", a[4]);
	printf("%d\n", *(a + 4));
}
