#include <stdio.h>

int add (int a, int b)
{
	  printf ("the sum of two numbers is %d\n", (a + b));
}

int sub (int a, int b)
{
	  printf ("the subtraction of two numbers is %d\n", (a - b));
}

int mul (int a, int b)
{
	  printf ("the multiplication of two numbers is %d\n", (a * b));
}

int main ()
{
	  int (*ptrfun[]) (int, int) =
		    {
			      add, sub, mul};
	    (ptrfun[0]) (100, 40);
	      (ptrfun[1]) (100, 40);
	        (ptrfun[2]) (100, 40);

		  return 0;
}

