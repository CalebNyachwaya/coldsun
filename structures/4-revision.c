#include "main.h"

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	Car nganya;

	nganya.year = 2018;
	nganya.make = "Isuzu";
	nganya.model = "Hiace";
	printf("This is an %s %s\n", nganya.make, nganya.model);
	printf("It was manufactured in the year %d\n", nganya.year);
	printf("I love %ss\n", nganya.make);

	return (0);
}
