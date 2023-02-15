#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Allways 0.
 */

int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%d\n", my_pid);
	return (0);
}
