#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - introduction to malloc and free
 *   *
 *    * Return: 0.
 *     */
int main(void)
{
	    char *str;

	        str = malloc(sizeof(char) * 8);
		    str[0] = 'O';
		        str[1] = 'K';
			str[2] = 'A';
			str[3] = 'Y';
			    str[5] = '\0';
			        printf("%s\n", str);
				    return (0);
}
