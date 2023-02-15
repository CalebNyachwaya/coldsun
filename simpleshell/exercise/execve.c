#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;

	char *argv[] = {"/bin/ls", "-a", NULL};
	pid = fork();

	if (pid == -1)
		return (-1);
	if (pid == 0);
	{
		int val = execve(argv[0], argv, NULL);
			if (val == -1)
				perror("Error");
 	}
	else
	{
		wait(NULL);
		printf("Done with execve/n");
	}
}
