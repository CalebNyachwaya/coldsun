#include "main.h"
void reset_to_20(int *n);

int main()
{
	int a = 67;

	reset_to_20(&a);
	putchar(a /10 + '0');
	putchar(a %10 + '0');
	putchar('\n');
	return (0);
}
