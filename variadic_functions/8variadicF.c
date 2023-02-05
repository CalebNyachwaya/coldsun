#include <stdio.h>
#include <stdarg.h>

int sum(int, char, ...);
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
 * @separator: separates the list of numbers
 *             eliminates comma on the last digit on the list
 *
 * Return: Always 0
 */
int sum(int count, char separator, ...)
{
	va_list(add);

	va_start(add, separator);
	int i, t, total = 0;

	separator = ',';

	printf("How many numbers do you want to add? ");
	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
	/*
	* introducing condition to eliminate comma
	* on the last digit
	*/
	if (i == count - 1)
		separator = '\0';
		t = va_arg(add, int);
		printf("%d%c", t, separator);/*Prints comma after every value*/
		total = total + t;
	}

	printf("\n%d\n", total);

	va_end(add);

	return (0);

}
