#include "main.h"

int stack[4], top = 3;

int main()
{

	stack[0] = 10;
	stack[1] = 20;
	stack[2] = 30;
	stack[3] = 40;

	printf("the seconde element is %d\n", stack[1]);

	pop();
	pop();
	pop();
	pop();
	pop();
}
