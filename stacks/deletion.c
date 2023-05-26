#include "main.h"

extern int stack[4];
extern int top;

void pop()
{
	int element;
	if (top == -1)
	printf("stack underflow");

	else
	{
	//stack[top] = element;
	printf("The deleted item is %d\n",stack[top]);
	top--;
	}
}
