#include <stdio.h>

int main(void)

{
	int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
	int i, j;
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j == 2)
			printf("%d\n", matrix[i][j]);
			else{
			printf("%d ", matrix[i][j]);}
		}

	}
}
