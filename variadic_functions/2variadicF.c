#include <stdio.h>
#include <stdarg.h>

int sum(int, int, ...);
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int y;

	y = sum(20, 30, 40, 50, 60, 70, 80);
}

/**
 * sum - prints two numbers
 * @a: first mandatory argument
 * @b: second mandatory argument
 *
 * Return: Always 0
 */
int sum(int a, int b, ...)
{
	va_list(add);

	va_start(add, b);

	printf("%d\n", va_arg(add, int));
	va_arg(add, int);
	va_arg(add, int);
	va_arg(add, int);
	printf("%d\n", va_arg(add, int));
	return (0);

}

/*
 * va_list --> creates the list
 * va_start --> takes two arguments (list name, last mandatory argument)
 *
 *
 * va_list v_sum;
 * va_start(listname, last mandatory argument);/*anything after b)
 * va_arlistname, datatype)
 *
 * Note anytime you call the va_arg,
 * it's goint to access the first element of the list
 * Next time you call, it accesses the second element
 *
 * Promotions
 *	int --> int
 *	char --> int
 *	float --> double
 *	string --> char
 */
