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
	int status;

	while(1)
	{
	printf("$ ");
	getline(&str, &n, stdin);

	stkn = strtok(str, "\n");

	char *arr[] = {str, NULL};
	mypid = fork();
	if (mypid == -1)
	{
		perror("Error");
		return (1);
	}
	else if(mypid == 0)
	{
	execve(arr[0], arr, NULL);
	}
	else
	{
		wait(NULL);
	}
	}
	
	free(str);
	return (0);
}
