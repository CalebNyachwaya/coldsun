#include <stdio.h>
#include <stdarg.h>
#define Cal 40		/*testing define functionality*/
int sum(int, int);
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int y;

	y = sum(Cal,30,15,20);
	printf("%d\n", y);
}
/**
 * sum - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the sum of the two numbers
 */
int sum(int a, int b)
{
	return (a + b);
}
