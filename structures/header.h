#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * struct test - structure of car
 * @year: name of the year
 * @make: name of the manufacture company
 * @model: name of the model of the car
 */
typedef struct
{
	int year;
	char *make;
	char *model;
}
Car;

#endif
