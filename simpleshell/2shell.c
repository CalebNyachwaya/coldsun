#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	char *str = NULL;
	size_t n;
	char *stkn;
	pid_t mypid;
	int status, i;

	while (1)
	{
	printf("$ ");
	getline(&str, &n, stdin);

	stkn = strtok(str, " \n");/*solves the issue of executing command*/

	char **arr = malloc(sizeof(char *) * 32);

	arr[0] = stkn;

	if (strcmp(arr[0], "exit") == 0)
		exit(0);

	i = 1;

	while (stkn != NULL)
	{
		stkn = strtok(NULL, " \n");
		arr[i] = stkn;
		i++;
	}

	mypid = fork();
	if (mypid == -1)
	{
		perror("Error");
		return (1);
	}
	else if (mypid == 0)/*solves the issue of exiting*/
	{
	execve(arr[0], arr, NULL);
	}
	else
	{
		wait(NULL);/*suspends the parent from action until the child finishes*/
	}
	}

	free(str);
	return (0);
}
