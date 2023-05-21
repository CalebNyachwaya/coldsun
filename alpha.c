#include <stdio.h>
#include <string.h>

int main(void)
{
	char opt[8];
	char cases[10];
	char start, i, end;

	printf("Do you want to see a list of the Alphabets?\n(Enter Yes or No)\n");
	scanf("%s", opt);

	if (strcmp(opt,"yes") == 0 || strcmp(opt, "Yes") == 0 || strcmp(opt, "YES") == 0)
	{
		printf("Do you want to print to upper(u) or lower(l)?\n");
		scanf(" %s", cases);

		if (strcmp(cases, "u") == 0 || strcmp(cases, "UPPER") == 0)
		{
			printf("Enter start Alphabet ");
			scanf(" %c", &start);

			printf("Enter end Alphabet ");
			scanf(" %c", &end);
			
			printf("Alphabets from %c - %c is", start, end);

			if (start < end)
			{
				for (i = start; i <= end; i++)
					if (i != end)
					printf(" %c", i);
					else
					printf(" %c\n", i);
			}
			else
			{
				for (i = start; i >= end; i--)
					if (i != end)
					printf(" %c ", i);
					else
					printf(" %c\n", i);

			}
		}

	}
	else

	return (0);
}
