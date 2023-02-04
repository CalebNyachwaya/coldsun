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

	y = sum(20, 30, 'k', 50, "cool!", 70, 80.09);
}

/**
 * sum - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the sum of the two numbers
 */
int sum(int a, int b, ...)
{
	va_list(add);

	va_start(add, b);

	printf("%c\n", va_arg(add, int));
	printf("%d\n", va_arg(add, int));
	printf("%s\n", va_arg(add, char*));
	printf("%d\n", va_arg(add, int));
	printf("%.2lf\n", va_arg(add, double));
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
