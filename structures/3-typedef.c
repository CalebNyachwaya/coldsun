#include <stdio.h>

typedef struct
{
	int cohort;
	char * name;
}student;

int main()
{
student caleb;
student * a;
a = &caleb;
caleb.cohort = 12;
caleb.name = "nyach";

printf("I'm from %d\n", a -> cohort);
}
