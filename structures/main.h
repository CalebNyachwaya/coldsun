#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * struct test - structure of car
 * @year: name of the year
 * @make: name of the manufacture company
 * @model: name of the model of the car
 */
struct test
{
	int year;
	char *make;
	char *model;
};
typedef struct test Car;

#endif
