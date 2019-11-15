#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - program that executes the command ls -l /tmp in
 * 5 different child processes. Each child should be created by the same process
 * (the father). Wait for a child to exit before creating a new child.
 * Return: output
 */
int main(void)
{
	pid_t child1_pid, child2_pid, child3_pid, child4_pid, child5_pid;
	int status1, status2, status3, status4, status5;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

	child1_pid = fork();
	if (child1_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child1_pid == 0)
	{
		printf("I'm the first child (%d, son of %d)\n", getpid(), getppid());
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error:");
		}
		printf("Command executed by first child\n");
	}
	else
	{
		wait(&status1);
		printf("  OK for first child\n");
		printf("  I'm the father (%d, son of %d)\n", getpid(), getppid());
		child2_pid = fork();
		if (child2_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child2_pid == 0)
		{
			printf("I'm the second child (%d, son of %d)\n", getpid(), getppid());
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
			printf("Command executed by second child\n");
		}
		else
		{
			wait(&status2);
			printf("  OK for second child\n");
			printf("  I'm the father (%d, son of %d)\n", getpid(), getppid());
			child3_pid = fork();
			if (child3_pid == -1)
			{
				perror("Error:");
				return (1);
			}
			if (child3_pid == 0)
			{
				printf("I'm the third child (%d, son of %d)\n", getpid(), getppid());
				if (execve(argv[0], argv, NULL) == -1)
				{
					perror("Error:");
				}
				printf("Command executed by third child\n");
			}
			else
			{
				wait(&status3);
				printf("  OK for third child\n");
				printf("  I'm the father (%d, son of %d)\n", getpid(), getppid());
				child4_pid = fork();
				if (child4_pid == -1)
				{
					perror("Error:");
					return (1);
				}
				if (child4_pid == 0)
				{
					printf("I'm the fourth child (%d, son of %d)\n", getpid(), getppid());
					if (execve(argv[0], argv, NULL) == -1)
					{
						perror("Error:");
					}
					printf("Command executed by fourth child\n");
				}
				else
				{
					wait(&status4);
					printf("  OK for fourth child\n");
					printf("  I'm the father (%d, son of %d)\n", getpid(), getppid());
					child5_pid = fork();
					if (child5_pid == -1)
					{
						perror("Error:");
						return (1);
					}
					if (child5_pid == 0)
					{
						printf("I'm the fifth child (%d, son of %d)\n", getpid(), getppid());
						if (execve(argv[0], argv, NULL) == -1)
						{
							perror("Error:");
						}
						printf("Command executed by fifth child\n");
					}
					else
					{
						wait(&status5);
						printf("  OK for fifth child\n");
						printf("  I'm the father (%d, son of %d)\n", getpid(), getppid());
					}
				}
			}
		}
	}
	return (0);
}
