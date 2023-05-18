#include <stdio.h>
#include <string.h>

struct Comp {
	char model[9];
	int year;
	char letter;
};

int main()
{

struct Comp staff;
strcpy(staff.model, "Dell");
staff.year = 2016;
staff.letter = 'P';


printf("The model is %s, year = %d and number plate %d\n", staff.model, staff.year, staff.letter);
}

