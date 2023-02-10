#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
	
	FILE *fp = NULL;
	char str[50] = "This is a test string.";
	int i = 0;
	int d = 200;
	char c = '2';

	fp = fopen("test.txt", "w");
	if (fp == NULL)
	{
		printf("error");
		exit(1);
	}
	fprintf(fp, "%s %d distributed among 100 results in %c", str, d, c);
	/*
	 * for(i=0; i != strlen(str); i++)
	 * fputc(str[i], fp);
	 * fputc('\n', fp);
	 */

	fclose(fp);

}
