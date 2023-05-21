#include <stdio.h>

struct town
{
	int population;
	char * name;
	char sign;
};

int main(void)
{
	struct town City = {4000000, "Nairobi", 'N'};
	struct town * ptr;
	ptr = &City;

	printf("%s is a vibrant city\n", City.name);
	printf("%s is a vibrant city\n", ptr -> name);

}
