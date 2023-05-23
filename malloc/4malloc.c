#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *ptr;
	char str[] = "hello world";
	int i = 0;

	while(str[i] != '\0')
		i++;

	ptr = malloc((sizeof(char)* i) + 1);

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
		printf("%c", ptr[i]);
	}
	printf("\n");
	return(0);
}
