#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
/**
 * main - first version of a super simple shell that can
 * run commands with their full path, without any argument.
 *
 * Return: Always 0.
 */
int main()
{
	pid_t child;
	int status;
	char *line;
	size_t len;
	const char split[2] = " \n";
	char *run;
	char **exe;
	int i;

	while (1)
	{
		child = fork();
		if (child < 0)
		{
			perror("Error: CHILD < 0 !!!\n");
			return (-1);
		}
		if (child == 0)
		{
			line = malloc(sizeof(char) * len);
			if (line == NULL)
			{
				free(line);
				return (0);
			}
			printf("#cisfun$ ");
			getline(&line, &len, stdin);
			//printf("LINE: %s", line);
			run = strtok(line, split);
			exe = malloc(sizeof(char) * len);
			//printf("LEN: %i\n", (int) len);
			if (line == NULL)
			{
				free(line);
				return (0);
			}
			i = 0;
			while(run != NULL)
			{
				//printf("RUN: %s\n", run);
				exe[i] = run;
				//printf("EXE: %s\n", exe[i]);
				run = strtok(NULL, split);
				i++;
			}
			exe[i] = 0;
			if (execve(exe[0], exe, NULL) == -1)
			{
				perror("Error: !!!");
			}
		}
		if (child > 0)
		{
			wait(&status);
		}
		//free(line);
		//free(exe);
	}
	return (0);
}
/*

	int i = 0;
	int j = 0;
	char **run;


  printf("You wrote: %s", line);
  i++;
  sleep(1);
  _exit(0);
  printf("I'm child, my PID is: %d and my father is: %d\n", getpid(), getppid());
  printf("I'm father, my PID is: %d\n", getpid());
*/
