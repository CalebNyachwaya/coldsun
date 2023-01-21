#include <stdio.h>

/* function prototype declaratio, done in header file --> main.h */
int addd (int *p, int *q);

/**
 * main - function the prints the sum of two numbers
 * Return: always 10
 */
int main ()
{
  int a = 5, b = 10, result = 0;

  int (*ptr) (int *, int *) = addd;
  result = ptr (&a, &b); /*used the address in order to change values*/

  printf ("The sum of %d and %d is %d\n", a, b, result);

  return 0;
}

/**
 * add - returns the sum of entered arguments
 * Description: function definition is done in the c file --> 1-main.c
 *
 * @p: the first parameter
 * @q: the second parameter
 * Return: sum of the entered parameters
 */
int addd (int *p, int *q)
{
  int a, b;
  *p = 20;
  *q = 40;
  return (*p + *q);
}

