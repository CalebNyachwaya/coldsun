#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, n;

	printf("Enter the number of intergers you want to print: ");
	scanf("%d", &n);

	int *ptr = (int *)malloc(sizeof(int) * n);

	if (ptr == NULL)
	{
	printf("Memory was not allocated\n");
	exit(1);
	}

	printf("Memory was allocated\n");
	for (i = 0; i < n; i++)
	{
		printf("enter the value of the interger: ");
		scanf("%d", (ptr + i));
	}
	for (i = 0; i < n; i++)
	{
	printf("The address is %p and the value is %d\n", (ptr + i), *(ptr + i));
	}

	free(ptr);	/*frees up space*/

	/*note the it's still points to the address even though it doesn't exist*/
	printf("\nAddress after deallocating the memory is %p\n", ptr);

	return (0);
}
