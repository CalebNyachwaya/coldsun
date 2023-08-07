#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)

{
	int a[] = {2, 4, 20, 0, 10};

	printf("First element: %d\n", a[0]); /* First element: 2 */

	printf("Base Address of the Array:\n");
	printf("Address: %p\n", &a[0]);
	printf("Address: %p\n\n", a);

	printf("Address of Elements:\n");
	printf("Address of a[1]: %p\n", &a[1]);
	printf("Address of a[1]: %p\n\n", a + 1);

	printf("Address of a[2]: %p\n", &a[2]);
	printf("Address of a[2]: %p\n\n", a + 2);

	printf("Value of the first Element:\n");
	printf("Value: %d\n", *a);
	printf("Value: %d\n\n", a[0]);

	printf("Element values:\n");
	printf("Value: %d\n", a[1]);
	printf("Value: %d\n\n", *(a + 1));

	printf("Value: %d\n", a[2]);
	printf("Value: %d\n\n", *(a + 2));

	printf("Value: %d\n", a[4]);
	printf("Value: %d\n", *(a + 4));
}
