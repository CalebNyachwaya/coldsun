#include "main.h"

int main()
{
	int n = 20;
	int s = 100;
	int *p = &n;
	int *q = &s;

	printf("Values before function: n = %d, s = %d\n", n,s);

	swap(p,q);
	printf("Values after function: n = %d, s = %d\n\n", n,s);

	return (0);
}
