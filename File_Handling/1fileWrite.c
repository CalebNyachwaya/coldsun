#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
	
	FILE *fp = NULL;
	char str[50] = "Test String and the rest";
	int len, i = 0;

	fp = fopen("test.txt", "w");
	if (fp == NULL)
	{
		printf("error");
		exit(1);
	}
	for(i=0; i != strlen(str); i++)
	fputc(str[i], fp);
	fputc('\n', fp);

	fclose(fp);


}
