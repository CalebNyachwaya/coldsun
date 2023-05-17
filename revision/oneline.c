#include <stdio.h>

int sum(int i, int j)
{
	return(i + j);
}


int main()
{	
	int k = 20;
	int p = 300, result;

	result = sum(k, p);
	printf("%d\n", result);
}
