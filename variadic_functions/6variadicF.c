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
 * sum - adds and prints a list of numbers
 * @count: the number of integers to be added
 *
 * Return: Always 0
 */
int sum(int count, ...)
{
	va_list(add);

	va_start(add, count);
	int i, t, total = 0;

	printf("How many numbers do you want to add? ");
	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
		t = va_arg(add, int);
		printf("%-4d", t);	/*4 shows 4 spaces*/
		total = total + t;
	}

	printf("\n%d\n", total);

	va_end(add);

	return (0);

}
