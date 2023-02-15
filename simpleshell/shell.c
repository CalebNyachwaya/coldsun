#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *str = NULL;
	size_t n; 
	
	while(1)
	{
	printf("$ ");
	getline(&str, &n, stdin);
	}
	free(str);
}
