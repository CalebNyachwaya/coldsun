#include <stdio.h>

/*function declaration*/
int sub (int, int);
float add (float, float);


void main ()
{
  int s = 0;
  float z;
  int (*ptr) (int, int) = sub;
  s = (ptr) (10, 4);		/*function calling, this method is popular */
  printf ("subtraction = %d\n", s);

  float (*ptr2) (float, float) = &add;
  z = (*ptr2) (10, 20);		/*function calling */
  printf ("%f\n", z);

}

/*function definition*/
int sub (int a, int b)
{
  return (a - b);
}

float add (float a, float b)
{
  return (a + b);
}#include <stdio.h>

/*function declaration*/
int sub (int, int);
float add (float, float);


void main ()
{
  int s = 0;
  float z;
  int (*ptr) (int, int) = sub;
  s = (ptr) (10, 4);		/*function calling, this method is popular */
  printf ("subtraction = %d\n", s);

  float (*ptr2) (float, float) = &add;
  z = (*ptr2) (10, 20);		/*function calling */
  printf ("%f\n", z);

}

/*function definition*/
int sub (int a, int b)
{
  return (a - b);
}

float add (float a, float b)
{
  return (a + b);
}
