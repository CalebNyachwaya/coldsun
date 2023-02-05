#include <stdio.h>
#include <stdarg.h>

int sum(int, ...);
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	sum(6, 30, 40, 50, 60, 70, 80);
}

/**
 * sum - prints the sum of six numbers
 * @count: the number of integers to be added
 *
 * Return: Always 0
 */
int sum(int count, ...)
{
	va_list(add);

	va_start(add, count);
	int i, total = 0;

	printf("How many numbers do you want to add? ");
	scanf("%d", &count);
	for (i = 0; i < count; i++)
		total = total + va_arg(add, int);

	printf("%d\n", total);
	return (0);

}
