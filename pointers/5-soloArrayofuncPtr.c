#include <stdio.h>
/**
 * add - adds two values
 * @a: first value to be entered
 * @b: second value to be entered
 */
void add(int a, int b)
{
	printf("The sum is %d\n", a + b);
}
/**
 * sub - subtracts two values
 * @a: first value to be entered
 * @b: second value to be entered
 */
void sub(int a, int b)
{
	    printf("The subtraction is %d\n", a - b);
}
/**
 * mul - multiplies two values
 * @a: first value to be entered
 * @b: second value to be entered
 */
void mul(int a, int b)
{
	    printf("The multiplication is %d\n", a * b);
}
/**
 * div - divides two values
 * @a: first value to be entered
 * @b: second value to be entered
 */
void div(int a, int b)
{
	    printf("The division is %d\n", a / b);
}
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int a, b, ch;/*ch represent the choice*/
	/*innitializing array of pointer*/
	void (*fptr[])(int, int) = {add, sub, mul, div};

	/*prinf f does not include the format specifier when using scanf*/
	printf("Enter the choice:");
	scanf("%d", &ch);/*scanf uses the address of the variable*/

	printf("Enter the two values:");
	scanf("%d %d", &a, &b);/*no need for comma for format specifier*/

	(*fptr[ch])(a, b);/*dereferencing the array of fxn pointers*/

	return (0);
}

