#include <stdio.h>
#include <stdlib.h>

struct person {
	  char name[50];
	    int age;
	      float salary;
};

typedef struct person Berson;

int main()
{
	Berson cal;
	cal.age = 30;
	cal.salary = 100;

	printf("My age is %d\n", cal.age);
}
