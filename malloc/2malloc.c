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
	printf("memory was not allocated\n");
	exit(1);
	}

	printf("memory was allocated\n");
	for (i = 0; i < n; i++)
	{
		printf("enter the value of the interger: ");
		scanf("%d", (ptr + i));
	}
	for (i = 0; i < n; i++)
	{
	printf("the address is %p and the value is %d\n", (ptr + i), *(ptr + i));
	}
	return (0);
}
