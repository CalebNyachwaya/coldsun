#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	
	printf("Before fork I was 1\n");

	pid = fork(); /* note it doesn't accept parameters*/

	if (pid == -1)
	{
		perror("unsuccesful\n");
	}

	printf("After fork I became 2\n");

}
