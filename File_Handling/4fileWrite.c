#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
	
	FILE *fp = NULL;
	char str[50] = "This is a test string.";
	char c;

	fp = fopen("test.txt", "r");
	if (fp == NULL)
	{
		printf("error");
		exit(1);
	}
	fgetcdistributed among 100 results in %c", str, d, c);
	/*
	 * for(i=0; i != strlen(str); i++)
	 * fputc(str[i], fp);
	 * fputc('\n', fp);
	 */

	fclose(fp);

}
