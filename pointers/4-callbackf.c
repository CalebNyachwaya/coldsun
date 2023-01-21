#include <stdio.h>

/**
 * sum - function that adds two numbers
 * @a: first argument
 * @b: second argument
 */
void sum(int a, int b)
{
	printf("sum is %d\n", a + b);
}

/**
 * sub - function that subtracts two numbers
 * @a: first argument
 * @b: second argument
 */
void sub(int a, int b)
{
	printf("sub is %d\n", a - b);
}

/**
 * display - executes the called functions
 * @fptr: pointer to function
 */
void display(void (*fptr)(int, int))
{
	(*fptr)(30, 10);/*derefrencing, takes us back to the code*/
}

/**
 * main - Entry point
 */
void main(void)
{
	display(sum);/*calls the function using the address*/
	display(sub);
}
