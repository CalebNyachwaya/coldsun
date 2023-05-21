#include <stdio.h>
#include <string.h> /*header file with strlen function*/

int main ()
{
  int arr[] = { 10, 5, 15, 12, 90, 80 };
  char str[] = "Caleb";
  int arrlen = sizeof (arr) / sizeof (arr[1]);
  int lenOfString = sizeof (str) / sizeof (str[0]);

  printf("%ld\n", sizeof (arr));
  printf("%ld\n", sizeof (arr[1]));
  printf("%d\n", arrlen);
  printf("-------------------------------------------\n");

  printf("%ld\n", sizeof (str));/*includes the null character*/
  printf("%ld\n", sizeof (str[0]));
  printf("%d\n", lenOfString);
  printf("-------------------------------------------\n");
  
  printf ("%ld", strlen (str));

}
