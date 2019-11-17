#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * main - first version of a super simple shell that can
 * run commands with their full path, without any argument.
 *
 * Return: Always 0.
 */
int main()
{
	pid_t child1_pid;
	int status1;
	char *argv[] = {"prompt", NULL};

	child1_pid = fork();
	if (child1_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child1_pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error:");
		}
	}
	else
	{}
        return (0);
}
